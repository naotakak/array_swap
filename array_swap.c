#include <stdio.h>
#include <time.h>

int main() {
    int arr[10];
    int i;
    srand( time(NULL) );
    srand( 10 );
    for (i = 0; i < 9; i++) {
        arr[i] = rand();
    }
    arr[9] = 0;
    printf("arr: [");
    for (i = 0; i < 10; i++) {
        printf("%d, ", arr[i]);
    }
    printf("]\n");
    int arr2[10];
    int * ip;
    int temp;
    for (i = 9; i >= 0; i--) {
        ip = & arr[i];
        arr2[9 - i] = * ip;
    }
    printf("arr2: [");
    for (i = 0; i < 10; i++) {
        printf("%d, ", arr2[i]);
    }
    printf("]\n");
    return 0;
}

