

#include "stdafx.h"
#include "Movie.h"
#include <string>
#include <iostream>

using namespace std;

//ProtoTypes
void printMovieData(Movie movies[]);

/*** Start Definition of Movie ***/

//Constructors 
Movie::Movie()
{
	this->title = "";
	this->director = "";
	this->yearReleased = 0000;
	this->runningTime = 0000;
}

Movie::Movie(const string title, const string director, const int yearReleased, const int runningTime)
{
	this->title = title;
	this->director = director;
	this->yearReleased = yearReleased;
	this->runningTime = runningTime;
}

//Getters 
string Movie::getTitle()
{
	return this->title;
}

string Movie::getDirector()
{
	return this->director;
}

int Movie::getYearReleased()
{
	return this->yearReleased;
}

int Movie::getRunningTime()
{
	return this->runningTime;
}

//Setters
void Movie::setTitle(const string title)
{
	this->title = title;
}

void Movie::setDirector(const string title)
{
	this->director = director;
}

void Movie::setYearReleased(const int yearReleased)
{
	this->yearReleased = yearReleased;
}

void Movie::setRunningTime(const int runningTime)
{
	this->runningTime = runningTime;
}

//Function


/*** End Defintion of Movie ***/


//Functions
int main()
{
	Movie movie1("Fast and the Furious", "Some Guy", 2002, 123);
	Movie movie2("Spiderman", "Peter Something", 2006, 98);
	Movie movie3("Gone Girl", "David Fincher", 2014, 149);

	Movie movies[4] = {movie1, movie2, movie3};

	printMovieData(movies);

	cin.get(); //holdscreen
	return 0;
}

void printMovieData(Movie movies[])
{
	int length = sizeof(movies);

	cout << "Current Movies: " << endl;
	for (int i = 0; i < length; i++)
	{
		cout << "Title: " << movies[i].getTitle() << endl;
		cout << "Director: " << movies[i].getDirector() << endl;
		cout << "Running Time: " << movies[i].getRunningTime() << " minutes " << endl;
		cout << "Year Released: " << movies[i].getYearReleased() << endl;
		cout << endl;
	}
}


