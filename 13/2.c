#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

Node *circle_create(int n);

void count_off(Node *head, int n, int k, int m);

int main() 
{
    int n, k, m;
    scanf("%d%d%d", &n, &k, &m);
    Node *head = circle_create(n);
    count_off(head, n, k, m);
    return 0;
}

Node *circle_create(int n) 
{
    Node *temp, *new_node, *head;
    int i;

    temp = (Node *) malloc(sizeof(Node));
    head = temp;
    head->data = 1;

    for(i = 2; i <= n; i++) {
        new_node = (Node *) malloc(sizeof(Node));
        new_node->data = i;
        temp->next = new_node;
        temp = new_node;
    }

    temp->next = head;

    return head;
}

void count_off(Node *head, int n, int k, int m) 
{
    Node *temp, *prev;
    temp = head;
    prev = temp;
    
    while (temp->data != k) {
        prev = temp;
        temp = temp->next;
    }
    
    int count = 0;
    
    while (count < n) {
        for (int i = 1; i < m; i++) {
            prev = temp;
            temp = temp->next;
        }
        count++;
        printf("%d", temp->data);
        if(count != n){
            printf(" ");
        }
        Node *p = temp;
        prev->next = p->next;
        temp = p->next;
        free(p);
    }

    return;
}
