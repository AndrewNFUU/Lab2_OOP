#include <iostream>
#include <string>
#include <limits>
#include "Movie.h"
#include "MediaLib.h"
#include "Player.h"


int main()
{
	MediaLib top_films = MediaLib();
	top_films.addMovie(Movie("Fight club", "Crime / Dramas / Thrillers", "Brad Pitt, Holt McCallany", 10, "139 min", "720p", "fight_club.mp4", "10.09.1999"));
	top_films.addMovie(Movie("Interstellar", "Adventure , Drama , Science Fiction", "Matthew McConaughey, Casey Affleck", 10, "169 min", "1080p", "interstellar.mp4", "06.10.2014"));
	top_films.addMovie(Movie("Drive", "Action / Drama", "Ryan Gosling, Carey Mulligan", 8.9, "100 min", "1080p", "drive.mp4", "16.09.2011"));
	top_films.addMovie(Movie("Hooligans", "Crime / Drama", "Elijah Wood / Charlie Hunnam", 7.9, "109 min", "720p", "hooligans.mp4", "05.11.2005"));
	top_films.addMovie(Movie("1+1 untouchable", "Drama , Comedy", "Cyril Mendy, Alba Gaya", 9.7, "112 min", "1080p", "untouchable.mp4", "01.11.2011"));
	top_films.addMovie(Movie("Meg: Monster of Depth", "Action , Thrillers , Science", "Shuya Sophia Tsai, Jason Statham", 8.8, "113 min", "1080p", "meg.mp4", "09.09.2018"));

	MediaLib top_series = MediaLib();
	top_series.addMovie(Movie("Breaking Bad", "Detective / Drama / Crime ", "Bryan Cranston, Aaron Paul", 9.5, "47 min", "1080p", "breaking_bad.mp4", "20.01.2008"));
	top_series.addMovie(Movie("Peaky Blinders", "Detective / Drama / Crime ", "Cillian Murphy, Tom Hardy", 9.9, "60 min", "HD 1080p", "peaky_blinders.mp4", "13.09.2013"));
	top_series.addMovie(Movie("La Casa de Papel", "Action / Detective / Crime ", "Itziar Itugno, Pedro Alonso", 10, "70 min", "HD 1080p", "paper_peist.mp4", "02.05.2017"));
	top_series.addMovie(Movie("The Queen's Gambit", "Drama", "Anya Taylor-Joy, Thomas Sangster", 8.5, "67 min", "FHD 1080p", "qeens_gambit.mp4", "23.10.2020"));
	top_series.addMovie(Movie("Sherlock", "Drama / Thriller / Detective", "Benedict Cumberbatch, Martin Freeman", 8.9, "89 min", "1080p", "sherlock.mp4", "25.06.2010"));
	top_series.addMovie(Movie("Anne", "Drama", "Amybeth McNulty, Geraldine James", 8.6, "44 min", "1080p", "anne.mp4", "19.03.2017"));

	MediaLib marvel = MediaLib();
	marvel.addMovie(Movie("Kingsman: The Golden Circle", "Action / Comedy", "Taron Egerton , Colin Firth", 8.5, "141 min", "HD 1080p", "kingsman.mp4", "21.09.2017"));
	marvel.addMovie(Movie("Spider-Man: Far From Home", "Action / Adventure", "Tom Holland , Samuel L. Jackson", 8.9, "129 min", "HD 1080p", "spiderman_ffh.mp4", "04.06.2019"));
	marvel.addMovie(Movie("Avengers: Endgame", "Action / Drama", "Robert Downey Jr. , Chris Evans , Mark Ruffalo", 8.6, "181 min", "FHD 1080p", "avengers_endgame.mp4", "29.04.2019"));
	marvel.addMovie(Movie("Venom", "Action / Thriller", "Tom Hardy, Michelle Williams", 8.3, "112 min", "FHD 1080p", "venom.mp4", "04.10.2018"));
	marvel.addMovie(Movie("Thor 3: Ragnarok", "Fantasy / Action", "Karl Urban, Jeff Goldblum", 9.4, "130 min", "HD 1080p", "thor.mp4", "02.11.2017"));
	marvel.addMovie(Movie("Deadpool", "Science Fiction / Action / Comedy", "Ryan Reynolds , Morena Baccarin", 8, "108 min", "HD 1080p", "deadpool.mp4", "21.01.2016"));

	Player library(3);
	library.addPlaylist(top_films);
	library.addPlaylist(top_series);
	library.addPlaylist(marvel);


	cout << "select a search type: \n";
	cout << "1. search by title\n";
	cout << "2. search by actor\n";
	cout << "3. search by genre\n";

	int x{};
	cin >> x;

	cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Очистити буфер після введення числа

	string input;
	cout << "Enter text value: ";
	getline(cin, input);

	switch (x) {
	case 1:
		library.showMoviesByTitle(input);
		break;
	case 2:
		library.showMoviesByActors(input);
		break;
	case 3:
		library.showMoviesByGenre(input);
		break;
	default:
		cout << "Invalid choice :( \n";
		break;
	}

	system("pause");
	return 0;
}