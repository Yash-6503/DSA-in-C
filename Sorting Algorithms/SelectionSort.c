//Selection Sort algorithm in DSA in c

#include<stdio.h>
int main()
{
    int size, arr[10], i;
    printf("\nEnter how many elements: ");
    scanf("%d", &size);
    printf("\nEnter %d elements: ", size);
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    SelectionSort(arr, size);
    printArray(arr, size);
    return 0;
}

int SelectionSort(int arr[], int size)
{
    int i, j, temp;
    for(i=0; i<size-1; i++)
    {
        int min = i;
        for(j=i+1; j<size; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }
        if(min!=i)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}

int printArray(int arr[], int size)
{
    int i;
    printf("\nSorted Array is: ");
    for(i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}