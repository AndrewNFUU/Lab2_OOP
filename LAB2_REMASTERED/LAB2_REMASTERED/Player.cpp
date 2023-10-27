#include <iostream>
#include <vector>
#include "Player.h"
#include "MediaLib.h"
#include "Movie.h"

void Player::addPlaylist(MediaLib newLib)
{
	MediaLib* tempLib = new MediaLib[numLibraries + 1];
	for (int i = 0; i < numLibraries; i++)
	{
		tempLib[i] = libraries[i];
	}
	tempLib[numLibraries] = newLib;
	delete[] libraries;

	libraries = tempLib;
	numLibraries++;
}

void Player::showMoviesByTitle(string title) {
	for (int i = 0; i < numLibraries; i++) {
		vector<Movie> movies = libraries[i].searchByTitle(title);
		for (const Movie& movie : movies) {
			movie.showInfo();
			cout << "----------------------------------" << endl;
		}
	}
}

void Player::showMoviesByActors(string actor) {
	for (int i = 0; i < numLibraries; i++) {
		vector<Movie> movies = libraries[i].searchByActor(actor);
		for (const Movie& movie : movies) {
			movie.showInfo();
			cout << "----------------------------------" << endl;
		}
	}
}

void Player::showMoviesByGenre(string genre) {
	for (int i = 0; i < numLibraries; i++) {
		vector<Movie> movies = libraries[i].searchByGenre(genre);
		for (const Movie& movie : movies) {
			movie.showInfo();
			cout << "----------------------------------" << endl;
		}
	}
}

Player::~Player() {
	delete[] libraries;
}

