#include <stdio.h>
int main()
{
char string[20];
printf("Enter string: \n");
scanf("%s", string);
printf("string is %s.\n", string);
int testInteger;
printf("Enter an integer: \n");
scanf("%d", &testInteger);
printf("Number = %d \n",testInteger);
char chr;
printf("Enter a character: \n");
scanf("%c",&chr);
printf("You entered %c \n", chr);
double num1;
printf("Enter a number: \n");
scanf("%lf", &num1);
printf("num1 = %lf \n", num1);
return(0);
}
