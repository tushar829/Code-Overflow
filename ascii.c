#include <stdio.h>
int main() {  
    printf("Enter a character: ");
    int ch = getchar();
    printf("ASCII value of %c = %d", ch, ch);
    
    return 0;
}