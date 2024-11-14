#include <stdio.h>

int main(){
    float y;

    int i = (1 << 24) - 1;

    y = i;

    for(int j = 0; j < 5; j++){
        printf("fixed int: %d | float: %f   ", i, y);
        printf("%08x %08x\n", i, *((int*)&y));
        y = y + 1.0;
        i = i + 1;
    }

    return 0;
}