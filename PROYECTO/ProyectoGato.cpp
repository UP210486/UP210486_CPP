#include <iostream>
#include <unistd.h>

using namespace std;
void Tab(int);
int PlayerTurn = 0;
/*Main board*/
char GameArea[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
/*Board used by CPU*/
char ImaginaryGameArea[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
/*Select a play in the board AreaJuego[3][3]*/
int SelectPlay();
/*Change value in the vector AreaJuego[3][3]*/
void PlayReplacement(int Play);
/*Change values in TableroImaginario[3][3] with X*/
void ImaginaryPlayReplacementX(int);
/*Change values in TableroImaginario[3][3] with O*/
void ImaginaryPlayReplacementO(int);
/*Check if the play has already been inputted
Params:
AreaJuego[3][3]*/
bool CheckValidPlay(int Play);
/*CPU process to determine if the following play has alread been used in its imaginary board
Params:
TableroImaginario[3][3]*/
bool CheckValidPlayImaginary(int);
/*Gamemode, 2 players or VS CPU*/
void GameMode(int);
/*Check if someone has won the match
Params:
AreaJuego[3][3]*/
bool CheckWinner(int Play);
/*CPU process to determine if the following play wins or not
Params:
TableroImaginario[3][3]*/
bool CheckImaginaryWinner(int);
/*Cloned Board Area for the CPU for calculating all possible plays
Params:
AreaJuego[3][3]*/
void ImaginaryArea();
/*Value returned by the CPU, random or calculated
Params:
MejorJugada*/
int CPUTurn();
/*Calculation for all possibilities to determine the best play
Params:
VerificarGanadorImaginario, AreaImaginaria, ComprobarJugadaOcupadaImaginaria, ReemplazarCasillaXImaginaria, ReemplazarCasillaOImaginaria*/
int BestPlay(char);
void gotoxy(int x, int y);

const char PC = 'O';
const char HUMAN = 'X';
const string BOARD = "Real";
const string BOARDCPU = "Imaginario";
//---------------------ISSUE---------------------------
/*
 1 | 2 | 3
---|---|---
 4 | 5 | 6
---|---|---
 7 | 8 | 9
*/
//------------------ MAIN FUNCTION ---------------------

int main()
{
    int board, play, GameMode, CPU;
    bool playocuppied = true, winner = false;
    Tab(board);
    gotoxy (70,16);
    cout << "------GAMEMODE------";
    gotoxy (70,17);
    cout << "1. VS ";
    gotoxy (70,18);
    cout << "2. Singleplayer\n";
    gotoxy (70,19);
    cout << "Gamemode: ";
    cin >> GameMode;
    if (GameMode == 1) //----------------------------------------------Player vs Player--------------------------------------------
    {
        system("clear");
        Tab(board);
        do
        {
            play = SelectPlay();
            playocuppied = CheckValidPlay(play);
            if (playocuppied == true)
            {
                do
                {
                    cout << "Invalid play. Try again\n";
                    break;
                } while (playocuppied == true);
            }
            else if (playocuppied == false)
            {
                system("clear");
                PlayReplacement(play);
                Tab(board);
                PlayerTurn++;
            }
            winner = CheckWinner(winner);
        } while (winner == false && PlayerTurn < 9);
        if (PlayerTurn < 9)
        {
            if (PlayerTurn % 2 == 0)
            {
                cout << "\033[0;31m-PLAYER 2 WINS-\033[0m\n";
            }
            else
            {
                cout << "\033[0;34m-PLAYER 1 WINS-\033[0m\n";
            }
        }
        else
        {
            cout << "\033[0;33m----DRAW----\033[0m\n";
        }
    }
    else if (GameMode == 2) //--------------------------------------------------CPU------------------------------------------------
    {
        do
        {
            if (PlayerTurn % 2 == 0)
            {
                play = SelectPlay();
            }
            else
            {
                play = CPUTurn();
            }

            playocuppied = CheckValidPlay(play);
            if (playocuppied == true)
            {
                do
                {
                    cout << "Invalid play. Try again\n";
                    break;
                } while (playocuppied == true);
            }
            else if (playocuppied == false)
            {
                system("clear");
                PlayReplacement(play);
                Tab(board);
                PlayerTurn++;
            }
            winner = CheckWinner(winner);
        } while (winner == false && PlayerTurn < 9);
        if (PlayerTurn < 9)
        {
            if (PlayerTurn % 2 == 0)
            {
                cout << "\033[0;31m-GAME OVER-\033[0m\n";
            }
            else
            {
                cout << "\033[0;32m--YOU WON--\033[0m\n";
            }
        }
        else
        {
            cout << "\033[0;33m----DRAW----\033[0m\n";
        }
    }
    else
    {
        cout << "Invalid gamemode :(";
    }
    return 0;
}

int SelectPlay()
{
    int Play;
    do
    {
        gotoxy (75,14);
        cout << "Player " << PlayerTurn % 2 + 1 << " turn: \n";
        cin >> Play;
    } while (Play < 0 || Play > 9);
    return Play;
}

bool CheckValidPlay(int Play)
{
    int row = Play / 10, col = Play - 1;
    if (GameArea[row][col] == 'X' || GameArea[row][col] == 'O')
    {
        return true; // Significa que la casilla esta ocupada
    }
    else
    {
        return false;
    }
}

void PlayReplacement(int Play)
{
    if (PlayerTurn % 2 == 0)
    {
        int row = Play / 10, col = Play - 1;
        GameArea[row][col] = 'X';
    }
    else
    {
        int row = Play / 10, col = Play - 1;
        GameArea[row][col] = 'O';
    }
}

void Tab(int)
{
    int x = 0, y = 0;
    for (int row = 0; row < 5; row++)
    {
        gotoxy (75,8+row);
        for (int col = 0; col < 9; col++)
        {
            if (row == 1 || row == 3)
            {
                cout << "-";
            }
            else if (col == 1 || col == 4 || col == 7)
            {
                if (GameArea[x][y] == 'X')
                {
                    cout << "\033[0;34m" << GameArea[x][y] << "\033[0m";
                }else if (GameArea[x][y] == 'O')
                {
                    cout << "\033[0;31m" << GameArea[x][y] << "\033[0m";
                } else
                {
                    cout << GameArea[x][y];
                }
                
                
                
                y++;
            }
            else
            {
                cout << " ";
            }
            if (col == 2 || col == 5)
            {
                cout << "|";
            }
        }
        cout << "\n";
        if (row % 2 == 0)
        {
            x++;
        }

        y = 0;
    }
}

bool CheckWinner(int Play)
{
    bool VerifyWinner = false;
    for (int position = 0; position < 3; position++)
    {
        if ((GameArea[0][position] == GameArea[1][position]) && (GameArea[0][position] == GameArea[2][position]))
        {
            VerifyWinner = true;
            break;
        }
        else if ((GameArea[position][0] == GameArea[position][1]) && (GameArea[position][0] == GameArea[position][2]))
        {
            VerifyWinner = true;
            break;
        }
        else if ((GameArea[position][position] == GameArea[position + 1][position + 1]) && (GameArea[position][position] == GameArea[position + 2][position + 2]))
        {
            VerifyWinner = true;
            break;
        }
        else if ((GameArea[2][0] == GameArea[1][1]) && (GameArea[2][0] == GameArea[0][2]))
        {
            VerifyWinner = true;
            break;
        }
    }
    return VerifyWinner;
}

int CPUTurn()
{
    int Play;
    bool PlayUsed = false;
    Play = BestPlay(PC);
    if (Play != -1)
    {
        return Play;
    }

    Play = BestPlay(HUMAN);
    if (Play != -1)
    {
        return Play;
    }
    while (PlayUsed == false)
    {
        PlayUsed = CheckValidPlay(Play);
        Play = 1 + rand() % 9; // En caso de que ninguno ni otro, aleatoria
    }
    return Play;
}

void ImaginaryArea()
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            ImaginaryGameArea[row][col] = GameArea[row][col];
        }
    }
}

