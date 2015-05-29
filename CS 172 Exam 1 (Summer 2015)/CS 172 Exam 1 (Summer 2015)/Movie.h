//Colin Bondy

#ifndef MOVIE_H
#define MOVIE_H

using namespace std;

class Movie
{
public:

	
	Movie(); //Deafult Movie

	Movie(string Title, string Genre, int ShowTime); //

	string GetTitle(); //Returns title

	string GetGenre(); // Returns the movie genre

	int GetShowtime(); // When is this movie shown?

private:
	string title;
	string  genre;
	int showTime;
};

#endif
