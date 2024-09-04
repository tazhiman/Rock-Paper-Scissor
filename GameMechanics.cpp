#include <time.h>
#include "GameMechanics.h"

int main()
{
    srand(time(0));
    // cout << "Enter Rock, Paper or Scissors" << "\n";
    // cin >> UserInput;

    // cout << "You have entered: " + UserInput << "\n";

    string ComputerMove = CalculateComputerMove();
    cout << "Computer's Move: " + ComputerMove << "\n";
    WinOrLose = GameMechanism(ComputerMove, UserInput);
    cout << "YOU " + WinOrLose;

}
