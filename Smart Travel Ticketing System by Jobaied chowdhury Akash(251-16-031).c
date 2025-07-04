#include <stdio.h>

int main()
{
    char destination[50], name[50], contact[15];
    int classType, tickets, availableSeats = 80;
    float pricePerTicket, totalCost;
    int travelTime; // Travel time in hours
    char choice;

    printf("Welcome to the Smart Travel Ticketing System\n");

    do
    {
        // Taking Passenger Details

        printf("\nEnter Passenger Name: ");
        scanf(" %[^\n]", name);
        printf("Enter Passenger Contact Number: ");
        scanf(" %[^\n]", contact);

        printf("\nEnter your destination: ");
        scanf(" %[^\n]", destination);

        printf("Choose Class Type:\n");
        printf("1. Economy (300 BDT per ticket)\n");
        printf("2. Business (500 BDT per ticket)\n");
        printf("3. VIP (800 BDT per ticket)\n");
        printf("Enter class number (1-3): ");
        scanf("%d", &classType);

        //  ticket prices and calculating travel time
        switch (classType)
        {
        case 1:
            pricePerTicket = 300;
            travelTime = 5; // Economy class takes 5 hours
            break;
        case 2:
            pricePerTicket = 500;
            travelTime = 3; // Business class takes 3 hours
            break;
        case 3:
            pricePerTicket = 800;
            travelTime = 2; // VIP class takes 2 hours
            break;
        default:
            printf("Invalid class selected.\n");
            continue; // skip the rest of the loop and go back
        }

        printf("Enter number of tickets you want to buy: ");
        scanf("%d", &tickets);

        // Check seat availability
        if (tickets > 0 && tickets <= availableSeats)
        {
            totalCost = tickets * pricePerTicket;
            availableSeats = availableSeats-tickets;

            // Display ticket details
            printf("\n--- Ticket Summary ---\n");
            printf("Passenger Name: %s\n", name);
            printf("Contact Number: %s\n", contact);
            printf("Destination: %s\n", destination);
            printf("Class: %s\n", (classType == 1) ? "Economy" :
                   (classType == 2) ? "Business" : "VIP");
            printf("Travel Time: %d hours\n", travelTime);
            printf("Tickets: %d\n", tickets);
            printf("Total Cost: %.2f BDT\n", totalCost);
            printf("Booking successful! Seats remaining: %d\n",availableSeats);
        }
        else

        {
            printf("Sorry! Not enough seats available or invalid number.\n");
        }

        // Ask if the user wants to make another booking
        printf("\nDo you want to book another ticket? (Y/N): ");
        scanf(" %c", &choice);

    }
    while (choice == 'Y' || choice == 'y');

    printf("\nThank you for using our Smart Travel Ticketing System!\n");

    return 0;
}


