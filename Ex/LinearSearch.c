#include<stdio.h>
int main()
{
    int i, key , n, arr[10];
    printf("\nEnter how many elements: ");
    scanf("%d",&n);
    printf("\nEnter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter key to Search: ");
    scanf("%d", &key);

    LinearSearch(arr, n, key);
    return 0;
}

int LinearSearch(int arr[], int n, int key)
{
    int i, found = 0;
    for(i=0; i<n; i++)
    {
        if(arr[i] == key)
        {
            found = 1;
            break;
        }
    }
    if(found == 0)
    {
        printf("\nElement not found");
    }
    else{
        printf("\nElement found at %d position", i+1);
    }
}