#include <stdio.h>
int minIndex(int arr[], int i, int j)
{
    if (i == j)
        return i;
    int k = minIndex(arr, i + 1, j);
    return (arr[i] < arr[k]) ? i : k;
}
void selectionSort(int arr[], int n, int index)
{
    if (index == n)
        return;
    int k = minIndex(arr, index, n - 1);
    if (k != index)
    {
        int temp = arr[k];
        arr[k] = arr[index];
        arr[index] = temp;
    }
    selectionSort(arr, n, index + 1);
}
int main()
{
    int n;
    printf("Enter the number of Elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the Array Elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array Elements before sorting:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    selectionSort(arr, n, 0);
    printf("\nArray after sorting:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}