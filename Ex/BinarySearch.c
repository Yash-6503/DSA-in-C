#include<stdio.h>
int main()
{
    int n, key, arr[10], i;
    printf("\nEnter how many elements: ");
    scanf("%d", &n);
    printf("\nEnter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter key to search: ");
    scanf("%d", &key);

    int result = BinarySearch(arr, n, key);

    if(result == -1)
    {
        printf("\nElement not found");
    }
    else{
        printf("\nElement found at %d position", result+1);
    }
    return 0;
}

int BinarySearch(int arr[], int n, int key)
{
    int left = 0, right = n - 1;
    while(left <= right)
    {
        int mid = left + (right - left) / 2;
        if(arr[mid] == key)
        {
            return mid;
        }

        if(arr[mid] < key)
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