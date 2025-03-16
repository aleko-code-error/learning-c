#include <stdio.h>
#include <unistd.h>

int
main()
{
    printf("red\n");
    sleep (1);
    printf("yellow\n");
    sleep (1);
    printf("green\n");
    sleep (1);
    printf("yellow\n");
    sleep (1);
    printf("red\n");
    sleep (1);

    return 0;
}

