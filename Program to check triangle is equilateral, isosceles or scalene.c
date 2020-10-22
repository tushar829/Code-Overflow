#include <stdio.h>

int main()
{
    int len1, len2, len3;
    printf("Enter three side lengths of triangle: ");
    scanf("%d%d%d", &len1, &len2, &len3);

    if(len1==len2 && len2==len3) 
    {
        printf("Equilateral triangle.");
    }
    else if(len1==len2 || len1==len3 || len2==len3) 
    {
        printf("Isosceles triangle.");
    }
    else 
    {
        printf("Scalene triangle.");
    }

    return 0;
}
