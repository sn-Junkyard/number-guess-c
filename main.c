#include <stdio.h>
#include <string.h>
#include "config.h"
#include "hint.h"
int compare(int guess, int target);
int main(int argc, char **argv) {
    if (argc < 2 || strcmp(argv[1], "--play") != 0) { printf("%d\n", TARGET); return 0; }
    int guess; puts("Guess a number between 1 and 10:");
    while (scanf("%d", &guess) == 1) { int c = compare(guess, TARGET); if (!c) { puts("Correct!"); return 0; } puts(c < 0 ? "Too small" : "Too large"); puts(HINT); }
    return 0;
}
