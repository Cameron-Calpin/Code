// Write a two-player tic-tac-toe game, allowing two humans to play against each other; use enums when possible to represent the values of the board.
 
 
#include <iostream>
 
 
using namespace std;
 
 
int x; // My clasic and favorite input variable
 
 
// Declaring Prototype Functions
void Show_Board ();
void BackGround_Work_P1 ();
void BackGround_Work_P2 ();
void UserInput ();
void ErrorMove ();
int GameCheck ();
 
 
//Board Visual_Spaces as Global Variables
char Space_1 = ('1');
char Space_2 = ('2');
char Space_3 = ('3');
char Space_4 = ('4');
char Space_5 = ('5');
char Space_6 = ('6');
char Space_7 = ('7');
char Space_8 = ('8');
char Space_9 = ('9');
 
 
// Board Space_Statuses Declared Globaly
enum TicTacToe {Empty, X_Filled, O_Filled};
 
 
int iSpace_1 = Empty;
int iSpace_2 = Empty;
int iSpace_3 = Empty;
int iSpace_4 = Empty;
int iSpace_5 = Empty;
int iSpace_6 = Empty;
int iSpace_7 = Empty;
int iSpace_8 = Empty;
int iSpace_9 = Empty;
 
 
int main ()
{
     
    // Intro and Intstructions...
    cout << "Awesome Student Presents C++ Tic Tac Toe!!\n";
    cout << "Intructions:\n";
    cout << "Get 3 in a row to win on a 3x3 grid!\n";
    cout << "Choose from squares 1 to 9 by inputing a number!\n\n";
     
    cout << "The grid can be seen as followed..\n\n";
    Show_Board();
     
    cout << "Player 1 --> X\n";
    cout << "Player 2 --> O\n\n";
     
    // Game
    bool game_done = false;
    while (!game_done)
    {
        cout << "Player 1's Turn!\n";
        UserInput();
        BackGround_Work_P1();
        GameCheck();
        Show_Board();
        if (GameCheck() != 0)
            break;
         
        cout << "Player 2's Turn!\n";
        UserInput();
        BackGround_Work_P2();
        GameCheck();
        Show_Board();
        if (GameCheck() != 0)
            game_done = true;
             
    }
     
    // Ending
    switch (GameCheck()) {
        case 1:
            cout << "Player 1 Wins!\n";
            break;
        case 2:
            cout << "Player 2 Wins!\n";
            break;
        case 3:
            cout << "It's a Draw!\n";
            break;
        default:
            break;
    }
}
 
 
 
 
void Show_Board () // Shows the Tic Tac Toe Board
{
    cout << "\t"<<Space_1<<"\t|\t"<<Space_2<<"\t|\t"<<Space_3<<"\n";
    cout << "----------------+---------------+---------------\n";
    cout << "\t"<<Space_4<<"\t|\t"<<Space_5<<"\t|\t"<<Space_6<<"\n";
    cout << "----------------+---------------+---------------\n";
    cout << "\t"<<Space_7<<"\t|\t"<<Space_8<<"\t|\t"<<Space_9<<"\n\n";
}
 
 
void BackGround_Work_P1 ()
{
    // Visual Change & Background Work
    bool done = false;
    while (!done) {
        switch (x) {
            case 1:
            {
                if (iSpace_1 == Empty)
                    Space_1 = ('X'), iSpace_1 = X_Filled, done = true;
                else if (iSpace_1 != Empty)
                    ErrorMove();
                break;
            }
            case 2:
            {
                if (iSpace_2 == Empty)
                    Space_2 = ('X'), iSpace_2 = X_Filled, done = true;
                else if (iSpace_2 != Empty)
                    ErrorMove();
                break;
            }
            case 3:
            {
                if (iSpace_3 == Empty)
                    Space_3 = ('X'), iSpace_3 = X_Filled, done = true;
                else if (iSpace_3 != Empty)
                    ErrorMove();
                break;
            }
            case 4:
            {
                if (iSpace_4 == Empty)
                    Space_4 = ('X'), iSpace_4 = X_Filled, done = true;
                else if (iSpace_4 != Empty)
                    ErrorMove();
                break;
            }
            case 5:
            {
                if (iSpace_5 == Empty)
                    Space_5 = ('X'), iSpace_5 = X_Filled, done = true;
                else if (iSpace_5 != Empty)
                    ErrorMove();
                break;
            }
            case 6:
            {
                if (iSpace_6 == Empty)
                    Space_6 = ('X'), iSpace_6 = X_Filled, done = true;
                else if (iSpace_6 != Empty)
                    ErrorMove();
                break;
            }
            case 7:
            {
                if (iSpace_7 == Empty)
                    Space_7 = ('X'), iSpace_7 = X_Filled, done = true;
                else if (iSpace_7 != Empty)
                    ErrorMove();
                break;
            }
            case 8:
            {
                if (iSpace_8 == Empty)
                    Space_8 = ('X'), iSpace_8 = X_Filled, done = true;
                else if (iSpace_8 != Empty)
                    ErrorMove();
                break;
            }
            case 9:
            {
                if (iSpace_9 == Empty)
                    Space_9 = ('X'), iSpace_9 = X_Filled, done = true;
                else if (iSpace_9 != Empty)
                    ErrorMove();
                break;
            }
            default:
                cin.clear(), cin.ignore(100, '\n'), cout << "Invalid Move!\n";
                break;
        }
    }
}
 
 
void BackGround_Work_P2 ()
{
    // Visual Change & Background Work
    bool done = false;
    while (!done) {
        switch (x) {
            case 1:
            {
                if (iSpace_1 == Empty)
                    Space_1 = ('O'), iSpace_1 = O_Filled, done = true;
                else if (iSpace_1 != Empty)
                    ErrorMove();
                break;
            }
            case 2:
            {
                if (iSpace_2 == Empty)
                    Space_2 = ('O'), iSpace_2 = O_Filled, done = true;
                else if (iSpace_2 != Empty)
                    ErrorMove();
                break;
            }
            case 3:
            {
                if (iSpace_3 == Empty)
                    Space_3 = ('O'), iSpace_3 = O_Filled, done = true;
                else if (iSpace_3 != Empty)
                    ErrorMove();
                break;
            }
            case 4:
            {
                if (iSpace_4 == Empty)
                    Space_4 = ('O'), iSpace_4 = O_Filled, done = true;
                else if (iSpace_4 != Empty)
                    ErrorMove();
                break;
            }
            case 5:
            {
                if (iSpace_5 == Empty)
                    Space_5 = ('O'), iSpace_5 = O_Filled, done = true;
                else if (iSpace_5 != Empty)
                    ErrorMove();
                break;
            }
            case 6:
            {
                if (iSpace_6 == Empty)
                    Space_6 = ('O'), iSpace_6 = O_Filled, done = true;
                else if (iSpace_6 != Empty)
                    ErrorMove();
                break;
            }
            case 7:
            {
                if (iSpace_7 == Empty)
                    Space_7 = ('O'), iSpace_7 = O_Filled, done = true;
                else if (iSpace_7 != Empty)
                    ErrorMove();
                break;
            }
            case 8:
            {
                if (iSpace_8 == Empty)
                    Space_8 = ('O'), iSpace_8 = O_Filled, done = true;
                else if (iSpace_8 != Empty)
                    ErrorMove();
                break;
            }
            case 9:
            {
                if (iSpace_9 == Empty)
                    Space_9 = ('O'), iSpace_9 = O_Filled, done = true;
                else if (iSpace_9 != Empty)
                    ErrorMove();
                break;
            }
            default:
                cin.clear(), cin.ignore(100, '\n'), cout << "Invalid Move!\n";
                break;
        }
    }
 
 
}
 
 
 
 
void UserInput ()  // So that letter inputs don't mess up the loops!
{
    while (!(cin >> x))
    {
        cout << "A number please..\n";
        cin.clear();
        cin.ignore(100, '\n');
    }
}
 
 
void ErrorMove () //Tells the user error move
{
    cin.clear();
    cin.ignore(100, '\n');
    cout << "Sorry but that space is filled by something.\n";
     
}
 
 
int GameCheck ()
{
    // Player 1 win conditions
    // -----------------------
    // Horizontal Wins
    if (iSpace_1 == X_Filled && iSpace_2 == X_Filled && iSpace_3 == X_Filled) // 1-2-3
        return 1;
    else if (iSpace_4 == X_Filled && iSpace_5 == X_Filled && iSpace_6 == X_Filled) // 4-5-6
        return 1;
    else if (iSpace_7 == X_Filled && iSpace_8 == X_Filled && iSpace_9 == X_Filled) // 7-8-9
        return 1;
     
    // Vertical Wins
    else if (iSpace_1 == X_Filled && iSpace_4 == X_Filled && iSpace_7 == X_Filled) // 1-4-7
        return 1;
    else if (iSpace_2 == X_Filled && iSpace_5 == X_Filled && iSpace_8 == X_Filled) // 2-5-8
        return 1;
    else if (iSpace_3 == X_Filled && iSpace_6 == X_Filled && iSpace_9 == X_Filled) // 3-6-9
        return 1;
     
    // Diagonal Wins
    else if (iSpace_1 == X_Filled && iSpace_5 == X_Filled && iSpace_9 == X_Filled) // 1-5-9
        return 1;
    else if (iSpace_3 == X_Filled && iSpace_5 == X_Filled && iSpace_7 == X_Filled) // 3-5-7
        return 1;
     
 
 
    // Player 2 win conditions
    // -----------------------
    // Horizontal Wins
    if (iSpace_1 == O_Filled && iSpace_2 == O_Filled && iSpace_3 == O_Filled) // 1-2-3
        return 2;
    else if (iSpace_3 == O_Filled && iSpace_5 == O_Filled && iSpace_6 == O_Filled) // 4-5-6
        return 2;
    else if (iSpace_7 == O_Filled && iSpace_8 == O_Filled && iSpace_9 == O_Filled) // 7-8-9
        return 2;
     
    // Vertical Wins
    else if (iSpace_1 == O_Filled && iSpace_4 == O_Filled && iSpace_7 == O_Filled) // 1-4-7
        return 2;
    else if (iSpace_2 == O_Filled && iSpace_5 == O_Filled && iSpace_8 == O_Filled) // 2-5-8
        return 2;
    else if (iSpace_3 == O_Filled && iSpace_6 == O_Filled && iSpace_9 == O_Filled) // 3-6-9
        return 2;
     
    // Diagonal Wins
    else if (iSpace_1 == O_Filled && iSpace_5 == O_Filled && iSpace_9 == O_Filled) // 1-5-9
        return 2;
    else if (iSpace_3 == O_Filled && iSpace_5 == O_Filled && iSpace_7 == O_Filled) // 3-5-7
        return 2;
     
    // Draw conditions
    // ----------------
     
    else if (iSpace_1 != Empty && iSpace_2 != Empty && iSpace_3 != Empty && iSpace_4 != Empty && iSpace_5 != Empty && iSpace_6 != Empty && iSpace_7 != Empty && iSpace_8 != Empty && iSpace_9 != Empty)
        return 3;
     
    // Continue conditions
    else
        return 0;
}