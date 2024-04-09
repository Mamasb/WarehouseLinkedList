#include <time.h>
#include "warehouse.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function to update the inventory */
void update_inventory(WarehouseItem **head)
{
    WarehouseItem *current;
    time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    char date[11]; /* Buffer to store the date in "YYYY-MM-DD" format */

    strftime(date, sizeof(date), "%Y-%m-%d", tm);

    printf("Updating inventory for date: %s\n", date);

    current = *head;

    /* Traverse the linked list and prompt the user to enter quantity for each item */
    while (current != NULL)
    {
        printf("Enter quantity for item '%s': ", current->name);
        scanf("%d", &(current->quantity));
        /* Update the date for the current item */
        snprintf(current->date, sizeof(current->date), "%s", date);

        current = current->next;
    }

    printf("Inventory updated successfully!\n");
}

/* Function to print the inventory */
void print_inventory(const WarehouseItem *head)
{
    printf("Warehouse Inventory:\n");
    printf("====================\n");

    /*  Traverse the linked list of warehouse items */
    for (; head != NULL; head = head->next)
    {
        /* Print information about each item */
        printf("Item: %s\n", head->name);
        printf("Quantity: %d\n", head->quantity);
        printf("Location: %s\n", head->location);
        printf("Date: %s\n", head->date);
        printf("--------------------\n");
    }
}
