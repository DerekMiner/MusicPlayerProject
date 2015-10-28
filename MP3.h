//Base MP3 Player

#include "File.h"

class MP3
	{
private:
	File playThisFile;

public:
	MP3();

	void play(File fileToPlay);

	void pause();

	void stop();

	void load();

	void setPlayLocation(int location);

	int getVolume();

	void setVolume(int loudness);


	};
