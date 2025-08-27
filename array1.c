
#include<stdio.h>

struct node 
{
    int data;
    struct node *next;
};

// Function to traverse and print the linked list
void traverse(struct node *head) 
{
    struct node *current = head;
    while (current != NULL) 
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main()
{
    // Example usage
    struct node n1, n2, n3;
    n1.data = 1;
    n1.next = &n2;
    n2.data = 2;
    n2.next = &n3;
    n3.data = 3;
    n3.next = NULL;

    traverse(&n1);

    return 0;
}