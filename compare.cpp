#include <iostream>
#include "compare.h"

using namespace std;

outcome compare(p_r_s player_choice, p_r_s computer_choice)
{
    if(player_choice == computer_choice) return outcome::tie;
    switch(player_choice)
    {
        case rock:
        {
            if(computer_choice == water || computer_choice == scissor) return outcome::win;
            else return outcome::lose;
        }
        case paper:
        {
            if(computer_choice == rock || computer_choice == scissor) return outcome::win;
            else return outcome::lose;
        }
        case scissor:
        {
            if(computer_choice == water || computer_choice == fire) return outcome::win;
            else return outcome::lose;
        }
        case water:
        {
            if(computer_choice == paper || computer_choice == fire) return outcome::win;
            else return outcome::lose;
        }
        case fire:
        {
            if(computer_choice == rock || computer_choice == paper) return outcome::win;
            else return outcome::lose;
        }
        default: return outcome::lose;
    }
}