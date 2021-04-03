#include "Labyrinth.h"
#include <iostream>

bool isPathToFreedom(MazeCell* start, const std::string& moves) {
    // /* TODO: Delete this comment and the remaining lines, then implement this function. */
    // (void) start;
    // (void) moves;
    // return false;
    int itemCount = 0;
    for(int i=0; i<moves.length(); i++){
        switch(moves[i]){
            case 'N':
                start = start->north;
                break;
            case 'E':
                start = start->east;
                break;
            case 'S':
                start = start->south;
                break;
            case 'W':
                start = start->west;
                break;
            default:
                break;
        }
        if (start == nullptr){
            return false;
        }
        if (start->whatsHere != Item::NOTHING){
            itemCount++;
            start->whatsHere = Item::NOTHING;
        }
    }
    if (itemCount == 3){
        return true;
    }
    else {
        return false;
    }
}
