#include "Cursor.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <memory>
#include <vector>

using namespace std;
using namespace state;


    // Operations
  public:
    Cursor::Cursor(int x, int y)
{
    this->position.setX(x);
    this->position.setY(y);
}
    bool Cursor::isMapCell()
{
    return false;
}
    void Cursor::move(Position &destination)
{
    this->position = destination;
}


