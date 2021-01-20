#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <numeric>
#include "util.h"

using namespace std;
using namespace util;

int main(int argc, char const *argv[])
{
    vector<string> turn_outputs;
    turn_outputs.push_back("rock");
    turn_outputs.push_back("paper");
    turn_outputs.push_back("scissors");

    cout << "Rock Paper Scissors Game" << endl;
    cout << "========================" << endl;
    cout << "Accepted inputs: " + join(turn_outputs, "|") << endl;
    cout << endl;

    string input;
    cout << "Your turn: ";
    cin >> input;

    srand((unsigned)time(0));

    int bot_turn_index = rand() % 2;
    cout << "bot_turn_index: " + to_string(bot_turn_index) << endl;

    string bot_turn = turn_outputs[bot_turn_index];

    cout << "Bot turn: " + bot_turn << endl;

    if (input == bot_turn)
    {
        cout << "Tie" << endl;
        return 0;
    }
    else
    {
        if ((input == "rock" && bot_turn == "scissors") || (input == "paper" && bot_turn == "rock") || (input == "scissors" && bot_turn == "paper"))
        {
            cout << "You win!" << endl;
        }
        else
        {
            cout << "You lose" << endl;
        }
    }

    return 0;
}