#include "Player.h"
#include <iostream>

#include "Key.h"

using namespace std;

constexpr int KStartingNumberOfLives = 3;

Player::Player()
	: PlacebleActor(0,0)
	, m_pCurrentKey(nullptr)
	, m_money(0)
	, m_lives(KStartingNumberOfLives)
{

}
bool Player::HasKey()
{
	return m_pCurrentKey != nullptr;
}

bool Player::HasKey(int color)
{
	return HasKey() && m_pCurrentKey->GetColor() == color;
}

void Player::PickupKey(Key* key)
{
	m_pCurrentKey = key;
}
void Player::DropKey()
{
	if (m_pCurrentKey)
	{
		m_pCurrentKey->Place(m_pPosition->x, m_pPosition->y);
		m_pCurrentKey = nullptr;
	}
}

void Player::Draw()
{
	cout << "@";
}