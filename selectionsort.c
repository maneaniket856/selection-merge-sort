#include <stdio.h>

int main()
{
    int A[100], N, i, j, min, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &N);

    printf("Enter the elements:\n");
    for(i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    for(i = 0; i < N - 1; i++)
    {
        min = i;

        for(j = i + 1; j < N; j++)
        {
            if(A[j] < A[min])
            {
                min = j;
            }
        }

        temp = A[i];
        A[i] = A[min];
        A[min] = temp;
    }

    printf("Sorted array:\n");
    for(i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}