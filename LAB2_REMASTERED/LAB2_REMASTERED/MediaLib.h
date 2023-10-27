#pragma once
#include <vector>
#include "Movie.h"

using namespace std;

class MediaLib
{
private:
    Movie* movies;
    int numMovies;

public:
    MediaLib();

    void addMovie(Movie movie);
    
    vector<Movie> searchByTitle(string title);
    vector<Movie> searchByActor(string actor);
    vector<Movie> searchByGenre(string genre);

    ~MediaLib();
};
