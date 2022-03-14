#include<stdio.h>
int main(int argc, char const *argv[])
{
    int radius;
    printf("The radius of the circle is\n");
    scanf("%f" , &radius);
    float area = 3.14 * radius * radius;
    printf("The radius of the circle is :%f\n" , area);
    return 0;
}
