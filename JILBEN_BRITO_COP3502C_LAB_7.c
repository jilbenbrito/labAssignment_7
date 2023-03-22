#include <stdio.h>

int spi = 0;
int ts = 0;

void bubbleSort(int *arr, int n)
{
    int i, j, temp;
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(*(arr + j) > *(arr + j + 1))
            {
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
                ts++;
                spi++;
                
            }
        }
        printf("iteration #%d: %d\n", i + 1, spi);
        spi = 0;
    }
}

void printArray(int arr[], int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[9] = { 97 , 16 , 45 , 63 , 13 , 22 , 7 , 58 , 72 };

    bubbleSort(arr, 9);
    
}