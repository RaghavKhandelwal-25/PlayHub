#include <iostream>
using namespace std;

void coinflip()
{
  
}

// void rockpaper();
// void tictactoe();
// void sevenup();

int main()
{
    cout << "Welcome to PlayHub\n\n";
    cout << "1. Coin Flip" << endl;
    cout << "2. Rock Papaer Scissor" << endl;
    cout << "3. Tic Tac Toe" << endl;
    cout << "4. 7 High\n\n"
         << endl;

    cout << "Enter your choice" << endl;
    int choice;
    cin >> choice;

    switch (choice)
    {
    case 1:
        // coinflip();
        break;
    case 2:
        // rockpaper();
        break;
    case 3:
        // tictactoe();
        break;
    case 4:
        // sevenup();
        break;
    default:
        cout << "Invalid choice. \n Choose between 1-4.\n ";
        break;
    }
    return 0;
}