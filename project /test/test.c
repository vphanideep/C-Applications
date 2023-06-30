#include <stdio.h>
#include "main.c"

void test_add() {
    int result = add(3, 4);
    if (result == 7) {
        printf("Addition test passed!\n");
    } else {
        printf("Addition test failed!\n");
    }
}

int main() {
    test_add();
    return 0;
}
