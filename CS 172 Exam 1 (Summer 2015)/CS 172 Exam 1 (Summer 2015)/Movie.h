//Colin Bondy
//I affirm that all code given below was written solely by me, Colin Bondy, and that any help I received adhered to the rules stated for this exam.

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
