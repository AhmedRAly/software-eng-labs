// Ahmed Aly, 400557252
// SE2XC3
// This code is a quiz with 3 questions about Linux, C, and Git, with assosiated answers and questions using arrays


#include <stdio.h>
#include <string.h>


// Here is an array of questions so that each question can be associated with a certain index (0,1,2)
char *questions[] = {

    "In linux, what command is used to print the directory you are currently working in?",

    "In C, what function is used to print output to the screen?",

    "In Git, how do you push your files from your remote repository onto Git?"

};


// Here is an array of answers so that each question can be associated with a certain index (0,1,2)
char *answers[] = {
    "pwd",
    "printf",
    "push"
};


//Prints the usage as shown in the lab manual
void print_usage() {

    printf("Usage: quiz [-q] [-q <question number>] [-a <question number> <answer>]\n");
    printf("Try 'quiz --help' for more information.\n");
}


//Prints the help menu as shown in the lab manual
void print_help() {

    printf("quiz - a simple quiz program\n\n");
    printf("Options:\n");
    printf("  -q                Show all questions\n");
    printf("  -q <num>          Show question number <num>\n");
    printf("  -a <num> <ans>    Submit an answer to question <num>\n");
    printf("  --help            Show this help message\n");
}


//This is the main function that takes and uses the users input 
int main(int argc, char *argv[]) {

    if (argc < 2) {
        print_usage();
        return 1;
    }

    // If the user inputs --help then it will print the menu
    if (strcmp(argv[1], "--help") == 0) {
        print_help();
    }

    // Scans for -q 
    else if (strcmp(argv[1], "-q") == 0) {

        //If the user only inputs 2 words, meaning only -q since it scanned for the -q at the start
        if (argc == 2) {

            // Prints all questions if -q is inputed as shown in the lab
            printf("%s\n%s\n%s\n", questions[0], questions[1], questions[2]);
        }

        //Checks the the second input after -q since we checked if the first entry was -q and now theres one input after
        else if (argc == 3) {

            // Compares the str to check if its 1,2,3 then prints the related question
            if (strcmp(argv[2], "1") == 0) {
                printf("%s\n", questions[0]);
            }
            else if (strcmp(argv[2], "2") == 0) {
                printf("%s\n", questions[1]);
            }
            else if (strcmp(argv[2], "3") == 0) {
                printf("%s\n", questions[2]);
            }

            //If the input after -q is not either 1,2,3
            else {
                printf("Invalid question number. Valid question numbers are : 1, 2, 3.\n");
            }
        }

        //Since the user inputed more words after the -q it will print the usage
        else {
            
            print_usage();
        }
    }

    // Scans for -a
    else if (strcmp(argv[1], "-a") == 0) {

        // Checks if the user inputed 4 inputs in total (-a num answer)
        if (argc == 4) {

            // Compares the second input to check which question number
            if (strcmp(argv[2], "1") == 0) {

                // Compares the third input the "answer" with the correct answer
                if (strcmp(argv[3], answers[0]) == 0) {
                    printf("Correct!\n");
                } 
                else {
                    printf("Incorrect. The correct answer is: %s\n", answers[0]);
                }
            }

            else if (strcmp(argv[2], "2") == 0) {

                if (strcmp(argv[3], answers[1]) == 0) {
                    printf("Correct!\n");
                } 
                else {
                    printf("Incorrect. The correct answer is: %s\n", answers[1]);
                }
            }

            else if (strcmp(argv[2], "3") == 0) {

                if (strcmp(argv[3], answers[2]) == 0) {
                    printf("Correct!\n");
                } 
                else {
                    printf("Incorrect. The correct answer is: %printf", answers[2]);
                }
            }

            // If the question number is not valid
            else {
                printf("Invalid question number. Valid question numbers are : 1, 2, 3.\n");
            }
        }

        // If the user does not input exactly 4 inputs
        else {
            print_usage();
        }
    }


    // Wrong option
    else {
        printf("Error: Unknown option '%s'\n", argv[1]);
        print_usage();
    }

    return 0;
}
