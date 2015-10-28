class MP3Player
	{
	private:
		MP3 mainPlayer;
	public:

		void next();

		void previous();

		int getVolume();

		void setVolume();

		void setPlayLocation(int location);

		int getPlayLocation();

    };
