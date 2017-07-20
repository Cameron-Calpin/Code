#include <iostream>
#include <string>
#include <cstdlib>
 
 
using namespace std;
 
 
int row , column ;
 
 
int check_result(int board[][5])
{
    if (row == 3)
    {
        if ( board[0][0] == board[0][1] && board[0][1] == board[0][2] )
        {
            return 1;
        }
        else if ( board[1][0] == board[1][1] && board[1][1] == board[1][2] )
        {
            return 1;
        }
        else if ( board[2][0] == board[2][1] && board[2][1] == board[2][2] )
        {
            return 1;
        }
        else if ( board[0][0] == board[1][0] && board[1][0] == board[2][0] )
        {
            return 1;
        }
        else if ( board[0][1] == board[1][1] && board[1][1] == board[2][1] )
        {
            return 1;
        }
        else if ( board[0][2] == board[1][2] && board[1][2] == board[2][2] )
        {
            return 1;
        }
        else if ( board[0][0] == board[1][1] && board[1][1] == board[2][2] )
        {
            return 1;
        }
        else if ( board[0][2] == board[1][1] && board[1][1] == board[2][0] )
        {
            return 1;
        }
        else if ( board[0][0] != 1  && board[0][1] != 2  && board[0][2] != 3  && board[1][0] != 4  && board[1][1] != 5 &&
                  board[1][2] != 6  && board[2][0] != 7  && board[2][1] != 8  && board[2][2] != 9 )
        {
            return 0;
        }
        else
        {
            return -1 ;
        }
    }
    else if (row == 4)
    {
        if ( board[0][0] == board[0][1] && board[0][1] == board[0][2] && board[0][2] == board[0][3] )
        {
            return 1;
        }
        else if ( board[1][0] == board[1][1] && board[1][1] == board[1][2] && board[1][2] == board[1][3] )
        {
            return 1;
        }
        else if ( board[2][0] == board[2][1] && board[2][1] == board[2][2] && board[2][2] == board[2][3] )
        {
            return 1;
        }
        else if ( board[3][0] == board[3][1] && board[3][1] == board[3][2] && board[3][2] == board[3][3] )
        {
            return 1;
        }
        else if ( board[0][0] == board[1][0] && board[1][0] == board[2][0] && board[2][0] == board[3][0] )
        {
            return 1;
        }
        else if ( board[0][1] == board[1][1] && board[1][1] == board[2][1] && board[2][1] == board[3][1] )
        {
            return 1;
        }
        else if ( board[0][2] == board[1][2] && board[1][2] == board[2][2] && board[2][2] == board[3][2] )
        {
            return 1;
        }
        else if ( board[0][3] == board[1][3] && board[1][3] == board[2][3] && board[2][3] == board[3][3] )
        {
            return 1;
        }
        else if ( board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] == board[3][3] )
        {
            return 1;
        }
        else if ( board[0][3] == board[1][2] && board[1][2] == board[2][1] && board[2][1] == board[3][0] )
        {
            return 1;
        }
        else if ( board[0][0] != 1  && board[0][1] != 2  && board[0][2] != 3  && board[0][3] != 4  &&
                  board[1][0] != 5  && board[1][1] != 6  && board[1][2] != 7  && board[1][3] != 8  &&
                  board[2][0] != 9  && board[2][1] != 10 && board[2][2] != 11 && board[2][3] != 12 &&
                  board[3][0] != 13 && board[3][1] != 14 && board[3][2] != 15 && board[3][3] != 16 )
        {
            return 0;
        }
        else
        {
            return -1 ;
        }
    }
    else
    {
        if ( board[0][0] == board[0][1] && board[0][1] == board[0][2] && board[0][2] == board[0][3] && board[0][3] == board[0][4] )
        {
            return 1;
        }
        else if ( board[1][0] == board[1][1] && board[1][1] == board[1][2] && board[1][2] == board[1][3] && board[1][3] == board[1][4] )
        {
            return 1;
        }
        else if ( board[2][0] == board[2][1] && board[2][1] == board[2][2] && board[2][2] == board[2][3] && board[2][3] == board[2][4] )
        {
            return 1;
        }
        else if ( board[3][0] == board[3][1] && board[3][1] == board[3][2] && board[3][2] == board[3][3] && board[3][3] == board[3][4] )
        {
            return 1;
        }
        else if ( board[4][0] == board[4][1] && board[4][1] == board[4][2] && board[4][2] == board[4][3] && board[4][3] == board[4][4] )
        {
            return 1;
        }
        else if ( board[0][0] == board[1][0] && board[1][0] == board[2][0] && board[2][0] == board[3][0] && board[3][0] == board[4][0] )
        {
            return 1;
        }
        else if ( board[0][1] == board[1][1] && board[1][1] == board[2][1] && board[2][1] == board[3][1] && board[3][1] == board[4][1] )
        {
            return 1;
        }
        else if ( board[0][2] == board[1][2] && board[1][2] == board[2][2] && board[2][2] == board[3][2] && board[3][2] == board[4][2] )
        {
            return 1;
        }
        else if ( board[0][3] == board[1][3] && board[1][3] == board[2][3] && board[2][3] == board[3][3] && board[3][3] == board[4][3] )
        {
            return 1;
        }
        else if ( board[0][4] == board[1][4] && board[1][4] == board[2][4] && board[2][4] == board[3][4] && board[3][4] == board[4][4] )
        {
            return 1;
        }
        else if ( board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] == board[3][3] && board[3][3] == board[4][4] )
        {
            return 1;
        }
        else if ( board[0][4] == board[1][3] && board[1][3] == board[2][2] && board[2][2] == board[3][1] && board[3][1] == board[4][0] )
        {
            return 1;
        }
        else if ( board[0][0] != 1  && board[0][1] != 2  && board[0][2] != 3  && board[0][3] != 4  && board[0][4] != 5 &&
                  board[1][0] != 6  && board[1][1] != 7  && board[1][2] != 8  && board[1][3] != 9  && board[1][4] != 10 &&
                  board[2][0] != 11 && board[2][1] != 12 && board[2][2] != 13 && board[2][3] != 14 && board[2][4] != 15 &&
                  board[3][0] != 16 && board[3][1] != 17 && board[3][2] != 18 && board[3][3] != 19 && board[3][4] != 20 &&
                  board[4][0] != 21 && board[4][1] != 22 && board[4][2] != 23 && board[4][3] != 24 && board[4][4] != 25 )
        {
            return 0;
        }
        else
        {
            return -1 ;
        }
    }
}
 
 
string getsymbol (int x)
{
    switch (x)
    {
        case -1 : return "X " ; break;
        case  0 : return "O " ; break;
        case  1 : return "01" ; break;
        case  2 : return "02" ; break;
        case  3 : return "03" ; break;
        case  4 : return "04" ; break;
        case  5 : return "05" ; break;
        case  6 : return "06" ; break;
        case  7 : return "07" ; break;
        case  8 : return "08" ; break;
        case  9 : return "09" ; break;
        case  10 : return "10" ; break;
        case  11 : return "11" ; break;
        case  12 : return "12" ; break;
        case  13 : return "13" ; break;
        case  14 : return "14" ; break;
        case  15 : return "15" ; break;
        case  16 : return "16" ; break;
        case  17 : return "17" ; break;
        case  18 : return "18" ; break;
        case  19 : return "19" ; break;
        case  20 : return "20" ; break;
        case  21 : return "21" ; break;
        case  22 : return "22" ; break;
        case  23 : return "23" ; break;
        case  24 : return "24" ; break;
        case  25 : return "25" ; break;
        default  : cout << "Error ... something went wrong." ;
    }
}
 
 
void display_board_update(int board[][5],int row ,int column)
{
    system("cls") ;
    for (int i = 0 ; i < row ; i++)
    {
        for (int j = 0 ; j < column ; j++)
        {
            cout << "  " << getsymbol(board[i][j]) << "  |"  ;
        }
        cout << endl ;
    }
}
 
 
void play_move(int board[][5])
{
    int player = 1 , p ;
    int choose_move ;
    int  mark ;
 
 
    do
    {
        display_board_update(board,row,column) ;
        player = (player % 2) ? 1 : 2 ;
        cout << "player " << player << " , please choose your move : " ;
        cin >> choose_move ;
        mark = (player % 2) ? -1 : 0 ;
        player = player++ ;
        while (
            choose_move != board[0][0] &&choose_move != board[0][1] &&choose_move != board[0][2] &&choose_move != board[0][3] &&choose_move != board[0][4] &&
            choose_move != board[1][0] &&choose_move != board[1][1] &&choose_move != board[1][2] &&choose_move != board[1][3] &&choose_move != board[1][4] &&
            choose_move != board[2][0] &&choose_move != board[2][1] &&choose_move != board[2][2] &&choose_move != board[2][3] &&choose_move != board[2][4] &&
            choose_move != board[3][0] &&choose_move != board[3][1] &&choose_move != board[3][2] &&choose_move != board[3][3] &&choose_move != board[3][4] &&
            choose_move != board[4][0] &&choose_move != board[4][1] &&choose_move != board[4][2] &&choose_move != board[4][3] &&choose_move != board[4][4]
           )
        {
                player-- ;
                cout << "Invalid Move.Please Press 'enter key' and choose again : " << endl;
                cout << "player " << player << " choose your move :" ;
                cin >> choose_move ;
                player++ ;
        }
        for (int i = 0 ; i < row ;i++)
        {
            for (int j = 0 ; j < column ; j++)
            {
                if ( choose_move == board[i][j])
                {
                    board[i][j] = mark ;
                }
            }
        }
 
 
        p = check_result(board);
        if (p == 0)
        {
            display_board_update(board,row,column) ;
            cout << "\n\nResult : The Game Is Draw. \n\n" ;
            break ;
        }
    }while ( p != 1) ;
    if (p == 1)
    {
        display_board_update(board,row,column) ;
        cout << "\n\nResult : Player " << --player << " is winner. \n\n " ;
    }
}
 
 
int main()
{
    int board[5][5] ;
    int x = 1 ;
 
 
    cout << "Enter the size of board (e.g. 4 for 4 * 4 or 5 for 5*5), max size is 5 * 5 : " ;
    cin >> row ;
 
 
    while (row <3 || row >5)
    {
        cout << " \n\nyour entered board size is either less than the default size of 3 * 3 or more than the size of 5 * 5. \n please enter again. :" ;
        cin >> row ;
    }
    column = row ;
 
 
    for (int i = 0 ; i < row ; i++)
    {
        for (int j = 0 ; j < column ; j++)
        {
            board[i][j] = x++  ;
        }
    }
    play_move(board);
}