#include <stdio.h>
#include <getopt.h>
#include <string.h>


#define SIZE_OF_MAP 32


int main(int argc, char *argv[ ])
{
    if (argc != 2)   {
        printf("Usage: ./compression /path/to/file");
        return 1;
    }


    char ascii[256];
    int i;

    char filename[256];
    strcpy(filename, argv[1]);

    FILE *file = fopen(filename, 'r');
    

    char c;

    if(file){
        while(fscanf(file, '%c', c)){
            ascii[(int)c]++;
        }
    }

    

    return 0;
}