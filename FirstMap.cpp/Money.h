#pragma once
#include "PlacebleActor.h"
class Money : public PlacebleActor
{
public:
	Money(int x, int y, int worth);

	int GetWorth() const { return m_worth; }
	virtual void Draw() override;
private:
	int m_worth;
};