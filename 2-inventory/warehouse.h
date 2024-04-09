#ifndef WAREHOUSE_H
#define WAREHOUSE_H

#include <stddef.h>
#include <time.h> /* Include <time.h> for date functionality */

/* Define the structure to represent an item in the warehouse inventory*/
typedef struct WarehouseItem {
    char name[50];
    int quantity;
    char location[20];
    char date[11]; /* String to store the date (format: "YYYY-MM-DD") */
    struct WarehouseItem *next;
} WarehouseItem;

/* Function prototypes */
size_t print_inventory(const WarehouseItem *head);
void update_inventory(WarehouseItem *head);

#endif
