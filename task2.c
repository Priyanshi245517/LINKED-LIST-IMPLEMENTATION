//Create a program to implement a singly linked list with operations like insertion ,deletion and traversal

#include<stdio.h>
#include<stdlib.h>

    //in order to create a linked list we first have to create a node structure.

struct node{
int data;  //here we are giving space for the data.
struct node* next;
};

int main(){
    //insertion of 4 nodes with the help of malloc.
    struct node* node1= (struct node*)malloc(sizeof(struct node));
    struct node* node2=(struct node*)malloc(sizeof(struct node));
    struct node* node3= (struct node*)malloc(sizeof(struct node));
    struct node* node4= (struct node*)malloc(sizeof(struct node));

    //storing data ie. the value of each node respectively.

    node1->data=10;
    node2->data=20;
    node3->data=30;
    node4->data=40;

    //now we need each node to point out to the next node.

    node1->next=node2;
    node2->next=node3;
    node3->next=node4;
    node4->next=NULL;

    struct node* temp=node1;

    //after giving data we need to print out the data
    printf("the linked list before deletion is as follows\n ");
    while(temp != NULL){
    printf("-> %d ",temp->data);
    temp=temp->next;
    }

    //now let's delete one of the nodes we inserted in the linked list
    node1->next=node2;
    node2->next=node4;
    node4->next=NULL;
    free(node3);

    //now traversing the data in order to check if all the operations are done correctly
    temp=node1;
    printf("\nlinked list after deletion is as follows \n");
    while(temp != NULL){
        printf("->%d ",temp->data);
        temp=temp->next;
    }
    return 0;
}
