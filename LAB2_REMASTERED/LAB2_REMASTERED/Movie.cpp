#include <iostream>
#include "Movie.h"

using namespace std;

Movie::Movie()
{
	title = "-_-";
	genre = "-_-";
	actors = "-_-";
	rating = 0;
	duration = "-_-";
	quality = "-_-";
	filename = "-_-";
	date = "-_-";
}

Movie::Movie(string title, string genre, string actors, double rating, string duration, string quality, string filename, string date)
{
	this->title = title;
	this->genre = genre;
	this->actors = actors;
	this->rating = rating;
	this->duration = duration;
	this->quality = quality;
	this->filename = filename;
	this->date = date;
}

void Movie::showInfo() const
{
	cout << "	 Movie Data: " << endl;
	cout << "Title: " << title << endl;
	cout << "Genre: " << genre << endl;
	cout << "Actors: " << actors << endl;
	cout << "Rating: " << rating << endl;
	cout << "Duration: " << duration << endl;
	cout << "Playback speed: " << quality << endl;
	cout << "Filename: " << filename << endl;
	cout << "Date: " << date << endl;
}

Movie::~Movie()
{
}