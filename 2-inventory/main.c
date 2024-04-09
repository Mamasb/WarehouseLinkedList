#include <stdlib.h>
#include <stdio.h>
#include "warehouse.h"

int main(void)
{
    /* Example usage of the print_inventory function */
    WarehouseItem item1 = {"Product A", 100, "A-12", "", NULL};
    WarehouseItem item2 = {"Product B", 50, "B-34", "", NULL};
    WarehouseItem item3 = {"Product C", 200, "C-56", "", NULL};

    /*  Create a linked list of warehouse items */
    item1.next = &item2;
    item2.next = &item3;

    /* Update the inventory */
    update_inventory(&item1);

    /* Print the updated inventory */
    print_inventory(&item1);

    return 0;
}
