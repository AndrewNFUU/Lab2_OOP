#pragma once
#include "MediaLib.h"

using namespace std;

class Player
{
private:
	MediaLib* libraries;
	int numLibraries;
public:
	Player() : numLibraries(0), libraries(nullptr) {}

	Player(int numLibs) {
		numLibraries = numLibs;
		libraries = new MediaLib[numLibraries];
	}


	void addPlaylist(MediaLib newLib);

	void showMoviesByTitle(string title);

	void showMoviesByActors(string actor);

	void showMoviesByGenre(string genre);

	~Player();
};