bool CheckValidPlayImaginary(int Play)
{
    int row = Play / 10, col = Play - 1;
    if (ImaginaryGameArea[row][col] == 'X' || ImaginaryGameArea[row][col] == 'O')
    {
        return true; // Significa que la casilla esta ocupada
    }
    else
    {
        return false;
    }
}

bool CheckImaginaryWinner(int Play)
{
    bool VerifyWinner = false;
    for (int position = 0; position < 3; position++)
    {
        if ((ImaginaryGameArea[0][position] == ImaginaryGameArea[1][position]) && (ImaginaryGameArea[0][position] == ImaginaryGameArea[2][position]))
        {
            VerifyWinner = true;
            break;
        }
        else if ((ImaginaryGameArea[position][0] == ImaginaryGameArea[position][1]) && (ImaginaryGameArea[position][0] == ImaginaryGameArea[position][2]))
        {
            VerifyWinner = true;
            break;
        }
        else if ((ImaginaryGameArea[position][position] == ImaginaryGameArea[position + 1][position + 1]) && (ImaginaryGameArea[position][position] == ImaginaryGameArea[position + 2][position + 2]))
        {
            VerifyWinner = true;
            break;
        }
        else if ((ImaginaryGameArea[2][0] == ImaginaryGameArea[1][1]) && (ImaginaryGameArea[2][0] == ImaginaryGameArea[0][2]))
        {
            VerifyWinner = true;
            break;
        }
    }
    return VerifyWinner;
}

void ImaginaryPlayReplacementX(int Play)
{

    int row = Play / 10, col = Play - 1;
    ImaginaryGameArea[row][col] = 'X';
}

void ImaginaryPlayReplacementO(int Play)
{
    int row = Play / 10, col = Play - 1;
    ImaginaryGameArea[row][col] = 'O';
}

int BestPlay(char PlayerType)
{
    bool PlayUsed = false;
    bool Winner = false;
    int CPUPlay = 0;
    ImaginaryArea();
    if (PlayerType == 'X')
    {
        do
        {
            CPUPlay++;
            PlayUsed = CheckValidPlayImaginary(CPUPlay);
            if (PlayUsed == false)
            {
                ImaginaryPlayReplacementX(CPUPlay);
                Winner = CheckImaginaryWinner(CPUPlay);
            }
            ImaginaryArea();
        } while (CPUPlay <= 9 && Winner == false);
    }
    else
    {
        do
        {
            CPUPlay++;
            PlayUsed = CheckValidPlayImaginary(CPUPlay);
            if (PlayUsed == false)
            {
                ImaginaryPlayReplacementO(CPUPlay);
                Winner = CheckImaginaryWinner(CPUPlay);
            }
            ImaginaryArea();
        } while (CPUPlay <= 9 && Winner == false);
    }
    if (CPUPlay >= 10)
    {
        CPUPlay = -1;
    }
    return CPUPlay;
}

void gotoxy(int x, int y){
    cout << "\033[" << y << ";" << x << "f";
}