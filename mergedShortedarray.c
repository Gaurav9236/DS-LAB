#include <stdio.h>
int main (){
    int a[5]={1,3,5,7,9};
    int b[4]={2,4,6,8};
    int c[9];

    int i=0,j=0,k=0;

    while (i < 5 && j < 4) {
        if (a[i] < b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }
     while (i < 5) {
        c[k++] = a[i++];
    }
    while (j < 4) {
        c[k++] = b[j++];
    }

     printf("Merged Array: ");
    for ( int x = 0; x < 9; x++) {
        printf("%d ", c[x]);
    }
    printf("\n");





    return 0;
}