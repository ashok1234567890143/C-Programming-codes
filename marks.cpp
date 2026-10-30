#include <stdio.h>

int main()
{
    int m1, m2, m3;
    int total;
    float percentage;
    char grade;
    printf("Enter the obtain marks:");
    scanf("%d", &m1);
    printf("Enter the obtain marks:");
    scanf("%d", &m2);
    printf("Enter the obtain marks:");
    scanf("%d", &m3);
    
    total = m1 + m2 + m3;
    percentage = total / 300;

    if (Marks(m1, m2, m3) == 0)
    {
        printf("Invalid marks");
    }
    else
    {
        total = calculateTotal(m1, m2, m3);
        percentage = calculatePercentage(total);

        if (percentage < 60)
        {
            printf("Total = %d\n", total);
            printf("Percentage = %.2f\n", percentage);
            printf("Grade = Fail\n");
        }
        else
        {
            grade = calculateGrade(percentage);

            printf("Total = %d\n", total);
            printf("Percentage = %.2f\n", percentage);
            printf("Grade = %c\n", grade);
        }
    }

    return 0;
}
