//Colin Bondy
//CS 172 Exam 1 (Summer 2015)
//I affirm that all code given below was written solely by me, Colin Bondy, and that any help I received adhered to the rules stated for this exam.

#include <string>
#include "Movie.h"

using namespace std;

Movie::Movie()
{
	title = "Oceans 13";
	genre = "Comedy";
	showTime = 0;
};

Movie::Movie(string Title, string Genre, int ShowTime)
{
	title =Title;
	genre = Genre;
	showTime = ShowTime;
}

string Movie::GetTitle()
{
	return title;
}

string Movie::GetGenre() // Returns the movie genre
{
	return genre;
}

int Movie::GetShowtime() // When is this movie shown?
{
	return showTime;
}
