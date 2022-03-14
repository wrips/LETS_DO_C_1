#include<stdio.h>
int main(int argc, char const *argv[])
{
    int side;
    printf("Enter the value for side\n");
    scanf("%d" , &side);
    int area = side * side;
    printf("The sides of the square are :%d\n" , side);
    return 0;
}
