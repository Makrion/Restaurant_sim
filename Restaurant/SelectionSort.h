#include"Rest\Order.h"
//////////////////////////// global functions for sorting Orders /////////////////////////

void swap(Order *& first, Order *& second)  
{  
    Order* temp = first;  
    first = second;  
    second = temp;  
}  
  
void selectionSort(Order* arr[], int n)  
{  
    int i, j, minIndex;  

    for (i = 0; i < n-1; i++)  
    {  
        //  To Find the minimum element in unsorted array  
        minIndex = i;  
        for (j = i+1; j < n; j++)  
			if (arr[j]->getFinishedTime() < arr[minIndex]->getFinishedTime())  
            minIndex = j;

			else if(arr[j]->getFinishedTime() == arr[minIndex]->getFinishedTime())
				minIndex=(arr[j]->getServingTime() < arr[minIndex]->getServingTime())?j:minIndex;

        // Swap the found minimum element with the first element  
        swap( arr[minIndex] , arr[i]);  
    }  
}  