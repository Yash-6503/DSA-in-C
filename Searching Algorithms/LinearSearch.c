#include<stdio.h>
int main()
{
    int key, n, a[10];
    int i, found = 0;
    printf("\nEnter how many elements: ");
    scanf("%d", &n);
    printf("\nEnter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nEnter Key to search: ");
    scanf("%d", &key);

    for(i=0; i<n; i++)
    {
        if(a[i] == key)
        {
            printf("\nElement found at %d position\n", i+1);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("\nElement not found\n");
    }
    return 0;
>>>>>>> 2bf9782b7c73099464bc1b011994c4f32288579b
}