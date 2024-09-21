#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    const char *done = "done";
    int min = 0, max = 0;
    char line[100];

    while(1) {
        printf("Provide a number or finish with \"done\":\n");
        fgets(line, 100, stdin);
        line[strcspn(line, "\n")] = '\0';

        if(strcmp(line, done) == 0) break;

        int ival = atoi(line);
        if(ival > max) {
            max = ival;
        }

        if(ival < min) {
            min = ival;
        }
    }

    printf("Max: %d\nMin: %d\n", max, min);
}
