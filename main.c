#include <stdio.h>

#include "enumerate.h"

int main(int argc, char const *argv[]) {
    int n = MVS_WTF_enumerate();
    printf("n: %d in main.c\n", n);
    return 0;
}
