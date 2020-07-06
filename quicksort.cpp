#include <iostream>
#include <string>
#include <vector>
#include "splitbydelim.hpp"

using namespace std;

void mergesort(int* , int);
void readArray(int* , int);
void mergeArray(int*,int,int*,int);

int main()
{
	vector<int> inputVector = splitInputByDelim();
	int size = inputVector.size();
	int* array = inputVector.data();
	mergesort(array,size);
	readArray(array,size);

	return 0;
}

void mergesort (int* array , int size)
{
	///readArray(array,size); uncomment to see algorithim at work

	///base case 
	if (size == 1 )
	{
		*array == array[0];
		return;
	}
	if (size == 0)
	{
		*array == 0;
		return;
	}

	int lessArray[size];
	int lessIndex=0;
	int moreArray[size];
	int moreIndex=0;
	int midpoint = size / 2; // interger division is always floor in C++
	int midvalue = array[midpoint];
	int finalArrayIndex;

	for(int i = 0; i < size; i++)
	{
		if(i != midpoint)
		{
			if(*array <= midvalue)
			{
				lessArray[lessIndex] = *array;
				lessIndex++;
				}
			else
			{
			moreArray[moreIndex] = *array;
			moreIndex++;
			}
			
		}

		//move 1 along the array 
		array++;

	}
	
	mergesort(lessArray,lessIndex);
	mergesort(moreArray,moreIndex);  

	array -= size;///return array pointer back to begining
	
	//less 
	for (int i = 0; i < lessIndex ; i++)
	{
		*array = lessArray[i];
		array++;
	} 
	
	//midvalue
	*array = midvalue;
	array++;

	//more
	
	for (int i = 0; i < moreIndex ; i++)
	{
		*array = moreArray[i];
		array++;
	} 

	
	
}

void readArray(int* array , int size)
{
	cout << "[";
	for (int i = 0; i < size; i++)
	{
		cout << *array << ",";
		*array++;
	}
	cout << "]" << endl;
}

//generates an array to be stored at argument vairiable , seperated by space by default or seccond argument.
void generateArrayFromInput(int arrayStore)
{
	string arrayInput;
	string element;
	vector<int> inputArray;

	for (int i = 0; i < 10; i++)
	{
		// getline(cin,element,",");
	}
}

void mergeArray(int* array1, int array1Size, int* array2, int* array2size )
{

}

///pass array pointer as argument and modify the array from there. 
//size of array is an argument so we know when to stop. 