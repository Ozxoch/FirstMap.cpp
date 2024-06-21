#pragma once
#include "PlacebleActor.h"
class Goal : public PlacebleActor
{
public:
	Goal(int x, int y);

	virtual void Draw() override;
};