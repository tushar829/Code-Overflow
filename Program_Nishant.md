#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int binary_num, decimal_num=0, i=0, rem;
    printf("Enter a binary number: ");
    scanf("%d", &binary_num);
    while(binary_num!=0)
    {
        rem = binary_num%10;
        decimal_num = decimal_num + rem*pow(2,i);
        i++;
        binary_num = binary_num/10;
    }
    printf("\nEquivalent Decimal Value is = %d", decimal_num);
    getch();
    return 0;
}
