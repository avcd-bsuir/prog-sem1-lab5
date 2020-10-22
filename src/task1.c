// License: CC BY-NC-SA 4.0
/*
 * task1.c
 *
 * Print every k-th character of the string, counting from 1 from left to right.
 *
 * Written by AlexeyFilich
 * 10 oct 2020
 */

#include <stdbool.h>
#include <stdio.h>
#include "Interactions.h"

int main(int argc, char* args[]) {
    while (true) {
        char str[100];
        int k, len = 0;
        printf("Input string: ");
        scanf("%s", &str); // Read string
        aScanCheck("Input k number: ", "%d", &k); // Read k
        while (str[++len] != '\0'); // Get string length
        for (int i = k - 1; i < len; i += k)
            printf("%c", str[i]); // Print every k-th element
        printf("\n");
        if (aQToExit()) break; // Exit prompt
    }
    printf("Done!\n");
    return 0;
}
