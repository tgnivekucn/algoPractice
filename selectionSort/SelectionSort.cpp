/**
 * \file SelectionSort.cpp
 * \brief selection sort (C++ version)
 * \details This code is selection sort. 
 *
 * \author tgnivekucn 
 * \version 1.00
 * \copyright GNU Public License. 
 */
#include <iostream>
using namespace std;
using std::swap;


/**
 * Sort the input array.
 * @param[out] array The input array.
 * @param[in] n The total number of elements in the input array.
 */
template<typename T>
void selectionSort(T array[], const int n){
	for(int i=0; i<(n-1); i++){
		int minIndex = i;
		for(int j=(i+1); j<n; j++){
			if( array[j] < array[minIndex])
				minIndex = j;
		}
		if( minIndex != i)
			swap( array[i] , array[minIndex] );
	}
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
 *	Demo selection sort.
 */
int main(){
	float a[6]={6.1, 5.9, 4.2, 3.6, 2.5, 1.7};
	
	printArray(a,6);
	selectionSort(a,6);
	printArray(a,6);	
	return 0;
}

