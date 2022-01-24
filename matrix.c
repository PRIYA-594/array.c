#include <stdio.h>
int main() 
{ int i, j, m, n; 
int matrix[10][20]; 
printf("Enter number of rows : "); 
scanf("%d", &m); 
printf("Enter number of columns : "); 
scanf("%d", &n); 
printf("Input elements in the matrix:\n");
for (i = 0; i < m; i++) 
{ 
for (j = 0; j < n; j++) 
{ 
printf("element-[%d],[%d]: ", i, j); 
scanf("%d", &matrix[i][j]); 
} 
} 
printf("The matrix is:\n");
for (i = 0; i < m; i++) 
{ 
for (j = 0; j < n; j++) 
{ 
printf("%d\t", matrix[i][j]); 
} 
printf("\n"); 
}
return 0;
}
