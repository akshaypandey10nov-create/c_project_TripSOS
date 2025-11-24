#include <stdio.h>
#include "TripSOS.h"

void showHomePage(void) {
    printf("=====================================\n");
    printf("🚨 Welcome to TripSOS - Dehradun Help Center 🚨\n");
    printf("=====================================\n\n");
}

void showMenu(void) {
    printf("📋 Select a topic:\n");
    printf("1. Car Issues\n");
    printf("2. Medical Emergencies\n");
    printf("3. Safety & Police Help\n");
}

void showQuestions(int topic) {
    printf("\n🔍 Questions under selected topic:\n");
    switch(topic) {
        case 1:
            printf("1. What to do if car breaks down in Dehradun?\n");
            printf("2. How to find a nearby mechanic?\n");
            printf("3. What if fuel runs out?\n");
            break;
        case 2:
            printf("1. How to call an ambulance in Dehradun?\n");
            printf("2. What to do in case of injury?\n");
            printf("3. Nearest hospital in Dehradun?\n");
            break;
        case 3:
            printf("1. How to contact Dehradun police?\n");
            printf("2. What to do in case of theft?\n");
            printf("3. How to report an accident?\n");
            break;
        default:
            printf("Invalid topic selected.\n");
    }
}

void showSolution(int topic, int question) {
    printf("\n✅ Solution:\n");
    if (topic == 1) {
        switch(question) {
            case 1:
                printf("Move the car to safety. Call Dehradun roadside assistance: 0135-2726066.\n");
                break;
            case 2:
                printf("Mechanics nearby: Rajpur Road, Saharanpur Road, ISBT area. Use Google Maps.\n");
                break;
            case 3:
                printf("Contact nearest petrol pump or IOCL fuel delivery in Dehradun.\n");
                break;
            default:
                printf("Invalid question.\n");
        }
    } else if (topic == 2) {
        switch(question) {
            case 1:
                printf("Dial 108 or Dehradun emergency ambulance: 0135-2724500.\n");
                break;
            case 2:
                printf("Provide first aid and call ambulance if needed.\n");
                break;
            case 3:
                printf("Major hospitals: Max, Synergy, Doon Hospital.\n");
                break;
            default:
                printf("Invalid question.\n");
        }
    } else if (topic == 3) {
        switch(question) {
            case 1:
                printf("Call 112 or Dehradun police control room: 0135-2656296.\n");
                break;
            case 2:
                printf("Report theft immediately at nearest PS: Rajpur Road, Patel Nagar.\n");
                break;
            case 3:
                printf("Call 112, share your location, take photos if safe.\n");
                break;
            default:
                printf("Invalid question.\n");
        }
    } else {
        printf("Invalid topic.\n");
    }
}

void showMapHint(int topic, int question) {
    printf("\n🗺 Map Suggestion:\n");

    if (topic == 1) {
        if (question == 1)
            printf("Open Maps and search: \"Rajpur Road, Dehradun\" (many workshops nearby).\n");
        else if (question == 2)
            printf("Search: \"Mechanic near me Dehradun\" on Google Maps.\n");
        else
            printf("Search nearby: \"IOCL Petrol Pump Dehradun\".\n");
    } else if (topic == 2) {
        if (question == 1)
            printf("Search on Maps: \"Ambulance Dehradun\".\n");
        else if (question == 3)
            printf("Search: \"Max Hospital Dehradun\", \"Synergy Hospital Dehradun\".\n");
        else
            printf("Search: \"First Aid Center Dehradun\".\n");
    } else if (topic == 3) {
        if (question == 1)
            printf("Maps search: \"Nearest Police Station Dehradun\".\n");
        else if (question == 2)
            printf("Navigate to: \"Patel Nagar Police Station\".\n");
        else
            printf("Search: \"Dehradun Traffic Police\".\n");
    }
}
