// this program demonstrates the selection sort algorithm.
#include <iostream>
using namespace std;

//function prototype

void selectionSort(int[],int);
void swap(int &, int &);

int main()
{
	const int SIZE= 6;
	
	//Array of unsorted values
	int values [SIZE]= {6,1,5,2,4,3};
	
	//display the unsorted array
	cout<< "The unsorted values:\n";
	
	for (auto element : values)
	cout<<element<<" ";
	cout<<endl;
	
	//sort the array
	selectionSort(values,SIZE);
	
	//display the sorted array
	cout<< "The sorted values:\n";
	for( auto element : values)
	cout<< element<<" ";
	cout<<endl;
	
	return 0;
}

//******************************************************************
//the selectionSort function sorts an int array in ascending order
//*****************************************************************

void selectionSort(int array[], int size)
{
	int minIndex, minValue;
	for (int start =0; start< (size-1); start++)
	{
		minIndex=start;
		minValue=array[start];
		for(int index = start+1; index<size; index++)
		{
		if (array[index]<minValue)
			{
			minValue=array[index];
			minIndex=index;
			}
		}
	swap (array[minIndex],array[start]);
	}
}

//*********************************************
//The swap function swaps a and b in memory.	*
//*********************************************

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b= temp;
}
