#include <vector>
#include "MediaLib.h"
#include "Movie.h"

MediaLib::MediaLib() {
    movies = new Movie[0];
    numMovies = 0;
}

void MediaLib::addMovie(Movie movie) {
    Movie* temp = new Movie[numMovies + 1];
    for (int i = 0; i < numMovies; i++) 
    {
        temp[i] = movies[i];
    }
    temp[numMovies] = movie;
    delete[] movies; 
    movies = temp;
    numMovies++;
}


vector<Movie> MediaLib::searchByTitle(string title) {
    vector<Movie> foundMoviesT;

    for (int i = 0; i < numMovies; i++) {
        if (movies[i].title == title) {
            foundMoviesT.push_back(movies[i]);
        }
    }

    return foundMoviesT;
}

vector<Movie> MediaLib::searchByActor(string actors) {
    vector<Movie> foundMovies;

    for (int i = 0; i < numMovies; i++) {
        if (movies[i].actors == actors) {
            foundMovies.push_back(movies[i]);
        }
    }

    return foundMovies;
}

vector<Movie> MediaLib::searchByGenre(string genre) {
    vector<Movie> foundMoviesG;

    for (int i = 0; i < numMovies; i++) {
        if (movies[i].genre == genre) {
            foundMoviesG.push_back(movies[i]);
        }
    }

    return foundMoviesG;
}

MediaLib::~MediaLib() {
    //delete[] movies; // Звільнення пам'яті для нового масиву
}