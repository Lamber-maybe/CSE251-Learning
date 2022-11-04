//
// Created by Lamber on 2022/11/5.
//
#include <stdio.h>
#include <string.h>

/*
 * Name : Lamber
 * Program to experiment with files
 */
void Reverse(char str[]);

int main(int argc, char *argv[]){
    FILE *inFile;
    FILE *outFile;
    char line[120];

    if(argc < 3){
        printf("Insufficient arguments\n");
        return 1;
    }

    printf("Copy from file: %s\n", argv[1]);
    printf("Copy to file: %s\n",argv[2]);

    inFile = fopen(argv[1], "r"); // 注意此时的双引号, 单引号会报错
    if(inFile == NULL){
        printf("Unable to open file %s\n", argv[1]);
        return 1;
    }

    outFile = fopen(argv[2], "w");
    if(outFile == NULL) {
        printf("Unable to open file %s\n", argv[2]);
        return 1;
    }

    /* While we are not at the end of the file */
    while(!feof(inFile)){
        /* Read a line of text from the file */
        fgets(line, sizeof(line), inFile);

        //line[sizeof(line) - 1] = '\0';
        //Reverse(line);

        /* Remove the newline at the end of the line*/
        if(strlen(line) > 0) {
            line[strlen(line) - 1] = '\0';
            Reverse(line);
        }

        fprintf(outFile, "%s\n", line);
    }

    fclose(inFile);
    fclose(outFile);
}


void Reverse(char str[]) {
    int front = 0;
    int back = strlen(str) - 1;
    char t; /* A temporary place to put a character */

    while(front < back) {
        t = str[front];
        str[front] = str[back];
        str[back] = t;
        front++;
        back--;
    }

}
