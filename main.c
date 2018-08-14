#include <stdio.h>

#include "enumerate.h"

int main(int argc, char const *argv[]) {
    int n = enumerate();
    printf("n: %d in main.c", n);
    return 0;
}
