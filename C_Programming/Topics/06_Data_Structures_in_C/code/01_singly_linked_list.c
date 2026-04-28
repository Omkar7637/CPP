#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

int main(void)
{
    Node *head = (Node *)malloc(sizeof(Node));
    Node *second = (Node *)malloc(sizeof(Node));
    if (head == NULL || second == NULL)
        return 1;

    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = NULL;

    for (Node *p = head; p != NULL; p = p->next)
        printf("%d ", p->data);
    printf("\n");

    free(second);
    free(head);
    return 0;
}