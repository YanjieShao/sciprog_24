#include <stdio.h>
#include <stdlib.h>
#define MAX_FILE_NAME 100
#include "magic_square.h"

int getlines(char filename[MAX_FILE_NAME]);

int main(){  

    //define our file variable
    FILE *f;  
    char filename[MAX_FILE_NAME];
    printf("Enter file name: ");
    scanf("%s", filename);
    
    // ##! n function which gets the number of lines
    int n = getlines(filename);

    // TODO: Open the file 
    f = fopen(filename,"r");
    if (f == NULL){
        printf("! Can't open file\n");
	exit(1);
    }

    int i;
    // TODO: Allocating a matrix for storing the magic square
    // as an array of pointers, where each pointer is a row 
    int **matrix = (int **)malloc(n * sizeof(int *)); // pointer to an integer pointer
    if (matrix == NULL) {
        printf("Memory allocation failed for rows.\n");
        exit(1);
    }
    
    for (i=0; i<n; i++){
        matrix[i] = (int *)malloc(n * sizeof(int));// important! every star is a dimension
	if (matrix[i] == NULL){
	    printf("Memory allocation failed for row %d.\n", i);
            exit(1);
	}
    }

    // TODO:inputting integer data into the matrix;
    
    int j;
    // an extra linebreak in the end of .txt
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
	{
	    fscanf(f, "%d", &matrix[i][j]);
	}
    }

    int is_square_magic = isMagicSquare(matrix, n);

    if (is_square_magic == 0)
    {
        printf("This is not magic\n");
    }
    else{
        printf("This is magic\n");
    }

    // TODO: Freeing each row separately before freeing the array of pointers
    for (i=0; i<n; i++){
        free(matrix[i]);
    }//need loop freeing
    free(matrix);

    // TODO:Close the file
    fclose(f);

    return 0;
}  

//##!

int getlines(char filename[MAX_FILE_NAME]) {
    FILE *fp;
    fp = fopen(filename, "r");
    
    int ch_read;
    int count = 0;

    while( (ch_read = fgetc(fp)) != EOF) // end of file
    {
        if (ch_read == '\n'){
            count++;
        }
    }

    printf("No. lines, %d\n", count);
    fclose(fp); // manually close, same for malloc
    return count;
}

// key takeaways:
// allocating pointers: 2d arrays
// free 2d arrays
// EOF
// fopen fclose
