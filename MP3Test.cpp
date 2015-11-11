#pragma hdrstop
#pragma argsused

#include <tchar.h>
#include <stdio.h>
#include <iostream>
#include "MP3.h"
#include <irrKlang.h>
using namespace irrklang;

int main(int argc, const char** argv)
{
    MP3 mp3One;
    char* fileName1 = "Death Grips - Get Got.mp3";
    mp3One.play(fileName1);
    char i = 0;
    std::cin >> i; // wait for user to press some key

    mp3One.pause(fileName1);

    i = 0;
    std::cin >> i;

//    getch();

// start the sound engine with default parameters
//  ISoundEngine* engine = createIrrKlangDevice();
//
//  if (!engine)
//    return 0; // error starting up the engine
//
//  // play some sound stream, looped
//  engine->play2D("somefile.mp3", true);
//
//  char i = 0;
//  std::cin >> i; // wait for user to press some key
//
//  engine->drop(); // delete engine
//  return 0;
}

//
//#include <iostream>
//#include <string>
//#include <windows.h>
////#include <irrKlang.h>
//#include <irrKlang/irrKlang.h>
//
//
//using namespace std;
//using namespace irrklang;
//
//#pragma comment(lib, "irrKlang.lib")
//
//int main()
//{
//	// Create the sound engine
//	ISoundEngine* se = createIrrKlangDevice();
//
//	// check for errors with creation
//	if(!se)
//	{
//		cout << "Error: Could not create Sound Engine" << endl;
//		return 0;
//	}
//
//
//	string soundFile = "motor_bikes.mp3";
//
//	// Play some sound
//
//	if(se->play2D(soundFile.c_str()) != 0)
//	{
//		cout << "Error: Could not play file" << endl;
//		return 0;
//	}
//
//	// Keep playing until song/sound has ended
//	while(se->isCurrentlyPlaying(soundFile.c_str()))
//		Sleep(100);
//
//	se->drop();
//	return 0;
//}//
