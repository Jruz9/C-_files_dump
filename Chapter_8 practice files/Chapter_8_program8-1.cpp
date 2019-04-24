//chapter 8 practice
// this program demonstrates the linear search alogrithm
#include<iostream>
using namespace std;

// function protype
int linearSearch(const int[],int,int);

//main program

int main ()
{
	const int SIZE = 5;
	int tests [SIZE] = {87,75,98,100,82};
	int results;
	
	// search the array for 100.
	results= linearSearch(tests, SIZE, 100);
	
	// if linearSearch returns a -1, then 100 was not found.
	if (results==-1)
	cout<< "You did not earn 100 points on any test\n";
	
	else 
	{
		//Otherwise results contains the subscript of
		// the first 100 in the array
		cout<< "You earned 100 points on test ";
		cout<< (results + 1)<<endl;
	}
	
	return 0;
}

//***************************************************************************************************
//The LinearSearch function performs a linear search on an integer array.							*
//The array arr, which has a maximum of size elements, is searched for the number stored in value.	*
// if the number is found, its array subcript is returned.											*
//Otherwise,-1 is returned indicating the value was not in the array.								*
//																									*
//																									*
//***************************************************************************************************

int linearSearch (const int arr[], int size, int value)
{
	int index=0;		// Used as a subscript to search array
	int position=-1;	// used to record postion of search value
	bool found = false;	//flag to indicate if the value was found
	
	while (index<size&& !found)
	{
		if (arr[index]==value)		//if the value is found
		{
			found = true;			//resets the flag
			position=index;			//reacord the value's subscript
			
		}
		index++;					// go to the next element
	}
	return position;				// returns the position or -1
}
