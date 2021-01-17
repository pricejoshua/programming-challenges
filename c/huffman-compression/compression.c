#include <stdio.h>
#include <getopt.h>
#include <string.h>

int main(int argc, char *argv[ ])
{
    if (argc != 2)   {
        printf("Usage: ./compression /path/to/file");
        return 1;
    }

    int i;

    char filename[256];
    strcpy(filename, argv[1]);

    
    return 0;
}