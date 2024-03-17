#include <stdio.h>
#include <string.h>

// Maximum number of users
#define MAX_USERS 10

// Structure to represent a user
typedef struct {
    char name[50];
    int age;
    float weight;
    float height;
    float bmi;
} User;

// Function to calculate BMI
float calculateBMI(float weight, float height) {
    return weight / (height * height);
}

int main() {
    // Array to store users
    User users[MAX_USERS];
    int numUsers = 0; // Number of users currently stored
    char choice;

    do {
        // Display menu
        printf("\n--- Fitness Management System ---\n");
        printf("1. Add User\n");
        printf("2. Display Users\n");
        printf("3. Save Users to File\n");
        printf("4. Load Users from File\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch (choice) {
            case '1':
                // Add a user
                if (numUsers < MAX_USERS) {
                    printf("Enter name: ");
                    scanf("%s", users[numUsers].name);
                    printf("Enter age: ");
                    scanf("%d", &users[numUsers].age);
                    printf("Enter weight (kg): ");
                    scanf("%f", &users[numUsers].weight);
                    printf("Enter height (m): ");
                    scanf("%f", &users[numUsers].height);
                    users[numUsers].bmi = calculateBMI(users[numUsers].weight, users[numUsers].height);
                    numUsers++;
                    printf("User added successfully.\n");
                } else {
                    printf("Maximum number of users reached.\n");
                }
                break;
            case '2':
                // Display all users
                printf("\n--- Users ---\n");
                for (int i = 0; i < numUsers; i++)
				{
                    printf("Name: %s\n", users[i].name);
                    printf("Age: %d\n", users[i].age);
                    printf("Weight: %.2f kg\n", users[i].weight);
                    printf("Height: %.2f m\n", users[i].height);
                    printf("BMI: %.2f\n", users[i].bmi);
                    printf("\n");
                }
                break;
            case '3':
                // Save users to file
                if (numUsers > 0) {
                    FILE *file = fopen("users.txt", "w");
                    if (file != NULL) {
                        fwrite(users, sizeof(User), numUsers, file);
                        fclose(file);
                        printf("Users saved to file successfully.\n");
                    } else {
                        printf("Failed to open file.\n");
                    }
                } else {
                    printf("No users to save.\n");
                }
                break;
            case '4':
                // Load users from file
                {
                    FILE *file = fopen("users.txt", "r");
                    if (file != NULL) {
                        fread(users, sizeof(User), MAX_USERS, file);
                        fclose(file);
                        numUsers = MAX_USERS;
                        printf("Users loaded from file successfully.\n");
                    } else {
                        printf("Failed to open file.\n");
                    }
                }
                break;
            case '5':
                // Exit
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != '5');

    return 0;
}

