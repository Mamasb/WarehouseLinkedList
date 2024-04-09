#ifndef WAREHOUSE_H
#define WAREHOUSE_H

#include <stddef.h>

/* Define the structure to represent an item in the warehouse inventory */
typedef struct WarehouseItem {
    char name[50];
    int quantity;
    char location[20];
    struct WarehouseItem *next;
} WarehouseItem;

/* Function prototype for printing warehouse inventory */
size_t print_inventory(const WarehouseItem *head);

#endif
