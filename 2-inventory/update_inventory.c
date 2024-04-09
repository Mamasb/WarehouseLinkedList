#include "warehouse.h"
#include <stdio.h>
#include <time.h>

/* Function to prompt the user to enter quantity for each item */
void update_inventory(WarehouseItem *head)
{
    WarehouseItem *current = head;
    time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    char date[11]; /* Buffer to store the date in "YYYY-MM-DD" format */

    strftime(date, sizeof(date), "%Y-%m-%d", tm);

    printf("Updating inventory for date: %s\n", date);

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
