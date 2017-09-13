//Quick Sort
#include<stdio.h>
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int part (int arr[], int l, int h)
{
    int p = arr[h];
    int i = (l - 1);
 
    for (int j = l; j <= h- 1; j++)
    {
        if (arr[j] <= p)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[h]);
    return (i + 1);
}
void QS(int arr[], int l, int h)
{
    if (l < h)
    {
        int pi = part(arr, l, h);
        QS(arr, l, pi - 1);
        QS(arr, pi + 1, h);
    }
}
void disp(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    QS(arr, 0, 5);
    printf("Sorted array: \n");
    disp(arr, 5);
    return 0;
}
