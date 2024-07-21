// Binary Search Program

#include<stdio.h>

int main()
{
	int size, i, result, key, arr[10];
	printf("\nEnter how many elements: ");
	scanf("%d", &size);
	printf("\nEnter %d elements: ", size);
	for (i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("\nEnter key to search: ");
	scanf("%d", &key);
	result = bSeacrh(arr, size, key);
	if (result == -1)
	{
		printf("\nElement not found");
	}
	else
	{
		printf("\nElement found at %d position", result + 1);
	}
	return 0;
}

int bSearch(int arr[], int size, int key)
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