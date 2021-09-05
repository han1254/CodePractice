//
// Created by 12547 on 2021/9/5.
//

#ifndef CLION_DATASTRUCTURE_DLINKLIST_H
#define CLION_DATASTRUCTURE_DLINKLIST_H

typedef struct DNode {
    int data;
    struct DNode *prior, *next;
}DNode, *DLinkList;


#endif //CLION_DATASTRUCTURE_DLINKLIST_H
