/**
 * \file InsertionSort.cpp
 * \brief insertion sort (C++ version)
 * \details This code is insertion sort. The reference is: http://zh.wikipedia.org/wiki/%E6%8F%92%E5%85%A5%E6%8E%92%E5%BA%8F
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
 * @param[in] n The total number of elements of input array.
 */
template<typename T>
void selectionSort(T array[], const int n){
	for(int i=1; i<n; i++){
		T temp = array[i];
		int j;
		for(j=(i-1); j>=0 && array[j]>temp; j--)
			array[j+1]=array[j];
		array[j+1]=temp;
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
 *	Demo quicksort.
 */
int main(){
	float a[6]={6.1, 5.9, 4.2, 3.6, 2.5, 1.7};
	
	printArray(a,6);
	selectionSort(a,6);
	printArray(a,6);	
	return 0;
}

