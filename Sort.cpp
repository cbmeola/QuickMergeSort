

#include "stdafx.h"
#include <iostream>
using namespace std;



void printArray(int *scoresPtr, int sizeofArray)
{
	cout << '\n';
	for (int i = 0; i < sizeofArray; i++)
		cout << scoresPtr[i] << '\t';
}


void quickSort(int *a, int sizeofArray) //solve this HW
{
	int pos = 0;
	int pick = a[0];
	pos = q_recursive(a, sizeofArray);
	int left_array_size = pos;
	int right_array_size = sizeofArray - (pos - 1);
	int *left_array = new int[left_array_size];
	int *right_array = new int[right_array_size];

	for (int i = 0; i < left_array_size; i++)
		*(left_array + i) = a[i];

	for (int i = 0; i <right_array_size; i++)
		*(right_array + i) = a[pos + 1 + i];

	q_recursive(left_array, left_array_size);
	q_recursive(right_array, right_array_size);
}



int q_recursive(int *a, int sizeofArray) //quicksort recursive SOLVE HW
{
	int pivot = a[0];
	int left = 0;
	int right = sizeofArray - 1;
	int temp = 0;

	while (left < right)
	{
		while (pivot < a[right])
			right--;
		while ((left < right) && (a[left] < pivot) || (a[left] == pivot))
		{
			left++;
			//printArray(a, sizeofArray);
		}
		if (left < right)
		{
			temp = a[left]; //swap 
			a[left] = a[right];
			a[right] = temp;
		}
	}

	int pos = right;
	a[0] = a[pos];
	a[pos] = pivot;
	printArray(a, sizeofArray);
	return pos;

}

void mergeSort(int *a, int sizeofArray)
{

}


