#include <stdio.h>

int Marks(int a, int b, int c)
{
    return (a >= 0 && a <= 100 &&
            b >= 0 && b <= 100 &&
            c >= 0 && c <= 100);
}

char grade(float p)
{
    if (p >= 90) return 'A';
    if (p >= 80) return 'B';
    if (p >= 70) return 'C';
    if (p >= 60) return 'D';
    return 'F';
}

int main()
{
    int a, b, c, t;
    float p;
    printf("Enter the marks:");
    scanf("%d", &a);
    printf("Enter the marks:");
    scanf("%d", &b);
    printf("Enter the marks:");
    scanf("%d", &c);
    t = (a + b + c);
    p = (t / 3.0);


    if (!Marks(a, b, c))
    {
        printf("Invalid marks");
    }
     else
     {
       
        printf("Total = %d\n", t);
        printf("Percentage = %.2f\n", p);

        if (p < 60)
        {
            printf("Grade = Fail\n");
        }
        else
        {
            printf("Grade = %c\n", grade(p));
        }
    }

    return 0;
}

