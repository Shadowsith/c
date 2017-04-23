#include <stdio.h>
#include <stdlib.h>

struct list_node{
    int data;
    struct list_node *next;
};

typedef struct list_node *node;

node insert_right(node list, int data){
    node new_node   = (node) malloc(sizeof(struct list_node));
    new_node->data  = data;
    new_node->next  = list->next;
    list->next	    = new_node;  
    return new_node;
    }

node delete_right(node list){
    node tmp	= list->next;
    list->next	= list->next->next;
    free(tmp);
    return list;

}

int main(void){


}
