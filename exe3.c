//
//  main.c
//  exe3
//
//  Created by НУРИЯ on 9/2/20.
//  Copyright © 2020 НУРИЯ. All rights reserved.
//Nuriya Umirbekova exe3
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *pointer;
}*stnode;

void create_list(int n);
void insert_node(int num);
void print_list(void);

int main()
{
    
    int n;
    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    create_list(n);
    printf("\n Data entered in the list : \n");
    print_list();
    printf("\n Enter data to insert at the end of the list : ");
    scanf("%d", &n);
    insert_node(n);
    printf("\n Data, after inserted in the list are : \n");
    print_list();
    
    return 0;
}
void create_list(int n)
{
    struct node *fnNode, *temp;
    int num, i;
    stnode = (struct node *)malloc(sizeof(struct node));

    if(stnode == NULL)
    {
        printf(" Memory can not be allocated.");
    }
    else
    {

        printf(" Input data for node 1 : ");
        scanf("%d", &num);
        stnode-> data = num;
        stnode->pointer = NULL;
        
        temp = stnode;
        for(i=2; i<=n; i++)
        {
            fnNode = (struct node *)malloc(sizeof(struct node));
            if(fnNode == NULL)
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &num);
 
                fnNode->data = num;
                fnNode->pointer = NULL;
 
                temp->pointer = fnNode;
                temp = temp->pointer;
            }
        }
    }
}

void insert_node(int num)
{
    struct node *fnNode, *temp;
    fnNode = (struct node*)malloc(sizeof(struct node));
    if(fnNode == NULL)
    {
        printf(" Memory can not be allocated.");
    }
    else
    {
        fnNode->data = num;
        fnNode->pointer = NULL;
        temp = stnode;
        while(temp->pointer != NULL)
            temp = temp->pointer;
        temp->pointer = fnNode;
    }
}


void print_list()
{
    struct node *temp;
    if(stnode == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        temp = stnode;
        while(temp != NULL)
        {
            printf("%d=>", temp->data);
            temp = temp->pointer;
        }
        printf("NULL\n");  
    }
}


