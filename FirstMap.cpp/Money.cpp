#include <iostream>
#include "Money.h"

Money::Money(int x, int y, int worth)
	: PlacebleActor(x, y)
	, m_worth(worth)
{

}

void Money::Draw()
{
	std::cout << "$";
}