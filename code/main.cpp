/*
 * Author: Cole Deushane
 * Date Created: 8 April 2019
 * Date Last Modified: 23 April 2019
*/

#include <iostream>
#include <windows.h>

#include "coordinateFinder.h"
#include "events.h"

int main() {

    SetConsoleTitle("Input Recorder");

    std::cout << std::string(50, '-') << std::endl
         << "Input Recorder\n"
         << "1.) - press the spacebar to find current mouse coordinate.\n"
         << "2.) - press Esc to exit.\n"
         << std::string(50, '-') << std::endl;

    findCoord(std::cout);

    std::cout << std::endl;
    return 0;
}
