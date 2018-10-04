#ifndef NODE_H
#define NODE_H
#include <iostream>
using namespace std;


class Node
{
    public:
        Node();
        Node(char val);
        char value ;
        Node *next ;
        Node *prev ;
};

#endif // NODE_H
