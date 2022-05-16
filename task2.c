#include <stdio.h>
int main(){
    int A, B;
    char space;
    FILE *input = NULL;
    input = fopen("input.txt", "r");
    if (input == NULL){
        printf("Can't open the input file!");
        getchar();
        return -1;
    }

    fscanf(input, "%d", &A);
    fscanf(input, "%c", &space);
    fscanf(input, "%d", &B);

    fclose(input);

    FILE *output = NULL;
    output = fopen("output.txt", "wb");
    if (output == NULL){
        printf("Can't open the output file!");
        getchar();
        return -1;
    }

    fprintf(output, "%d", A + B);

    fclose(output);
    return 0;
}
