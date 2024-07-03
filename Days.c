#include <stdio.h> // Includes the standard I/O library

// Defining an enumeration type for days of the week, starting from Sunday as 1
typedef enum {
    SUNDAY = 1, // Enum value for Sunday
    MONDAY,     // Enum value for Monday
    TUESDAY,    // Enum value for Tuesday
    WEDNESDAY,  // Enum value for Wednesday
    THURSDAY,   // Enum value for Thursday
    FRIDAY,     // Enum value for Friday
    SATURDAY    // Enum value for Saturday
} DayOfWeek; // Naming the enumeration type as DayOfWeek

// Declaring a function prototype for getDayOfWeek, which takes an integer and returns a pointer to a character (string)
char* getDayOfWeek(int dayNumber); 

int main() { // Main function starts here
    int userInput; // Declaring an integer variable to store user input
    
    printf("Enter a number between 1 and 7: "); // Prompting the user to enter a number
    scanf("%d", &userInput); // Reading the user input into userInput
    
    // Checking if the entered number is within the valid range (1 to 7)
    if(userInput >= 1 && userInput <= 7) {
        char* dayName = getDayOfWeek(userInput); // Calling the getDayOfWeek function with the user input
        printf("The day of the week is: %s\n", dayName); // Printing the name of the day
    } else {
        printf("Invalid input. Please enter a number between 1 and 7.\n"); // Informing the user if the input is invalid
    }

    return 0; // Returning 0 to indicate successful execution
}

// Function definition for getDayOfWeek, which converts a day number to its corresponding name
char* getDayOfWeek(int dayNumber) {
    switch(dayNumber) { // Using a switch statement to match the day number with its name
        case SUNDAY:
            return "Sunday"; // Returning the string "Sunday" if the day number matches SUNDAY
        case MONDAY:
            return "Monday"; // Returning the string "Monday" if the day number matches MONDAY
        case TUESDAY:
            return "Tuesday"; // Returning the string "Tuesday" if the day number matches TUESDAY
        case WEDNESDAY:
            return "Wednesday"; // Returning the string "Wednesday" if the day number matches WEDNESDAY
        case THURSDAY:
            return "Thursday"; // Returning the string "Thursday" if the day number matches THURSDAY
        case FRIDAY:
            return "Friday"; // Returning the string "Friday" if the day number matches FRIDAY
        case SATURDAY:
            return "Saturday"; // Returning the string "Saturday" if the day number matches SATURDAY
        default:
            return "Unknown"; // Returning "Unknown" if the day number does not match any of the cases
    }
}