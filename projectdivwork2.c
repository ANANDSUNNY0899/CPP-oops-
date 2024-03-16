#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EQUIPMENT 50

typedef struct {
    char name[50];
    char type[20];
    int quantity;
} Equipment;

int main() {
    Equipment equipment[MAX_EQUIPMENT];
    int num_equipment = 0;

    printf("Welcome to the gym equipment management system!\n");

    // Add some initial equipment to the system
    strcpy(equipment[num_equipment].name, "Dumbbells");
    strcpy(equipment[num_equipment].type, "Free weights");
    equipment[num_equipment].quantity = 10;
    num_equipment++;

    strcpy(equipment[num_equipment].name, "Treadmill");
    strcpy(equipment[num_equipment].type, "Cardio");
    equipment[num_equipment].quantity = 5;
    num_equipment++;

    // Display the equipment available in the system
    printf("Equipment available:\n");
    for (int i = 0; i < num_equipment; i++) {
        printf("%s (%s) - Quantity: %d\n", equipment[i].name, equipment[i].type, equipment[i].quantity);
    }

    // Allow the user to add new equipment to the system
    printf("Would you like to add new equipment to the system? (Y/N) ");
    char response;
    scanf("%c", &response);

    if (response == 'Y')
	{
        printf("Please enter the name of the new equipment: ");
        scanf("%s", equipment[num_equipment].name);

        printf("Please enter the type of the new equipment: ");
        scanf("%s", equipment[num_equipment].type);

        printf("Please enter the quantity of the new equipment: ");
        scanf("%d", &equipment[num_equipment].quantity);

        num_equipment++;
        printf("New equipment added to the system!\n");

        // Display the updated list of equipment
        printf("Equipment available:\n");
        for (int i = 0; i < num_equipment; i++) {
            printf("%s (%s) - Quantity: %d\n", equipment[i].name, equipment[i].type, equipment[i].quantity);
        }
    }

    return 0;
}

