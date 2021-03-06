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
#include <stdlib.h>

struct Node;
struct Node * constructNode(int len);
void freeNode(struct Node *node, int len);
void printNodeList(struct Node *node);
struct Node *  listReverse(struct Node *node);


#endif /* ListReverse_h */
