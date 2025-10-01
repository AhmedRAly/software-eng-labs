// Ahmed Aly, 400557252
// SE2XC3
//This code is a reflection of what I learnt throughout the past portion of the lab 

#include <stdio.h>
#include <unistd.h>

//Function that prints my reflection, questions followed by the answer
int main() {

//Printing my personal info
    printf("Ahmed Aly\n"); fflush(stdout); sleep(1);
    printf("Student Number: 123456789\n"); fflush(stdout); sleep(1);
    printf("Course: SE2XC3\n\n"); fflush(stdout); sleep(1);

    // Reflection

    //Used the "/n appropiatlly to leave spaces and make the format orginized"
    //Made the delay between the printing as mentioned in the intructions 
    //Added more delay for the questions so that it gives it the effect asking then answering
    printf("What do you think is the most useful thing you’ve learned so far in this course?\n"); fflush(stdout); sleep(2);
    printf("I think the most useful thing I have learned so far is Linux commands and file permissions,\n"
        "more specifically how they work beyond just the syntax.\n\n"); fflush(stdout); sleep(1);


    printf("Is there anything you’ve learned so far that you do not think is useful? If so, explain why.\n"); fflush(stdout); sleep(2);
    printf("In the beginning It was annoying just writing in the terminal\n"
        "because we have all these IDEs that make it easier to write code.\n\n"); fflush(stdout); sleep(1);


    printf("What are the advantages and disadvantages of using vim for coding?\n"); fflush(stdout); sleep(2);
    printf("An advantage is that it is always available,\n"
        "however at the same time it is not as easy to use compared to an IDE like VS Code.\n\n"); fflush(stdout); sleep(1);


    printf("What are the advantages and disadvantages of using VS Code for coding?\n"); fflush(stdout); sleep(2);
    printf("VS Code is very user-friendly and helps show any errors and sugguestions so it makes it great for debugging,\n"
         "how ever it is not always available to use like other IDEs and or text editors like vim.\n\n"); fflush(stdout); sleep(1);

    return 0;
}
