#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_USERS 100

typedef struct {
    char name[50];
    char email[50];
    int age;
    char gender[10];
    float height;
    float weight;
} User;

int main()
 {
    User users[MAX_USERS];
    int num_users = 0;

    printf("Welcome to the gym management system!\n");

    // Prompt the user to enter their details
    printf("Please enter your name: ");
    fgets(users[num_users].name, sizeof(users[num_users].name), stdin);
    users[num_users].name[strcspn(users[num_users].name, "\n")] = '\0';

    printf("Please enter your email address: ");
    fgets(users[num_users].email, sizeof(users[num_users].email), stdin);
    users[num_users].email[strcspn(users[num_users].email, "\n")] = '\0';

    printf("Please enter your age: ");
    scanf("%d", &users[num_users].age);

    printf("Please enter your gender (M/F): ");
    scanf("%s", users[num_users].gender);

    printf("Please enter your height (in meters): ");
    scanf("%f", &users[num_users].height);

    printf("Please enter your weight (in kilograms): ");
    scanf("%f", &users[num_users].weight);

    // Increment the number of users in the system
    num_users++;

    printf("User registration successful!\n");

    return 0;
}


/*This code declares a User struct that contains the user's name,
 email address, age, gender, height, and weight. It then creates 
 an array of User structs to store the user details and prompts 
 the user to enter their information. Finally, the code adds the
 new user to the system and increments the number of users in the
 system.
Note that this is just an example code for the user registration 
functionality, and a complete gym management system will require 
additional functionalities and modules.*/




