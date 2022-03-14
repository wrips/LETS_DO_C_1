#include<stdio.h>
int main(int argc, char const *argv[])
{
    // inputting the values
    /*
    int age ; 
    printf("Enter the age\n");
    scanf("%d" , &age);
    printf("The age of the person is : %d\n" , age);
    */
   int num1 , num2;
   printf("Enter the number num1\n");
   scanf("%d" , &num1 );
   printf("Enter the number num2\n");
   scanf("%d" , &num2 );
   int diff = num1 + num2;
   printf("The sum of the two numbers is : %d\n" ,  diff);

    return 0;
}
