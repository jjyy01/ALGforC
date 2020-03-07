//
//  main.c
//  ALGforC
//
//  Created by Guagua on 2020/3/7.
//  Copyright © 2020 Guagua. All rights reserved.
//

#include <stdio.h>
#include "StringReverse.h"
#include "ListReverse.h"
#include "OrderArrayMerge.h"

int main(int argc, const char * argv[]) {
    // insert code here...
//    stirng Reverse
//    char str[] = "hello,word";
//    char* resultStr = stringReverse(str);
//    printf("reverse string: %s",resultStr);
//    return 0;
    
    //list reverse
//    struct Node *node = constructNode();
//    printNodeList(node);
//    node = listReverse(node);
//    printNodeList(node);
//    return 0;
    
    //order array merge
    
    int a[] = {1,3,5,7,8};
    int lenp = 5;
    int b[] = {2,6,10,13,15,16,20,45,70};
    int lenq = 9;
    int *reuslt = (int*)malloc(sizeof(int) * (lenp + lenq));
    mergeOrderArray(a, lenp, b, lenq, reuslt);
    printList(reuslt, lenp + lenq);
    
    
}
