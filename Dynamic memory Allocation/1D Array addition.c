#include <stdio.h>
#include <stdlib.h>

void display(int *p, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d\t", *(p + i));
    }
}

void read(int *p, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("\nEnter value of element %d: ", i + 1);
        scanf("%d", p + i);
    }
}

void add1D(int *p1, int *p2, int *p3, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        *(p3 + i) = *(p1 + i) + *(p2 + i);
    }
}

int main()
{
    int n;
    int *p1, *p2, *p3;

    printf("How many elements are there? ");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Invalid number of elements");
        return 0;
    }

    p1 = (int *)malloc(sizeof(int) * n);
    p2 = (int *)malloc(sizeof(int) * n);
    p3 = (int *)malloc(sizeof(int) * n);

    if(p1 == NULL || p2 == NULL || p3 == NULL)
    {
        printf("Memory allocation failed");

        free(p1);
        free(p2);
        free(p3);

        return 1;
    }

    printf("\nEnter elements of Array A:\n");
    read(p1, n);

    printf("\nEnter elements of Array B:\n");
    read(p2, n);

    add1D(p1, p2, p3, n);

    printf("\nArray A:\n");
    display(p1, n);

    printf("\n\nArray B:\n");
    display(p2, n);

    printf("\n\nArray C (Addition):\n");
    display(p3, n);

    free(p1);
    free(p2);
    free(p3);

    return 0;
}
