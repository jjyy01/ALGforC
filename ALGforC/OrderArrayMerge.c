//
//  OrderArrayMerge.c
//  ALGforC
//
//  Created by Guagua on 2020/3/7.
//  Copyright © 2020 Guagua. All rights reserved.
//

#include "OrderArrayMerge.h"

void mergeOrderArray(int *a, int lenA, int *b, int lenB, int *result){
    int p = 0, q = 0, i = 0;
    while (p < lenA && q < lenB) {
        if (a[p] < b[q]) {
            result[i++] = a[p++];
        }else{
            result[i++] = b[q++];
        }
    }
    
    while (p < lenA) {
        result[i++] = a[p++];
    }
    
    while (q < lenB) {
        result[i++] = b[q++];
    }
    
}

void printList(int *list, int length){
    for (int i = 0; i < length; i ++) {
        printf(" %d", list[i]);
    }
    printf("\n");
}
