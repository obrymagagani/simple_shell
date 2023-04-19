#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void cd(char *dir) {
    char cmd[100] = "cd ";
    strcat(cmd, dir);
    system(cmd);
    printf("Current directory changed to %s\n", dir); 
}

void ls() {
    system("ls");
}

void mkdir(char *dir) {
    char cmd[100] = "mkdir ";
    strcat(cmd, dir);
    system(cmd);
    printf("Directory %s created\n", dir);
}

void touch(char *file) {
    char cmd[100] = "touch ";
    strcat(cmd, file);
    system(cmd);
    printf("File %s created\n", file);
}

void rm(char *file) {
    char cmd[100] = "rm ";
    strcat(cmd, file);
    system(cmd);
    printf("File %s deleted\n", file); 
}

int main() {
    char input[100];
    while (1) {
        printf(">> ");
        scanf("%s", input);
        if (strcmp(input, "cd") == 0) {
            char dir[100];
            scanf("%s", dir);
            cd(dir);
        } else if (strcmp(input, "ls") == 0) {
            ls();
        } else if (strcmp(input, "mkdir") == 0) {
            char dir[100];
            scanf("%s", dir);
            mkdir(dir); 
        } else if (strcmp(input, "touch") == 0) {
            char file[100];
            scanf("%s", file);
            touch(file);
        } else if (strcmp(input, "rm") == 0) {
            char file[100];
            scanf("%s", file);
            rm(file);
        } else {
            printf("Invalid command. Try again.\n");
        }
    }
}
