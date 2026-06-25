#include <stdio.h>

int main() {
    int score = 0, answer;

    printf("===== QUIZ APPLICATION =====\n\n");

    printf("Q1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 2)
        score++;

    printf("\nQ2. Which language is used for system programming?\n");
    printf("1. C\n2. HTML\n3. SQL\n4. CSS\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 1)
        score++;

    printf("\nQ3. How many bits are there in a byte?\n");
    printf("1. 4\n2. 8\n3. 16\n4. 32\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 2)
        score++;

    printf("\nQuiz Completed!\n");
    printf("Your Score = %d/3\n", score);

    return 0;
}