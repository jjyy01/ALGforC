//
//  HashALG.c
//  ALGforC
//
//  Created by Guagua on 2020/3/8.
//  Copyright © 2020 Guagua. All rights reserved.
//

#include "HashALG.h"

char hashTest(char *str, int length){
    
    int list[256] = {0};
    
    char *p = str;
    char reuslt = '\0';
    while (*p != reuslt) {
        list[*(p++)]++;
    }
    
    p = str;
    while (*p != reuslt) {
        if (list[*p] == 1) {
            reuslt = *p;
            break;
        }
        p++;
    }
    
    return reuslt;
}
