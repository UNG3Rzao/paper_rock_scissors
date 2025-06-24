#include <iostream>
#include "print.h"

using namespace std;

//记录双方胜场数和平局数
static int player_win = 0, computer_win = 0, ties = 0;

void prn_help()
{
    cout << "here are the characters you can use: \n";
    cout << "   1: you choose rock.\n";
    cout << "   2: you choose scissor.\n";
    cout << "   3: you choose water.\n";
    cout << "   4: you choose fire.\n";
    cout << "   5: you choose paper.\n";
    cout << "   6: check the help menu. \n";
    cout << "   7: check the current winnings and ties.\n";
    cout << "   0: end the game.\n";
    return;
}

void prn_current()
{
    cout << "you win: " << player_win << "; ai win: " << computer_win << "; tie: " << ties << endl;
    return;
}

void report(p_r_s player_choice, p_r_s computer_choice)
{
    outcome result = compare(player_choice, computer_choice);
    switch(result)
    {
        case win: 
        {
            cout << static_cast<int>(computer_choice) + 1 << ", you win" << endl, player_win ++ ;
            break;
        }
        case lose: 
        {
            cout << static_cast<int>(computer_choice) + 1 << ", you lose" << endl, computer_win ++ ;
            break;
        }
        case tie: 
        {
            cout << static_cast<int>(computer_choice) + 1 << ", tie game" << endl, ties ++ ;
            break;
        }
        default: cout << "ERROR!" << endl;
    }
}