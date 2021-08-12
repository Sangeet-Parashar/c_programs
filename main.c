#include <stdio.h>

int main(int argc, char *argv[])
{
    printf(argv[1]);
    printf("Press any key to continue...");
    char quit = getchar();
    return 0;
}