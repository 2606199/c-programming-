#include <stdio.h>
int main() {
    int a[3][3],b[3][3],  i, j;
    int (*p)[3];
    p=a;
   int (*q)[3];
    q=b;

    // Assigning elements to the matrix
    printf("\nEnter matrix elements:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", *(p+i)+j);
        }

    // Displaying the matrix a[][]
    printf("\nEntered matrix: \n");
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j) {
            printf("%d  ", *(*(p+i)+j));
            if (j == 2)
                printf("\n");
        }

    // Finding the transpose of matrix a
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j) {
            *(*(q+j)+i) = *(*(p+i)+j);
        }

    // Displaying the transpose of matrix a
    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j) {
            printf("%d  ", *(*(q+i)+j));
            if (j == 2)
                printf("\n");
        }
    return 0;
}
