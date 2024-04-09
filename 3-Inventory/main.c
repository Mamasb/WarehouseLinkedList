#include <stdio.h>
#include <stdlib.h>
#include "warehouse.h"

int main(void)
{
    int i;
    int num_days;
    WarehouseItem *inventory = NULL;

    // Initialize the warehouse inventory
    WarehouseItem item1 = {"Product A", 0, "", "2024-04-09", 0, 0, 0, 0, NULL};
    WarehouseItem item2 = {"Product B", 0, "", "2024-04-09", 0, 0, 0, 0, NULL};
    WarehouseItem item3 = {"Product C", 0, "", "2024-04-09", 0, 0, 0, 0, NULL};

    // Create a linked list of warehouse items
    item1.next = &item2;
    item2.next = &item3;

    inventory = &item1;

    printf("Enter the number of days to simulate: ");
    scanf("%d", &num_days);

    for (i = 0; i < num_days; i++)
    {
        update_inventory(&inventory);
        print_inventory(inventory);
        printf("\n");
    }

    return 0;
}
