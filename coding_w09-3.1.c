#include <stdio.h>

int main() {
    int i = 1;

    while (i <= 10) {
        if (i == 6) {
            i++;        // ต้องเพิ่มก่อน continue
            continue;
        }
        printf("%d ", i);
        i++;
    }

    return 0;
}