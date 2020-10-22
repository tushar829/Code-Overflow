#include<stdio.h>
int main ()
{
    int i, primeno, uplimit, lowlimit, n;
    printf ("ENTER THE LOWER LIMIT : ");
    scanf ("%d", &lowlimit);
    printf ("ENTER THE UPPER LIMIT : ");
    scanf ("%d", &uplimit);
    if(lowlimit>=2)
    {
        printf ("PRIME NUMBERS ARE : ");
        for (n = lowlimit + 1; n < uplimit; n++)
        {
            primeno = 1;
            for (i = 2; i < n/2; i++)
                if (n % i == 0)
                {
                    primeno = 0;
                    break;
                }
            if (primeno)
                printf ("\t %d", n);
        }
    }
    else
    {
        printf("lowlimit must be >1");
    }
}
