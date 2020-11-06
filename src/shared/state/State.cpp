#include "State.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <memory>
#include <vector>
#include "SpaceMapCell.h"
#include "ObstacleMapCell.h"
#include <map>

using namespace std;
using namespace state;


State::State()
{
    Cursor c{0, 0};
    this->cursor = c;
}

std::vector<Character&> getCharacters ()
{
    vector<unique_ptr<Character>> &refCharacters = characters;
    return refCharacters;
}



    Cursor &State::getCursor()
{
    Cursor &refCursor = cursor;
    return refCursor;
}


void initializeCharacters ();

void initializeMapCell ();
