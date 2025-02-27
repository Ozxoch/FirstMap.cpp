#pragma once
#include "PlacebleActor.h"
class Enemy : public PlacebleActor
{
public:
	Enemy(int x, int y, int deltaX = 0, int deltaY = 0);
	virtual void Draw() override;
	virtual void Update() override;

private:
	int m_movementInX;
	int m_movementInY;

	int m_currentMovementX;
	int m_currentMovementY;

	int m_directionX;
	int m_directionY;

	void UpdateDirection(int& current, int& direction, int& movement);
};