//Colin Bondy
//I affirm that all code given below was written solely by me, Colin Bondy, and that any help I received adhered to the rules stated for this exam.

#include<string>
#include"Movie.h"
#ifndef THEATER_H
#define THEATER_H

using namespace std;

class Theater
{
public:

	Theater(string Name, string Phone); //The name for this theater

	void AddMovie(Movie &movie); //Add a movie at a specific time

	string GetMovieForHour(int Hour); //Return the movie shown at or after the given hour

	int GetShowTimeForGenre(string Genre); //When will the movie of the given genre be shown? // Return -1 if none exist

	int GetPopcornPrice(); //Make up a cost in dollars for popcorn 

	int GetCokePrice(); //Make up a cost on Coke

private:
	string name;
	string phone;
	string genre;
	int hour;
	int MovieNumber;
	int PopcornPrice;
	int CokePrice;
	Movie movieListing[11];
	

};

#endif