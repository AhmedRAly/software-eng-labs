// Ahmed Aly, 400557252
// SE2XC3
// This code takes a standard input and outputs it, this is does through texts after file name or a txt file, whihc prints
//it word by word in a seperate line, and sorts it based on diffrent prompts



#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


//Main funtion 
int main(void) {

//Sets a limit to do 100 characters a time, for memory usage
    char word[100];        


//The propgram keeps running until it breaks
    while (true) {  
                  
//Scans characters with %s but only 99, from the "word"
        int result = scanf("%99s", word);
           
//If nothing is read from the input the program will fail
        if (result == 0) {  

                         
            fprintf(stderr, "Bad Value\n"); 
//Returns the fail
            return EXIT_FAILURE;            
        }

//If the input reaches the end of the file then it will break and later rtuen succses
        if (result == EOF)   
            break;

//Prints the words as long as we still didnt reach the end
        printf("%s\n", word);   
    }

    
    return EXIT_SUCCESS;  

}

