#include <iostream>
#include "Game.h"

using namespace std;

int main()
{
	Game myGame;

	if (myGame.Load())
	{
		while (!myGame.IsGameOver())
		{
			myGame.Run();
		}
		
		if (myGame.DidUserQuit())
		{
			cout << "Thanks For playing" << endl;
		}
		else if (myGame.GetPlayerLives() < 0)
		{
			cout << "You Lose!!!" << endl;
			//PlayLoseSound();
		}
		else
		{
			cout << "You Won!!!" << endl;
			//PlayWinSound();
		}

	}
	else
	{
		cout << "Game did not load. Terminating now!" << endl;
	}
}


//void PlayDoorClosedSound()
//{
//	Beep(500, 75);
//	Beep(400, 57);
//}
//void PlayDoorOpenSound()
//{
//	Beep(1397, 200);
//}
//void PlayKeyPickupSound()
//{
//	Beep(1568, 200);
//}
//void PlayWinSound()
//{
//	Beep(1568, 200);
//	Beep(1568, 200);
//	Beep(1568, 200);
//	Beep(1245, 1000);
//	Beep(1397, 200);
//	Beep(1397, 200);
//	Beep(1397, 200);
//	Beep(1175, 1000);
//}