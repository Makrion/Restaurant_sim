#include"Rest\Order.h"
//////////////////////////// global functions for sorting Orders /////////////////////////

void swapW(Order*& first, Order*& second)
{
    Order* temp = first;
    first = second;
    second = temp;
}

void SortW(Order* arr[], int n)
{
    int i, j, minIndex;

    for (i = 0; i < n - 1; i++)
    {
        //  To Find the minimum element in unsorted array  
        minIndex = i;
        for (j = i + 1; j < n; j++)
            if (arr[j]->getStatus() == WAIT && arr[minIndex]->getStatus() == WAIT && arr[j]->GetArrivalTime() <= arr[minIndex]->GetArrivalTime())
                minIndex = j;
        // Swap the found minimum element with the first element  
        swapW(arr[minIndex], arr[i]);
    }
}
