//Base MP3 Player
#ifndef MP3_H
#define MP3_H

#include <irrKlang.h>
//#include "File.h"
using namespace irrklang;

class MP3
{

	private:
//		File playThisFile;
ISoundEngine* engine;

	public:
		MP3();

		void play(/*File fileToPlay*/char* fileName);

		void pause(char* fileName);

		void stop(char* fileName);

		void load(char* fileName);

		void setPlayLocation(char* fileName, int location);

		int getVolume(char* fileName);

		void setVolume(char* fileName, int loudness);
};
#endif
