#include <stdio.h>

//function build
int area(int length, int width)
//void area(int length, int width)
{
    //int length, width;
    //scanf("%d %d",&length, width); 0
    int a;
    a = length * width;
    return a;
}

int main()
{
    int x;
    x = area(4, 5);
    printf("%d", x);
    return 0;
}