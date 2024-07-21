// Menu-Driven Program for searching and sorting algorithms

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    do
    {
        printf("\nMenu-Driven Program");
        printf("\n1.Linear Search");
        printf("\n2.Binary Search");
        printf("\n3.Bubble Sort");
        printf("\n4.Selection Sort");
        printf("\n5.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            LinearSearch();
            break;

        case 2:
            BinarySearch();
            break;

        case 3:
            BubbleSort();
            break;

        case 4:
            SelectionSort();
            break;

        case 5:
            exit(0);
            break;

        default:
            printf("\nInvalid Choice.");
            break;
        }
    } while (choice != 5);
}

int LinearSearch()
{
    int size, arr[10], key, i, found = 0;
    printf("\nEnter how many elements: ");
    scanf("%d", &size);
    printf("\nEnter %d elements: ", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter key to search: ");
    scanf("%d", &key);
    for (i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            printf("\nElement found at %d position\n", i + 1);
            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        printf("\nElement not found\n");
    }
    return 0;
}

int BinarySearch()
{
    int size, arr[10], i, key;
    printf("\nEnter how many elements: ");
    scanf("%d", &size);
    printf("\nEnter %d elements: ", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter key to search: ");
    scanf("%d", &key);

    int result = Bsearch(arr, size, key);

    if (result == -1)
    {
        printf("\nElement not found\n");
    }
    else
    {
        printf("\nElement found at %d position\n", result + 1);
    }
    return 0;
}

int Bsearch(int arr[], int size, int key)
{
    int left = 0, right = size - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }

        if (arr[mid] < key)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}

int BubbleSort()
{
    int size, arr[10], i, key;
    printf("\nEnter how many elements: ");
    scanf("%d", &size);
    printf("\nEnter %d elements: ", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    bubble(arr, size);
    printArray(arr, size);
    return 0;
}

int bubble(int arr[], int size)
{
    int i, j, temp, flag = 0;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}

int printArray(int arr[], int size)
{
    int i;
    printf("\nSorted Array is: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int SelectionSort()
{
    int size, i, arr[10];
    printf("\nEnter how many elements: ");
    scanf("%d", &size);
    printf("\nEnter %d elements: ", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    selection(arr, size);
    printArray(arr, size);
    return 0;
}

int selection(int arr[], int size)
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++)
    {
        int min = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}