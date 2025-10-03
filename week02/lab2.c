    // Ahmed Aly, 400557252
    // SE2XC3
    //This code takes the input that is found after the program name and prints hello there or goodbye depending on the input.

    #include <stdio.h>
    #include <string.h>

    // This is the main function that takes the input of what the user typed using the number of words, and the actual word

    int main(int argc, char *argv[]) {

// If the user wrote nothing after then it will output the why
    if (argc < 2) {
        
        printf("You have not entered a word after the program name, try again\n");
        return 1;
    }
//if the user inputs 1 word following the program name then it will do one of the following depending on te actual word
    else if (argc == 2) {
        
        //Greets user if the word is hello
        if (strcmp(argv[1], "hello") == 0) {
            printf("Hello There!\n");
            return 0;
        }
        //Says goodbye to the user if the word is bye
        else if (strcmp(argv[1], "bye") == 0) {
            printf("Goodbye!\n");
            return 0;
        }

        //If the word was not either hello or bye then it will prompt the user to write either or
        else {
            printf("Invalid input, please follow with either hello or bye\n");
            return 1;
        }
    
    }

    //If the user inputs more than 1 word following the program name it will tell them to do otherwise
    else if(argc > 2) {
        
        printf("You have entered too many words after the program name, try again\n");
        return 1;

    }

    
    return 0;    
}

    
