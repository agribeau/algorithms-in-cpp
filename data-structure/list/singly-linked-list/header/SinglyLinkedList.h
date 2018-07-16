//
// Created by dean on 2018/7/12.
//

#ifndef ALGORITHMS_IN_CPP_SINGLYLINKEDLIST_H
#define ALGORITHMS_IN_CPP_SINGLYLINKEDLIST_H

#include "Node.h"

class SinglyLinkedList
{
public:
    SinglyLinkedList();

    ~SinglyLinkedList();

    void clearList();

    bool isEmpty();

    int getLength();

    void insertHead(Node *pNode);

    void insertTail(Node *pNode);

    bool insertNode(int i, Node *pNode);

    bool deleteNode(int i, Node *pNode);

    bool getElem(int i, Node *pNode);

private:
    Node *m_pList;
    int m_iLength;
};


#endif //ALGORITHMS_IN_CPP_SINGLYLINKEDLIST_H
