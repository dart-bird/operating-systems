#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    if (argc != 2) {
        printf("Usage: ./addresses <virtual address>\n");
        return 1;
    }

    unsigned int address = atoi(argv[1]);

    unsigned int offsetMask = 0xFFF;
    unsigned int offset = address & offsetMask;

    unsigned int pageNumber = address >> 12;

    printf("The address %u contains:\n", address);
    printf("page number = %u\n", pageNumber);
    printf("offset = %u\n", offset);

    return 0;
}