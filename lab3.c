#include "stdio.h"
#include "stdlib.h"
#include "lab3.h"

void print_list(Node* head)
{
    if(head == NULL){
        printf("\n");
        return;
    }
    if( (head->next) == NULL){
        printf("%d\n", head->data);
        return;
    }
    while(head->next){
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("%d\n", head->data);
}

Node* insert_head(Node* head, int new_node_data)
{
    struct s_Node *p;
    p = (struct s_Node *) malloc(sizeof(struct s_Node));
    p->data = new_node_data;
    p->next = head;
    return p;
    return NULL;
}

Node* remove_kth_node(Node* head, int index)
{
    struct s_Node *curr, *prev;
    int i=0;
    curr = head;
    prev = NULL;
    if( (head->next) == NULL ){
        head = NULL;
        return head;
    }
    if(index==0){
        return (head->next);
    }
    for(i=0;i<index;i++){
        prev = curr;
        curr = (curr->next);
    }
    (prev->next) = (curr->next);
    return head;
    return NULL;
}