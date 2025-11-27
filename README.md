Name- Akshay Pandey
SapID- 590024919

* PROJECT SUMMARY

TripSOS – Dehradun Help Center is a menu-driven C console application that helps users find quick assistance during emergencies in the city of Dehradun. The program provides categorized information for car issues, medical emergencies, and safety/police help, including practical solutions, emergency contact numbers, and Google Maps search suggestions.

The application uses a simple text-based interface where users select a topic, choose a related question, and receive immediate guidance. It demonstrates key C programming concepts such as modular programming through functions, input validation, switch-case logic, loops, and structured console interaction. Designed to be lightweight, user-friendly, and informative, TripSOS serves as a basic prototype for an emergency information tool for travelers and residents.
 
* FEATURES

* Interactive Menu System
Users can choose from three main emergency categories and explore related questions.

* Modular Function-Based Design
The program is structured using multiple functions (showMenu, showSolution, etc.) for clarity and reusability.

* Emergency-Specific Solutions
  Provides practical guidance for:

* Car breakdowns

* Medical emergencies

* Safety and police-related incidents

* Map Search Suggestions
Offers Google Maps search hints to help users locate nearby services such as hospitals, petrol pumps, mechanics, and police stations.

* Input Validation & Error Handling
Prevents invalid input crashes by checking for non-numeric values or out-of-range choices.

* Loop-Based Interaction
Users can continue asking questions or exit as needed using a menu-driven loop.

* Clean and User-Friendly Console UI
Uses clear formatting, emojis, and structured text to enhance readability and user engagement.

* Realistic Emergency Contact Information
Includes phone numbers and location references relevant to Dehradun.

* Compilation & Execution

STEPS:

1. OPEN THE FOLDER

Create a folder (e.g., TripSOS) and open it in VS Code.
Place the file TripSOS.c inside this folder.

2. COMPILE THE PROGRAM

Open the VS Code terminal and run:

gcc TripSOS.c -o TripSOS

3. RUN THE PROGRAM

./TripSOS

* Concepts Demonstrated

This program showcases several fundamental concepts of C programming:

* Modular Programming (Functions)
The program is divided into multiple functions (showMenu, showQuestions, showSolution, etc.) to improve structure and readability.

* Conditional Statements
Uses if-else and switch-case to handle user choices and control program flow.

* Loops
A while loop allows the program to run repeatedly until the user chooses to exit.

* Input Handling & Validation
Checks for invalid or non-numeric input using scanf() and input buffer clearing.

* User Interaction via Console
Displays menus, prompts, and outputs in a clean, user-friendly format.

* Parameter Passing
Functions take parameters (e.g., topic and question) to process user selections.

* Basic Error Handling
Provides messages for invalid topic or question entries.

* Standard I/O Usage
Uses printf() and scanf() from <stdio.h> to manage input and output operations.
