#include <stdio.h>
#include <stdlib.h>

int main(void){
    char **aPtr;
    int len = 1; // Start with 1 string
    aPtr = malloc(sizeof(char*) * len); // Do not cast malloc in C
    scanf("%s",aPtr[0]);
    printf("%s \n",aPtr[0]); // This should work now.
}
