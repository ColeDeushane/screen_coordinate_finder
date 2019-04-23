/*
 * Author: Cole Deushane
 * Date Created: 8 April 2019
 * Date Last Modified: 23 April 2019
*/

#include <iostream>
#include <windows.h>

#include "coordinateFinder.h"
#include "events.h"

// void function used to find mouse position (x, y) coordinates
void findCoord(std::ostream &print) {

    KeyBoard keyEvent;      // used to detect key presses
    POINT screenPt;         // used to store and display pixel coordinates
    bool running = true;    // used to hold an infinite loop

    while(running) {

        if(keyEvent.spacebar()){

            GetCursorPos(&screenPt);
            print << screenPt.x << ' ' << screenPt.y << ' ' << std::endl;
            Sleep(200);

        } else if(keyEvent.zero()){

            print << "key-zero " << std::endl;
            Sleep(200);

        } else if(keyEvent.one()){

            print << "key-one " << std::endl;
            Sleep(200);

        } else if(keyEvent.two()){

            print << "key-two " << std::endl;
            Sleep(200);

        } else if(keyEvent.three()){

            print << "key-three " << std::endl;
            Sleep(200);

        } else if(keyEvent.four()){

            print << "key-four " << std::endl;
            Sleep(200);

        } else if(keyEvent.five()){

            print << "key-five " << std::endl;
            Sleep(200);

        } else if(keyEvent.six()){

            print << "key-six " << std::endl;
            Sleep(200);

        } else if(keyEvent.seven()){

            print << "key-seven " << std::endl;
            Sleep(200);

        } else if(keyEvent.eight()){

            print << "key-eight " << std::endl;
            Sleep(200);

        } else if(keyEvent.nine()){

            print << "key-nine " << std::endl;
            Sleep(200);

        } else if(keyEvent.escape()){

            running = false;
            Sleep(200);

        } else {
            // do nothing
        }
    }
}
