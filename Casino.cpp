#include <iostream>
using namespace std;

int coinflip()
{
    char PlayAgain = 'y';
    int yourchoice;
    while (PlayAgain == 'y' || PlayAgain == 'Y')
    {
        cout << "Guess it's Heads or Tails\n"
             << endl;

        cout << "1.Head\n";
        cout << "2.Tail" << endl;
        cin >> yourchoice;

        int random_guess = rand() % 2 + 1; // rand->Random Number Generator (1 for head , 2 for tail)
        cout << "Flipping coin...\n";

        if (random_guess == 1)
        {
            cout << "It's Heads\n";
        }
        else
        {
            cout << "It's Tails";
        }

        if (yourchoice == random_guess)
        {
            cout << " You guessed it right!\n";
        }
        else
        {
            cout << " Oops!! Wrong guess.\n";
        }
        cout << "Do you want to try again?\nIf yes type Y\n If no type N\n";
        cin >> PlayAgain;
    }
    cout << "Thanks for playing!\n";
    return 0;
}

int rockpaper()
{
    int yourchoice;
    cout << "\nIt's a 3 round game\n";

    int PlayAgain = 'y';
    while (PlayAgain == 'y' || PlayAgain == 'Y')
    {
        int i = 1;
        while (i < 4)
        {
            cout << "\nRound " << i << " - Choose any one!" << endl;

            cout << "1.Rock\n2.Paper\n3.Scissors" << endl;
            cin >> yourchoice;

            int comp_choice = rand() % 3; // 0->rock 1->paper 2->scissor
            if (yourchoice == 1)
            { // if player choosed rock
                if (comp_choice == 0)
                { // rock = rock
                    cout << "\nComputer choosed rock\nIt's a draw!\n";
                }
                else if (comp_choice == 1)
                { // rock <paper
                    cout << "\nComputer choosed paper\nYou loose!\n";
                }
                else
                { // rock>scissor
                    cout << "\nComputer choosed scissor\nYou Won!\n";
                }
            }

            else if (yourchoice == 2)
            { // if player choosed paper
                if (comp_choice == 0)
                { // paper > rock
                    cout << "\nComputer choosed rock\nYou won!\n";
                }
                else if (comp_choice == 1)
                { // paper =paper
                    cout << "\nComputer choosed paper\nIt's a draw!\n";
                }
                else
                { // paper<scissor
                    cout << "\nComputer choosed scissor\nYou Loose!\n";
                }
            }

            else if (yourchoice == 3)
            { // if player choosed scissor
                if (comp_choice == 0)
                { // scissor< rock
                    cout << "\nComputer choosed rock\nYou loose!\n";
                }
                else if (comp_choice == 1)
                { // scissor >paper
                    cout << "\nComputer choosed paper\nYou won!\n";
                }
                else
                { // scissor=scissor
                    cout << "\nComputer choosed scissor\nIt's a draw!\n";
                }
            }
            cout << "\nPress $ for next round\n";
            char $;
            cin >> $;
            if ($ == '$')
            {
                i++;
            }
        }
        cout << "Do you want to Play again?\nIf yes type Y\n If no type N\n";
        cin >> PlayAgain;
    }
    cout << "Thanks for playing!\n";
    return 0;
}



// void tictactoe();




int sevenup()
{
    cout << "It's a 2 dice game!\nChoose weather the sum is Seven Up or Down\n";
    int a;
    char PlayAgain = 'y';
    while (PlayAgain == 'y' || PlayAgain == 'Y')
    {
        cout << "1.7 UP\n2.7 DOWN\n";
        cin >> a;
        int random_no = (rand() % 11) + 2; // (0 to 10) + 2 → 2 to 12
        if (random_no > 7)
        {
            if (a == 2)
            {
                cout << "You guessed it correct!\n";
            }
            else
            {
                cout << "Oops wrong guess\n";
            }
        }
        else
        {
            if (a == 1)
            {
                cout << "You guessed it correct!\n";
            }
            else
            {
                cout << "Oops wrong guess\n";
            }
        }
        cout<<"\nThe number was "<<random_no;
        cout << "\n\n\nDo you want to Play again?\nIf yes type Y\n If no type N\n";
        cin >> PlayAgain;
    }
    cout << "Thanks for playing!\n";
    return 0;
}

int main()
{
    cout << "Welcome to PlayHub\n\n";
    cout << "1. Coin Flip" << endl;
    cout << "2. Rock Papaer Scissor" << endl;
    cout << "3. Tic Tac Toe" << endl;
    cout << "4. 7 UP or 7 DOWN\n\n"
         << endl;

    cout << "Enter your choice" << endl;
    int choice;
    cin >> choice;

    switch (choice)
    {
    case 1:
        coinflip();
        break;
    case 2:
        rockpaper();
        break;
    case 3:
        // tictactoe();
        break;
    case 4:
        sevenup();
        break;
    default:
        cout << "Invalid choice. \n Choose between 1-4.\n ";
        break;
    }
    return 0;
}