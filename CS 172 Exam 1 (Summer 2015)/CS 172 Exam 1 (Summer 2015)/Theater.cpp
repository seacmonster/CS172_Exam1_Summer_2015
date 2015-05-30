//Colin Bondy
//CS 172 Exam 1 (Summer 2015)
//I affirm that all code given below was written solely by me, Colin Bondy, and that any help I received adhered to the rules stated for this exam.

#include <iostream>
#include <string>
#include "Theater.h"

using namespace std;

Theater::Theater(string Name, string Phone) //The name for this theater
{
	Name = name;
	Phone = phone;
}

void Theater::AddMovie(Movie &movie) //Add a movie at a specific time
{
	MovieNumber = 0;
	movieListing[MovieNumber] = movie;

	MovieNumber += 1;
}

string Theater::GetMovieForHour(int Hour) //Return the movie shown at or after the given hour
{
	{
		for (int i = 0; i < MovieNumber; i++){

			if (movieListing[i].GetShowtime() == hour) {

				return movieListing[i].GetTitle();
			}
		}
		return "";
	}
}

int Theater::GetShowTimeForGenre(string Genre) //When will the movie of the given genre be shown? // Return -1 if none exist
{
	for (int i = 0; i < MovieNumber; i++){

		if (movieListing[i].GetGenre() == Genre) {

			return movieListing[i].GetShowtime();
		}
	}
	return -1;

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