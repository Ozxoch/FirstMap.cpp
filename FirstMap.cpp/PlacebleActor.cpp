#include "PlacebleActor.h"

PlacebleActor::PlacebleActor(int x, int y, int color)
	: m_pPosition(new Point(x, y))
	, m_IsActive(true)
	, m_color(color)
{

}

PlacebleActor::~PlacebleActor()
{
	delete m_pPosition;
	m_pPosition = nullptr;
}

int PlacebleActor::GetXPosition()
{
	return m_pPosition->x;
}

int PlacebleActor::GetYPosition()
{
	return m_pPosition->y;
}

int* PlacebleActor::GetXPositionPointer()
{
	return &(m_pPosition->x);
}

int* PlacebleActor::GetYPositionPointer()
{
	return &(m_pPosition->y);
}

void PlacebleActor::SetPosition(int x, int y)
{
	m_pPosition->x = x;
	m_pPosition->y = y;
}

void PlacebleActor::Place(int x, int y)
{
	m_pPosition->x = x;
	m_pPosition->y = y;
	m_IsActive = true;
}