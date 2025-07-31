#include <iostream>
#include<cstdlib>
#include <ctime>
using namespace std;

//-----------------------------------------------------------coinflip------------------------------------------------------------
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
        cout << "\n\nFlipping coin...\n\n";

        if (random_guess == 1)
        {
            cout << "It's Heads\n";
        }
        else
        {
            cout << "It's Tails\n";
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





//-------------------------------------------------------------------Rockpaper---------------------------------------------------
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
            {
                if (comp_choice == 0)
                    cout << "\nComputer chose rock\nIt's a draw!\n";
                else if (comp_choice == 1)
                    cout << "\nComputer chose paper\nYou lose!\n";
                else
                    cout << "\nComputer chose scissor\nYou won!\n";
            }
            else if (yourchoice == 2)
            {
                if (comp_choice == 0)
                    cout << "\nComputer chose rock\nYou won!\n";
                else if (comp_choice == 1)
                    cout << "\nComputer chose paper\nIt's a draw!\n";
                else
                    cout << "\nComputer chose scissor\nYou lose!\n";
            }
            else if (yourchoice == 3)
            {
                if (comp_choice == 0)
                    cout << "\nComputer chose rock\nYou lose!\n";
                else if (comp_choice == 1)
                    cout << "\nComputer chose paper\nYou won!\n";
                else
                    cout << "\nComputer chose scissor\nIt's a draw!\n";
            }

            // Askes player for next round only if it's not the last round
            if (i < 3){
                cout << "\nPress $ to continue to the next round\n";
                char next;
                cin >> next;
                while (next != '$') {
                    cout << "Please press $ to continue\n";
                    cin >> next;
                }
            }
            i++;
        }
        cout << "\nThanks for playing!\nDo you want to play again?\nIf yes, type Y\nIf no, type N\n";
        cin >> PlayAgain;
    }

    cout << "Goodbye!\n";
    return 0;
}


//----------------------------------------------------------------------Sevenup-----------------------------------------------
int sevenup()
{
    srand(time(0)); 

    cout << " Welcome to the 2-Dice Seven Up-Down Game! \n";
    char PlayAgain = 'y';

    while (PlayAgain == 'y' || PlayAgain == 'Y')
    {
        int choice;
        cout << "\nMake your guess:\n";
        cout << "1. 7 UP (sum > 7)\n";
        cout << "2. 7 DOWN (sum < 7)\n";
        cout << "3. Exactly 7\n";
        cout << "Enter your choice (1/2/3): ";
        cin >> choice;

        cout << "\nPress any key then hit ENTER to roll the dice: ";
        char rollKey;
        cin >> rollKey; 

        // dice rolling
        int die1 = (rand() % 6) + 1;
        int die2 = (rand() % 6) + 1;
        int sum = die1 + die2;

        cout << "Value on Die 1 :"<< die1 << "\n"<< "Value on Die 2 :" << die2 << "\n";
        cout<<"Therefore the sum is:"<<sum<<"\n"<<endl;

        if (sum > 7 && choice == 1)
            cout << " You guessed it right! It's 7 UP!\n";
        else if (sum < 7 && choice == 2)
            cout << " You guessed it right! It's 7 DOWN!\n";
        else if (sum == 7 && choice == 3)
            cout << " You guessed it right! It's exactly 7!\n";
        else
            cout << " Oops! Wrong guess.\n";

        cout << "\nDo you want to play again? (Y/N): ";
        cin >> PlayAgain;
    }

    cout << "\nThanks for playing!\n";
    return 0;
}



//--------------------------------------------------Balance---------------------------------------------------------------
void current_balance(int balance)
{
    cout << "Your current balance: " << balance << " coins\n";
}

//---------------------------------------------------Instructions--------------------------------------------------------
void instructions() {
    cout << "\n--- Instructions ---\n";
    cout << "- Start with 1000 coins.\n";
    cout << "- Winning gives double the bid.\n";
    cout << "- Losing costs the bid.\n";
}

//---------------------------------------------------Menu----------------------------------------------------------------
int menu()
{
    int menu_choice;
    cout << "\n------ MENU ------\n";
    cout << "1. Play Games\n";
    cout << "2. Read Instructions\n";
    cout << "3. Check Balance\n";
    cout << "4.Exit Game\n";
    cout << "Enter your choice: ";
    cin >> menu_choice;
    return menu_choice;
}



//--------------------------------------------------------------Main--------------------------------------------------------------
int main()
{
    int balance=1000;
    
    
    cout << "Welcome to PlayHub\n\n";
   

    int menu_choice;
    int switch_choice;
    while(menu_choice!=4){
        switch_choice=menu();
//-------------------------------------------------------------------menu switch case--------------------------------------------------------
        switch (switch_choice)
    {
    case 1://Games
        cout << "1. Coin Flip\n Bid-100 coins" << endl;
    cout << "2. Rock Papaer Scissor\n Bid-300 coins" << endl;
    
    cout << "3. 7 UP or 7 DOWN\n Bid-200 coins\n"
    <<"4.Exit"
         << endl;

    cout << "Enter your choice" << endl;
    int game_choice;
    cin >> game_choice;
        while(game_choice!=4){

//-----------------------------------------------------------------game switch case-----------------------------------------------------------
            switch(game_choice){
        case 1:
        coinflip();
        break;
    case 2:
        rockpaper();
        break;
    case 3:
        sevenup();
        break;
    case 4://exit
         break;       
    default:
        cout << "Invalid choice. \n Choose between 1-4.\n ";
        break;
        }
        }
    break;
//--------------------------------------------------------------------------------------------------------------------------------------------
        case 2:
        instructions();
        break;

        case 3:
        current_balance(balance);
        break;

        case 4:
         cout << "Thanks for playing! \n";
                break;

       
    }}
 //---------------------------------------------------------------------------------------------------------------------------------------------   
    return 0;
}


//if player plays a game and go back to other game to we have to create a menu for it
//and point system
//leaderboard to hold the top score(optional)
//credit 
//deducted
//request for extra coin when balance becomes zero