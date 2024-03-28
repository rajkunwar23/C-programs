#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    int product_id;
    char product_name[50];
    float product_price;
    int product_quantity;
    float total_price;
    struct node *next;
} node;

void insert(node **head, int product_id, char product_name[], float product_price, int product_quantity) {
    node *new_node = (node *)malloc(sizeof(node));

    new_node->product_id = product_id;
    strncpy(new_node->product_name, product_name, sizeof(new_node->product_name) - 1);  // Corrected strcpy to strncpy

    new_node->product_price = product_price;
    new_node->product_quantity = product_quantity;

    new_node->total_price = product_price * product_quantity;
    new_node->next = *head;
    *head = new_node;
}

void display(node *head) {
    node *ptr;
    printf("\n\n");
    printf("Product ID | Product Name | Product Price | Product Quantity | Total Price\n");
    printf("-----------------------------------------------------------------------------\n");
    for (ptr = head; ptr != NULL; ptr = ptr->next) {
        printf("%-10d | %-15s | %.2f | %-18d | %.2f\n", ptr->product_id, ptr->product_name, ptr->product_price, ptr->product_quantity, ptr->total_price);
    }
}

int main() {
    node *head = NULL;

    insert(&head, 1, "Product 1", 100.0, 2);
    insert(&head, 2, "Product 2", 200.0, 1);
    insert(&head, 3, "Product 3", 300.0, 3);

    display(head);

    return 0;
}

