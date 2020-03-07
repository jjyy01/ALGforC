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

int main(int argc, const char * argv[]) {
    // insert code here...
//    stirng Reverse
//    char str[] = "hello,word";
//    char* resultStr = stringReverse(str);
//    printf("reverse string: %s",resultStr);
//    return 0;
    
    //list reverse
    struct Node *node = constructNode();
    printNodeList(node);
    node = listReverse(node);
    printNodeList(node);
    return 0;
}
