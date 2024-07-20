//Bubble Sort Algorithm in C
#include<stdio.h>
int main()
{
    int n, arr[10], result, i, j, temp;
    printf("\nEnter how many elements: ");
    scanf("%d", &n);
    printf("\nEnter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    BubbleSort(arr, n);
    printArray(arr, n);
    
    return 0;
}

int printArray(int arr[], int n)
{
    printf("\nSorted Array is:");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int BubbleSort(int arr[], int n)
{
    int temp, i, j;
    for(i=0; i<n-1; i++)
    {
        int flag = 0;
        for(j=0; j<n-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0)
        {
            break;
        }
    }
}