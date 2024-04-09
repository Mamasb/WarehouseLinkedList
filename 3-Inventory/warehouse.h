#ifndef WAREHOUSE_H
#define WAREHOUSE_H

#include <stddef.h> // Include for size_t

// Define the structure for a warehouse item
typedef struct WarehouseItem {
    char name[50];
    int quantity;
    char location[50];
    char date[11]; // Assuming date format is YYYY-MM-DD
    int expected_stock; // Add expected_stock member
    int opening_stock; // Add opening_stock member
    int closing_stock; // Add closing_stock member
    int goods_issued; // Add goods_issued member
    struct WarehouseItem *next;
} WarehouseItem;

// Function prototypes
void update_inventory(WarehouseItem **head);
void print_inventory(const WarehouseItem *head);

#endif /* WAREHOUSE_H */
