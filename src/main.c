#include <stdio.h>
#include "TripSOS.h"

int main(void) {
    int topicChoice, questionChoice;
    int running = 1;

    showHomePage();

    while (running) {
        showMenu();

        printf("\nEnter your topic choice (1-3), or 0 to Exit: ");
        if (scanf("%d", &topicChoice) != 1) {
            printf("\n❌ Invalid input! Please enter a number.\n");
            while (getchar() != '\n'); // clear input buffer
            continue;
        }

        if (topicChoice == 0) {
            printf("\n👋 Exiting TripSOS Dehradun Help Center. Stay Safe!\n");
            break;
        }

        if (topicChoice < 1 || topicChoice > 3) {
            printf("\n❌ Invalid Topic! Please choose between 1 and 3.\n");
            continue;
        }

        showQuestions(topicChoice);

        printf("\nEnter your question choice (1-3): ");
        if (scanf("%d", &questionChoice) != 1) {
            printf("\n❌ Invalid input! Please enter a number.\n");
            while (getchar() != '\n');
            continue;
        }

        if (questionChoice < 1 || questionChoice > 3) {
            printf("\n❌ Invalid Question! Please choose between 1 and 3.\n");
            continue;
        }

        showSolution(topicChoice, questionChoice);
        showMapHint(topicChoice, questionChoice);

        printf("\n🔁 Do you want to search again? (1 = Yes, 0 = No): ");
        if (scanf("%d", &running) != 1) {
            printf("\n❌ Invalid input! Exiting.\n");
            break;
        }
    }

    return 0;
}
