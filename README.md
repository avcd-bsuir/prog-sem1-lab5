[![License](https://img.shields.io/badge/license-CC%20BY--NC--SA%204.0-blue.svg)](https://bit.ly/cc-by-nc-sa-40)

# Usage

To clone repository correctly use `--recursive` flag with `git`.

To compile and run a program use:
```
$ ./build.sh gcc src/<filename>
```

Executable will be started automatically. It can be found in `build/scr/` folder.

# Semester \<1\> lab \<5\>

## Task \<1\>

Print every k-th character of the string, counting from 1 from left to right.

Original (ru):

Вывести каждый k-й символ строки, считая с 1 слева направо.

## Task \<2\>

Text is given. Remove all occurrences of the specified letter from it.

Original (ru):

Дан текст. Удалить из него все вхождения заданной буквы.

## Task \<3\>

Pass the text and the letter to be removed from task 2 via the command line.

Original (ru):

Передать текст и удаляемую букву из задачи 2 через командную строку.

# Credits

Written by Alexey Filich.

# License

This repository is licensed under [Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International](LICENCE.md).

# Notes

For compiling with SDL2:
```
-lmingw32 -lSDL2main -lSDL2
```

For compiling with ncurses
```
-lncursesw
```

## Description for some `include` files:

- stdarg.h

    Variable arguments with `va_list args; va_start(args, last_variable_in_function); va_arg(args, type)`.

- stdbool.h

    `True` and `false`.

- stdio.h

    `printf`, `scanf`, `NULL`, etc.

- stdlib.h

    Memory: `malloc`, `calloc`, `free`, \
    Random: `rand`, `srand`.

- string.h

    `memset`, `memcpy`, `memmove`.

- time.h

    `time(0)`.
