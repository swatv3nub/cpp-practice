//WAP in C to add two matrices

#include<stdio.h>
int main() {
    int arrA[20][20], arrB[20][20], x1, x2, i, j, sum[20][20];
    printf("Enter the rows of the matrices: ");
    scanf("%d", &x1);
    printf("Enter the columns of the matrices: ");
    scanf("%d", &x2);
    printf("Enter the values of the first matrix:\n");
    for(i=0; i<x1;i++) {
        for(j=0; j<x2;j++) {
            printf("Enter Element arrA[%d][%d]: ", i+1, j+1);
            scanf("%d", &arrA[i][j]);
        }
    }
    printf("Enter the values of the second matrix:\n");
    for(i=0; i<x1;i++) {
        for(j=0; j<x2;j++) {
            printf("Enter Element arrA[%d][%d]: ", i+1, j+1);
            scanf("%d", &arrB[i][j]);
        }
    }
    for(i=0; i<x1; i++) {
        for(j=0; i<x2; j++) {
            sum[i][j] = arrA[i][j] + arrB[i][j]; 
            printf("%d", sum[i][j]);
        }
    }
}
