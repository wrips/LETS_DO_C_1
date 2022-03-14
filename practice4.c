#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the value of num\n");
    scanf("%d" , &num);
    int cube = num * num * num ; 
    printf("The cube of the number is : %d\n" , cube);
    return 0;
}