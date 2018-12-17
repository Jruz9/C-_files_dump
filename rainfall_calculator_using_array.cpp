//Chapter 7 practice problem 2 Rainfall Statistics

/*
----------------------------------------------------------------------------
Write a program that lets the user enter the total rainfall for each of the twelve months
in a array with doubles.

It should calculate the and display the total rainfall for the year, 
avg monthly rainfall for the year and  the month with the highest  and lowest amount

with INput VALIDIATION




-----------------------------------------------------------------------------
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//Prototype
void prompt_1(); //function prototype
double prompt_2();// this function lets user input their rainfall in doubles
double prompt_3(double); // his calulates the avg rainfall of the 12 numbers
double prompt_4(double,double); // this calulates the highest and lowest amount(look at the algorithms)
//double prompt_5();//this displays the array number and month in the same time
//constants
const int num_month=12; // how many month
 int num_rainfall[num_month];// amount of rainfall that can be entered

int main()
{
//this is the list of constants
double rain;
double total_rainfall;
double avg_rainfall;
double most_rainfall,least_rainfall;
double highest;
int index;

int prompt;


string set_1 [num_month]={"January","Feberary","March","April","May","June","July","Augest","September","October","November","December"};

for (index=0; index < num_month; index++)
{
	cout<<"what is the rain fall for "<< set_1[index] <<" ?" <<endl;
	rain=prompt_2();
	//least_rainfall=prompt_4(rain)
	total_rainfall+=rain;// adds the new numbers  to get a new total
	
	//highest=num_rainfall[0];
	//most_rainfall=prompt_4(highest,rain);
}
avg_rainfall= prompt_3(total_rainfall);
cout<<"The total rainfall for the last 12 months is "<<total_rainfall<<" !";
cout<<endl<<endl<<"The Average amount of water during the 12 month period was "<<avg_rainfall<<" !";
//cout<<"The highest amount of water was "<<most_rainfall<< " !";

return 0;	
}

void prompt_1()
{
	cout<<"This is a Program that let you enter"<<endl<<endl;
	
	cout<<"the avg rainfall for each of the twelve months"<<endl<<endl;
	
	cout<<"It will also tell you the total rainfall, avg rainfall, and highest month of rainfall"<<endl<<endl;
	
	cout<<"Enter the avg amount of rainfall for each month"<<endl<<endl;
}

double prompt_2()// this is the input vaildidation for 
{

	double rainfall;
	cin>> rainfall;
	while (rainfall<0)
	{
		cout<<"You have entered an number below zero"<<endl<<endl<<"Enter a number above 0 for rainfall"<<endl;
		cout<<endl;
		cin>>rainfall;
	}	
	return rainfall;
}

double prompt_3(double water)// this calulates the avg rainfall of the 12 numbers
{
	double avg_water;
	avg_water=(water/num_month);
	return avg_water;
}

/*double prompt_4(double begin_water,double high_water)// calulates the highest number.
{
	//double start_rain;
	double high_rain;
	
	if(high_water>begin_water)
	{
		high_rain=high_water;
		
	}
	return high_rain;
}
*/


