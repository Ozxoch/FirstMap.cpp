#include <iostream>
#include "Goal.h"

Goal::Goal(int x, int y)
	: PlacebleActor(x, y)
{

}

void Goal::Draw()
{
	std::cout << "X";
}