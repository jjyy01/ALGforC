//
//  ListReverse.h
//  ALGforC
//
//  Created by Guagua on 2020/3/7.
//  Copyright © 2020 Guagua. All rights reserved.
//

#ifndef ListReverse_h
#define ListReverse_h

#include <stdio.h>

struct Node;
struct Node * constructNode();
void printNodeList(struct Node *node);
struct Node *  listReverse(struct Node *node);

#endif /* ListReverse_h */
