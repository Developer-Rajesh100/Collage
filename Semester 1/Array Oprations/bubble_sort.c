#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of Array : ");
    scanf("%d", &n);

    // Declare and initialize array
    int arr[n];

    // Input from user in Array
    printf("Input elements into the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Sorting (Using Bubble Sort Algoritham)
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    // Print the Sorted Array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}