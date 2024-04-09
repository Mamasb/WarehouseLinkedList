#include "warehouse.h"
#include <stdio.h>

/**
 * print_inventory - Prints all elements of the warehouse inventory
 * @head: Pointer to the head of the warehouse inventory list
 *
 * Return: The number of items in the inventory
 */
size_t print_inventory(const WarehouseItem *head)
{
    size_t count = 0;

    printf("Warehouse Inventory:\n");
    printf("====================\n");

    /*  Traverse the linked list of warehouse items */
    for (; head != NULL; head = head->next)
    {
        /* Print information about each item */
        printf("Item: %s\n", head->name);
        printf("Quantity: %d\n", head->quantity);
        printf("Location: %s\n", head->location);
        printf("Date: %s\n", head->date); /* Print the date */ 
        printf("--------------------\n");

        /*Increment the count*/
        count++;
    }

    printf("Total number of items: %lu\n", (unsigned long) count);

    return count;
}
