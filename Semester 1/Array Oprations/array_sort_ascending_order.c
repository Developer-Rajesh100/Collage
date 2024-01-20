#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter the size of Array : ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements of Array : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted Array : ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}