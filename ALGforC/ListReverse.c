//
//  ListReverse.c
//  ALGforC
//
//  Created by Guagua on 2020/3/7.
//  Copyright © 2020 Guagua. All rights reserved.
//

#include "ListReverse.h"



struct Node {
    int data;
    struct Node *next;
};

void printNodeList(struct Node *node){
    struct Node * temp = node;
    printf("list is : ");
    while (temp != NULL) {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

struct Node* listReverse(struct Node *node ){
    struct Node *newH = NULL;
    struct Node *p = node;
    while (p != NULL ) {
        struct Node * temp = p->next;
        p->next = newH;
        newH = p;
        p = temp;
    }
    
    return newH;
}



struct Node * constructNode(int len){
    
    struct Node *head = NULL;
    struct Node *cur = NULL;
    for (int i = 0; i < len; i++) {
        struct Node * node = malloc(sizeof(struct Node));
        //C中对象属性一定要初始化，防止野指针。
        node->data = i;
        node->next = NULL;
        
        if (head ==  NULL) {
            head = node;
        }else{
            cur->next = node;
        }
        cur = node;
        
    }
    return head;
}

void freeNode(struct Node *node, int len){
    struct Node *temp = node;
    struct Node *newH = node;
    int i = len;
    while ((i--)> 0 && newH != NULL){
        temp = newH->next;
        free(newH);
        newH = temp;
    }
    
}
