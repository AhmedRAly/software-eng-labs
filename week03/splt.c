#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main(void) {

    char word[100];        

    while (true) {  
                  

        int result = scanf("%99s", word);
           

        if (result == 0) {  

                         
            fprintf(stderr, "Bad Value\n"); 
            return EXIT_FAILURE;            
        }


        if (result == EOF)   
            break;

        printf("%s\n", word);   
    }

    //Ends the while loop
    return EXIT_SUCCESS;  

}

