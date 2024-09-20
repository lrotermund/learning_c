#include <stdio.h>

int main() {
    char name[100];
    printf("What is your name?\n");
    // scanf("%100s", name);
    fgets(name, 100, stdin);
    printf("Your name is %s\n", name);
}
