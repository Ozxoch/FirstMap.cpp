#pragma once
#include<string>
#include <vector>

class PlacebleActor;

class Level
{
	char* m_pLevelData;
	int m_height;
	int m_width;

	std::vector<PlacebleActor*> m_pActors;

public:
	Level();
	~Level();

	bool Load(std::string levelName, int* playerX, int* playerY);
	void Draw();
	PlacebleActor* UpdateActors(int x, int y);

	bool IsSpace(int x, int y);
	bool IsWall(int x, int y);


	int GetHeight() { return m_height; }
	int GetWidth() { return m_width; }

private:
	bool Convert(int* playerX, int* playerY);
	int GetIndexFromCoordinates(int x, int y);
};