#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv[])
{
    int num;
    int num2;
    int num3;
    while(1)
    {
    srand((unsigned int)time(NULL));
    num2 = rand();
    num3 = (int)rand()%10;
    printf("%d %d %d",num, num2, num3);
    }
    return 0;
}
