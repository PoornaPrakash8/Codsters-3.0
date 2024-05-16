matrixtranspose;
#include <stdio.h>

void main() {
    int a[10][10], trans[10][10], i, j, r, c;
    printf("Enter the dimensions of the matrix:\n");
    scanf("%d%d", &r, &c);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            trans[j][i] = a[i][j];  
        }
    }

    printf("The transpose of the matrix is \n");
    for (i = 0; i < c; i++) { 
        for (j = 0; j < r; j++) {  
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }
}
