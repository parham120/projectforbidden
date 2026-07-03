#include <iostream>
#include <string>
#include "const/errcode.h"
#include <stdio.h>

int main() {
    while (true) {
        std::string input;
        int x;
        
        printf("your x (or 'terms' for terms): ");
        std::cin >> input;
        
        if (input == "terms") {
            printf("\nTERMS OF USE\n");
            printf("1. DONOT USE 9 AND 1 NUMBER: if you entered this numbers, you are banned from program community.\n");
            printf("2. DONOT USE SANDWICH: if you use a sandwich file name, you are kicked from community and the program will be removed from your system.\n");
            printf("3. if you have a trouble, please donot create a issue in github, send a email to <403 - EMAIL NOT ACCESSED>\n");
            printf("4. THIS PROGRAM IS NOT KIDDING: if you kidding with terms, program shutdown itself and ban/kick from github.notcom\n");
            continue;
        }
        
        try {
            x = std::stoi(input);
        } catch (...) {
            printf("please enter a valid number.\n");
            continue;
        }
        
        if (x == 9) {
            printf("please enter a valid number.\nIt seems like the program has a problem with the number 9.\n");
            return fatalerr();
        }
        else if (x == 1) {
            printf("donot enter eine number! DONOT DO THAT!\n");
            continue;
        }
        
        printf("%d\n", x);
        break;
    }
    return 0;
}
