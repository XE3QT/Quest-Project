#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <time.h>

#define NUM_ROOMS 6

typedef struct Room {
    char description[100];
    int north;
    int south;
    int east;
    int west;
    int hasPotOfGold;
} Room;

void initializeRooms(Room* rooms) {
    // Room descriptions
    strcpy(rooms[0].description, "You are in the living room.");
    strcpy(rooms[1].description, "You are in the kitchen.");
    strcpy(rooms[2].description, "You are in the bedroom.");
    strcpy(rooms[3].description, "You are in the bathroom.");
    strcpy(rooms[4].description, "You are in the study.");
    strcpy(rooms[5].description, "You are in the garden.");

    // Randomize available directions for each room
    srand(time(NULL));
    for (int i = 0; i < NUM_ROOMS; i++) {
        rooms[i].north = rand() % 2;
        rooms[i].south = rand() % 2;
        rooms[i].east = rand() % 2;
        rooms[i].west = rand() % 2;
        rooms[i].hasPotOfGold = 0;
    }

    int potOfGoldRoom = rand() % NUM_ROOMS;
    rooms[potOfGoldRoom].hasPotOfGold = 1;
}

int main() {
    Room rooms[NUM_ROOMS];
    initializeRooms(rooms);

    // Randomize starting room
    int currentRoom = rand() % NUM_ROOMS;

    printf("Welcome to The Developer's Quest!\n");
    printf("Find the Pot of Gold by exploring the rooms.\n");
    printf("Enter 'quit' to exit the game.\n");

    while (1) {
        printf("\n%s\n", rooms[currentRoom].description);

        char direction[10];
        printf("Enter a direction (north, south, east, west): ");
        scanf("%s", direction);

        if (strcmp(direction, "quit") == 0) {
            printf("Thank you for playing The Developer's Quest!\n");
            break;
        }

        int validMove = 0;

        if (strcmp(direction, "north") == 0 && rooms[currentRoom].north) {
            currentRoom++;
            validMove = 1;
        } else if (strcmp(direction, "south") == 0 && rooms[currentRoom].south) {
            currentRoom--;
            validMove = 1;
        } else if (strcmp(direction, "east") == 0 && rooms[currentRoom].east) {
            currentRoom += 2;
            validMove = 1;
        } else if (strcmp(direction, "west") == 0 && rooms[currentRoom].west) {
            currentRoom -= 2;
            validMove = 1;
        }

        if (validMove) {
            printf("You move %s.\n", direction);
        } else {
            printf("You hit a wall. Choose a different direction.\n");
        }

        if (rooms[currentRoom].hasPotOfGold) {
            printf("Congratulations! You found the Pot of Gold!\n");
            break;
        }
    }

    return 0;
}
