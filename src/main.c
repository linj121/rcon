#include <stdio.h>
#include <test.h>

char* test() {
    return NAME;
}

int main() {
    printf("Hello %s\n", test());
}