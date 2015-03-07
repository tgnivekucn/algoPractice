/**
 * \file QuickSort.cpp
 * \brief quick sort (C++ version)
 * \details This code is quick sort. The reference is: http://zh.wikipedia.org/wiki/%E5%BF%AB%E9%80%9F%E6%8E%92%E5%BA%8F
 *
 * \author tgnivekucn 
 * \version 1.00
 * \copyright GNU Public License. 
 */
#include <iostream>
using namespace std;
using std::swap;

/**
 * Seperate the input array to two subarray and put the pivot to the final postion after sorting.
 * @param[out] array The input array.
 * @param[in] leftIndex The index of leftmost element in the input array.
 * @param[in] rightIndex The index of rightest element in the input array.
 */
template<typename T>
int partition(T array[], const int leftIndex, const int rightIndex){
	int storeIndex = leftIndex;
	T pivot = array[leftIndex];
	swap(array[leftIndex], array[rightIndex]);
	for(int i=leftIndex; i<rightIndex; i++){
		if( array[i] < pivot)
			swap(array[storeIndex++], array[i]);
	}
	swap(array[rightIndex],array[storeIndex]);
	return storeIndex;
}

/**
 * Sort the input array.
 * @param[out] array The input array.
 * @param[in] leftIndex The index of leftmost element in the input array.
 * @param[in] rightIndex The index of rightest element in the input array.
 */
template<typename T>
void quickSort(T array[], const int leftIndex, const int rightIndex){
	if( leftIndex >= rightIndex ) return;
	int pivotIndex = partition(array, leftIndex, rightIndex);
	quickSort(array, leftIndex, pivotIndex-1);
	quickSort(array, pivotIndex+1, rightIndex);
}

/**
 * Output the content of the input array.
 * @param[in] array The input array.
 * @param[in] size The size of the input array.
 */
template<typename T>
void printArray( T array[], const size_t size){
	for(int i=0; i<size; i++)
		cout << array[i] << " ";
	cout << endl;
}

/**
 *	Demo quicksort.
 */
int main(){
	float a[6]={6.1, 5.9, 4.2, 3.6, 2.5, 1.7};
	
	printArray(a,6);
	quickSort(a,0,5);
	printArray(a,6);	
	return 0;
}
