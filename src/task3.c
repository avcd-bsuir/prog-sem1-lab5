// License: CC BY-NC-SA 4.0
/*
 * task3.c
 *
 * Pass the text and the letter to be removed from task 2 via the command line.
 *
 * Written by AlexeyFilich
 * 10 oct 2020
 */

#include <stdbool.h>
#include <stdio.h>
#include "Interactions.h"

int main(int argc, char* args[]) {
    if (argc != 3) {
        printf("Incorrect arguments!\n");
        return 1;
    }
    char * str = args[1], filter = args[2][0];
    int len = 0;
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
    printf("Done!\n");
    return 0;
}
