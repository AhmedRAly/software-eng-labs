//Ahmed Aly, 400557252
//SE2XC3
//This code reads the output from wc command and calculates average line length
//It reads three numbers from stdin and computes average characters per line


#include <stdio.h>
#include <stdlib.h>

//Main function
int main(void) {


//Variables to store  with the assosiated three numbers from wc output
    double lines, words, chars;
    
//Reads the three numbers from stdin (wc output format)
    int result = scanf("%lf %lf %lf", &lines, &words, &chars);
    

//If we didn't read exactly 3 numbers, something went wrong
    if (result != 3) {
        fprintf(stderr, "Bad Value\n");
        return EXIT_FAILURE;
    }
    

//Calculating average line length by dividing characters by lines
//Removes 1 from chars because wc includes newline characters
    double avg_line_length = (chars - 1) / lines;
    
//Print the average rounded to 1 decimal place
    printf("%.1f\n", avg_line_length);
    
    return EXIT_SUCCESS;
}