#include <stdio.h>

int main() {
    // char path[100];
    // printf("Provide path to read:\n");
    // fgets(path, 100, stdin);

    char line[1000];
    FILE *handle;
    handle = fopen("/home/lukas/repos/learning_c/01/foo.json", "r");
    // handle = fopen(path, "r");

    while (fgets(line, 1000, handle) != NULL) {
        printf("%s", line);
    }
}
