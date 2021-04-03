//program for implementing linear search of value
#include <stdio.h>

void main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int value, i, flag = 0;
    printf("Enter the value to be searched: ");
    scanf("%d", &value);
    for (i = 0; i < 10; i++)
    {
        if (a[i] == value)
        {
            flag = i + 1;
            printf("value found at location %d", flag);
        }
    }
    if (flag == 0)
    {
        printf("value not found");
    }
    else
    {
        printf("\nvalue found");
    }
}