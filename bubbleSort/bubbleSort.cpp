/**
 * @file bubbleSort.cpp
 * @brief bubble sort (C++ version)
 *
 * @author tgnivekucn 
 * @version 1.00
 */
 
#include <iostream>
using namespace std;

/**
 * @param a array pointer
 * @param size size of array
 * No return 
 */
template<typename T>
void bubbleSort(T *a, const int size){
	for(int i=0; i<(size-1); i++)
		for(int j=0; j<(size-1-i); j++)
		{
			if( a[j]>a[j+1])
			{
				T tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;	
			}
		}
}

/**
 * @param a array pointer
 * @param size size of array
 * No return 
 */
template<typename T>
void printArray(T *a, const int size){
	for(int i=0; i<size; i++)
		cout << *(a+i) << " ";
	cout << endl;
}

int main(){
	
	int a[5]={5,4,3,2,1};
	int n = (int) sizeof(a)/sizeof(*a);
	bubbleSort(a,n);
	cout << "After sorting......" << endl;
	printArray(a,n);	
	
	float b[5]={5.1, 4.9, 6.2, 3.5, 2.7};
	n = (int) sizeof(b)/sizeof(*b);
	bubbleSort(b,n);
	cout << "After sorting......" << endl;
	printArray(b,n);	
	
	return 0;
}
