#ifndef ERRCODE_H
#define ERRCODE_H
#include <iostream>
#include <stdio.h>

int unkerr() {
    printf("\nERR: unknown err.\n");
    return 1; // OHH! THE ERR IS UNKNOWN!
}

int errnotfound() {
    printf("\nERR: not found.\n");
    return 404; // FILE NOT FOUND. DID YOU OPENED FILE HAVE A BAD SECTOR?
}
int errfilenotsupt() {
    printf("ERR: file not supported.");
    return 415; // FILE NOT SUPPORTED. DID YOU IMPORTED A CHEESE FILE?🎈
}
int fatalerr() {
    printf("OH! there is a fatal bad bad error. \ncheck the number you are entred. donot enter neun number.\n");
    return 403;
} // FORBIDDEN!
#endif
