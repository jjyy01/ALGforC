//
//  StringReverse.c
//  ALGforC
//
//  Created by Guagua on 2020/3/7.
//  Copyright © 2020 Guagua. All rights reserved.
//

#include "StringReverse.h"

char* stringReverse(char ch[]) {
    // insert code here...
    char *begin = ch;
    char *end = ch + strlen(ch) - 1;
    while (begin < end) {
        char temp = *begin;
        *(begin++) = *end;
        *(end--) = temp;
    }
    printf("reverseString:%s\n", ch);
    return ch;
}
