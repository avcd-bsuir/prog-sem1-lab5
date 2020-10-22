// License: CC BY-NC-SA 4.0
/*
 * task2.c
 *
 * Text is given. Remove all occurrences of the specified letter from it.
 *
 * Written by AlexeyFilich
 * 10 oct 2020
 */

#include <stdbool.h>
#include <stdio.h>
#include "Interactions.h"

int main(int argc, char* args[]) {
    while (true) {
        char str[100], filter;
        int len = 0;
        printf("Input string: ");
        gets(str); // Read string
        aScanCheck("Input symbol to filter out: ", "%c", &filter); // Read filter
        while (str[++len] != '\0'); // Get string length
        for (int i = 0; i < len; i++) {
            if (str[i] == filter) { // If we found filter symbol
                for (int shift = i + 1; shift < len; shift++) // Shift string left
                    str[shift - 1] = str[shift];
                i--; // Dec i and len
                len--;
            }
        }
        for (int i = 0; i < len; i++)
            printf("%c", str[i]);
        printf("\n");
        if (aQToExit()) break; // Exit prompt
    }
    printf("Done!\n");
    return 0;
}
