#include"Rest\Order.h"
//////////////////////////// global functions for sorting Orders /////////////////////////

void swapS(Order*& first, Order*& second)
{
    Order* temp = first;
    first = second;
    second = temp;
}

void SortS(Order* arr[], int n)
{
    int i, j, minIndex;

    for (i = 0; i < n - 1; i++)
    {
        //  To Find the minimum element in unsorted array  
        minIndex = i;
        for (j = i + 1; j < n; j++)
            if (arr[j]->getStatus() == SRV && arr[minIndex]->getStatus() == SRV && arr[j]->GetAssignTime() <= arr[minIndex]->GetAssignTime())
                minIndex = j;
        // Swap the found minimum element with the first element  
        swapS(arr[minIndex], arr[i]);
    }
}

