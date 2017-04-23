#include <stdio.h>
#include <stdlib.h>

int main(void){

    //Init Array
    int** array;

    //Init Array Size:
    int rows,cols;
    printf("Please enter 2 sizes for rows: ");
    scanf("%d",rows);
    printf("Cols: ");
    scanf("%d",cols);

    //Init counters for malloc
    int i,j;

    //Memory allocation:
	//of rows
    array = malloc(sizeof(int*) * rows);
    if(array == NULL){
	printf("No mem avaiable");
	return 1;
    }
	//of cols
    for(i = 0; i < rows; i++){
	array[rows] = malloc(sizeof(int*) * cols);
	if(array[rows] == NULL){
	    printf("No mem avaiable");
	    return 1;
	}
    }

    //Input something in new array

    for(i = 0; i < rows; i++){
	for(j = 0; j < cols; j++){
	    printf("\tA[%d][%d] = ",i, j);
	    scanf("%d", &array[i][j]);
	}
    }

    //Print the new array
    printf("\n");
    for(i = 0; i < rows; i++){
	printf("\t\n");
	for(j = 0; j < cols; j++){
	    printf("%4d", array[i][j]);
	    }
    }
}

