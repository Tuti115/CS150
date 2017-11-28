/*





*/

#include "stdafx.h"
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

//Prototypes
void getData(string months[], double rainfall[]);
double totalRainfall(double rainfall[]);
double averageRainfall(double rainfall[]);
int driestMonth(double rainfall[]);
int wettestMonth(double rainfall[]);
void printRainReport(double rainfall[], string months[]);

int main()
{
	string months[] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	double rainfall[12];

	getData(months, rainfall);

	cout << "\n";
	printRainReport(rainfall, months);
	cout << "\n";

	system("pause");
	return 0;
}

void getData(string months[], double rainfall[])
{
	for (int i = 0; i < 12; i++)
	{
		cout << "Enter the amount of rainfall for the month of " << months[i] << endl;
		cin >> rainfall[i];
	
		while (rainfall[i] < 0)
		{
			cout << "Enter a valid number!" << endl;
			cin >> rainfall[i];
		}
	}
}

double totalRainfall(double rainfall[])
{
	double totalRainfall = 0;

	for (int i = 0; i < 12; i++)
	{
		totalRainfall += rainfall[i];
	}

	return totalRainfall;
}

double averageRainfall(double rainfall[])
{
	double total, average;
	
	total = totalRainfall(rainfall);
	average = total / 12.00;

	return average;
}

int driestMonth(double rainfall[])
{
	 int driest = 0;

	for (int i = 1; i < 12; i++)
	{
		if (rainfall[i] < rainfall[driest])
		{
			driest = i;
		}
	}
	
	return driest;
}

int wettestMonth(double rainfall[])
{
	int wettest = 0;

	for (int i = 1; i < 12; i++)
	{
		if (rainfall[i] > rainfall[wettest])
		{
			wettest = i;
		}
	}

	return wettest;
}

void printRainReport(double rainfall[], string months[])
{
	int driest_month, wettest_month;
	
	driest_month = driestMonth(rainfall);
	wettest_month = wettestMonth(rainfall);

	cout << fixed << showpoint << setprecision(2);
	cout << "Total Rainfall: " << totalRainfall(rainfall) << endl;
	cout << "Average Monthly Rainfall: " << averageRainfall(rainfall) << " inches" << endl;
	cout << "Least amount of rainfall in " << months[driest_month] << " with " << rainfall[driest_month] << " inches" << endl;
	cout << "Most amount of rainfall in " << months[wettest_month] << " with " << rainfall[wettest_month] << " inches " << endl;
 }
