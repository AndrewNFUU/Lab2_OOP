#pragma once
#include <iostream>

using namespace std;

class Movie
{
public:
	string title;
	string genre;
	string actors;
	double rating{};
	string duration;
	string quality;
	string filename;
	string date;
	Movie();
	Movie(string title, string genre, string actors, double rating,
		string duration, string quality, string filename, string date);

	void showInfo() const;

	~Movie();
};

