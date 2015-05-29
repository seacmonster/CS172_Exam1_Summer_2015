//Colin Bondy
//CS 172 Exam 1 (Summer 2015)
//I affirm that all code given below was written solely by me, Colin Bondy, and that any help I received adhered to the rules stated for this exam.

#include <iostream>
#include <string>
#include "Movie.h"
#include "Theater.h"

using namespace std;

Theater::Theater(string Name, string Phone) //The name for this theater
{
	Name = name;
	Phone = phone;
}

void Theater::AddMovie(Movie& Movie) //Add a movie at a specific time
{
	int i = 0; // I can't figure out how to pass movies in here individually and then return them indiviaully in the following functions when called
	Movie = movies[i];
	i++;
}

string Theater::GetMovieForHour(int Hour) //Return the movie shown at or after the given hour
{
	 movies[Hour] = moviename;
	 return moviename;
}

int Theater::GetShowTimeForGenre(string Genre) //When will the movie of the given genre be shown? // Return -1 if none exist
{
	
}

int Theater::GetPopcornPrice() //Cost in dollars for popcorn 
{
	PopcornPrice = 5000; //Man movies are expensive these days
	return PopcornPrice;
}

int Theater::GetCokePrice() //Make up a cost on Coke
{
	CokePrice = 3785; //Man that is expensive
	return CokePrice;
}