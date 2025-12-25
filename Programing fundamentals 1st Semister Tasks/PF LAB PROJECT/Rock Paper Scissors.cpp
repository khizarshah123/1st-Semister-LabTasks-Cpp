#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int userChoice, computerChoice;
    int userScore = 0, computerScore = 0;
    char playAgain;

    srand(time(0));

    cout << " Rock Paper Scissors Game\n";
    cout << "===========================\n";

    do {
        cout << "\nChoose one:\n";
        cout << "1. Rock\n";
        cout << "2. Paper\n";
        cout << "3. Scissors\n";
        cout << "Enter your choice (1-3): ";
        cin >> userChoice;

        if (userChoice < 1 || userChoice > 3) {
            cout << " Invalid choice! Try again.\n";
            continue;
        }

        computerChoice = (rand() % 3) + 1;

        // Display choices
        cout << "\nYou chose: ";
        if (userChoice == 1) cout << "Rock";
        else if (userChoice == 2) cout << "Paper";
        else cout << "Scissors";

        cout << "\nComputer chose: ";
        if (computerChoice == 1) cout << "Rock";
        else if (computerChoice == 2) cout << "Paper";
        else cout << "Scissors";

        // Determine result
        cout << "\nResult: ";
        if (userChoice == computerChoice) {
            cout << "It's a Tie!";
        }
        else if ((userChoice == 1 && computerChoice == 3) ||
                 (userChoice == 2 && computerChoice == 1) ||
                 (userChoice == 3 && computerChoice == 2)) {
            cout << " You Win!";
            userScore++;
        }
        else {
            cout << " Computer Wins!";
            computerScore++;
        }

        // Display score
        cout << "\n\n Current Score";
        cout << "\nYou: " << userScore;
        cout << "\nComputer: " << computerScore << endl;

        cout << "\n Do you want to play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    // Final score
    cout << "\n===========================\n";
    cout << "🏁 Final Score\n";
    cout << "You: " << userScore << endl;
    cout << "Computer: " << computerScore << endl;

    if (userScore > computerScore)
        cout << " Congratulations! You won the game!\n";
    else if (computerScore > userScore)
        cout << " Computer won the game. Better luck next time!\n";
    else
        cout << " It's a tie overall!\n";

    cout << "Thanks for playing! ";

    return 0;
}