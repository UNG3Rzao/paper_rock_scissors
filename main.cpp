#include <iostream>
#include <ctime>
#include "p_r_s.h"
#include "print.h"
#include "select.h"

using namespace std;

int main()
{
    int choice;
    srand(time(NULL));
    while(cin >> choice)
    {
        switch(choice)
        {
            case 0:
            {
                cout << "the game has ended." << endl;
                return 0;
            }
            case 6:
            {
                prn_help();
                break;
            }
            case 7: 
            {
                prn_current();
                break;
            }
            default:
            {
                p_r_s player_choice = selection_by_player(choice);
                p_r_s computer_choice = selection_by_computer();
                report(player_choice, computer_choice);
            }
        }
    }
    return 0;
}