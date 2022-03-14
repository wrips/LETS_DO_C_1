#include<stdio.h>
int main(int argc, char const *argv[])
{
    int length , breadth;
    printf("Enter the value of length\n");
    scanf("%d" , &length);
     printf("Enter the value of breadth\n");
    scanf("%d" , &breadth);
    int perimeter = 2 * (length + breadth);
    printf("The value of perimeter is : %d\n" , perimeter);

    return 0;
}
