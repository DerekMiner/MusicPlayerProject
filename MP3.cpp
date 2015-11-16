
#include "MP3.h"

    MP3::MP3()
    {
  engine = createIrrKlangDevice();
    }

	void MP3::play(/*File fileToPlay*/ char* fileName)
    {
        engine->play2D(fileName, true);
    }

	void MP3::pause(char* fileName)
    {
        engine->play2D(fileName, false);
//        engine->setIsPaused();
    }

	void MP3::stop(char* fileName)
    {

    }

	void MP3::load(char* fileName)
    {

    }

	void MP3::setPlayLocation(char* fileName, int location)
    {

    }

	int MP3::getVolume(char* fileName)
    {
        int blah = 1;
        return blah;
    }

	void MP3::setVolume(char* fileName, int loudness)
    {
        int blah = loudness;
    }
