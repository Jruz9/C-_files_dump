//this program demonstrates the binary search function which
//performs a binary search on an integer array.
//-------------------------------------------------
#include <iostream>
using namespace std;

//function prototype 
int binarySearch(const int [], int, int);
const int SIZE =20;

int main ()
{
	//Array with employee ID'S stored in accending order.
	int idNums[SIZE]= {101,142,147,189,199,207,222,234,289,296,310,319,388,394,417,429,447,521,536,600};
	int results;	// holds the search results
	int empID;		// to hold an employee ID
	//get an employee ID to search for.
	cout<< "ENTER the employee ID you wish to search for: ";
	cin>>empID;
	//search for the ID.
	results= binarySearch(idNums,SIZE,empID);
	//if results contain  -1 the id was not found
	
	if (results==-1)
	cout<< "That number does not exist in the array. \n";
	else
	{
	//otherwise results contains the subscript of 
	//the specified empoyee ID in the array.
	cout<<" That ID is found at element "<<results;
	cout<<" in the array. \n";
	}
	return 0;
}

//***********************************************************************************************
//The BinarySearch function performs a binary search on an integer array.						*	
//Array, which has a maximum of size elements, is searched for the number stored in value.		*
//If the number is found, its array subscript is returned.Otherwise, -1 is returned indicating	*	
//the value was not in the array.																*
//***********************************************************************************************

int binarySearch(const int array[],int size, int value)
{
	int first = 0,		//first array element
	last = size -1,		// Last array element
	middle,				//Midpoint of search
	position =-1;		//position of serach value
	bool found=false;	//flag
	
	while(!found && first <=last)
	{
		middle = (first +last)/2;		//calulate the midpoint
		if (array[middle]==value)		//if value if found at mid
		{
			found=true;
			position=middle;
		}
		else if (array[middle]>value)	// if value is in lower half
		last = middle -1 ;
		
		else 
		first=middle+1;		// if value is in upper half
	}
	return position;
}
