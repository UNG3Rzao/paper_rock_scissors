#include <iostream>
#include "select.h"

using namespace std;

p_r_s selection_by_player(int choice)
{
    p_r_s result;
    switch(choice)
    {
        case 1: return p_r_s::rock;
        case 2: return p_r_s::scissor;
        case 3: return p_r_s::water;
        case 4: return p_r_s::fire;
        case 5: return p_r_s::paper;
    }
    return result;
}

p_r_s selection_by_computer()
{
    int choice = rand() % 5 + 1;
    p_r_s result;
    switch(choice)
    {
        case 1: return p_r_s::rock;
        case 2: return p_r_s::scissor;
        case 3: return p_r_s::water;
        case 4: return p_r_s::fire;
        case 5: return p_r_s::paper;
    }
    return result;
}