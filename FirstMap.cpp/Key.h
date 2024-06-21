#pragma once
#include "PlacebleActor.h"
class Key : public PlacebleActor
{
public:
	Key(int x, int y, int color)
		: PlacebleActor(x, y, color)
	{

	}
	virtual void Draw() override;
};