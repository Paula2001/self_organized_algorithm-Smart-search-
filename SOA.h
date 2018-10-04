#ifndef SOA_H
#define SOA_H
#include <iostream>
#include "Node.h"
using namespace std;

class SOA
{
    public:
        SOA();
        insert_data(char c);
        print_all();
        search_in(char c);
    private:
        Node *head ;
};

#endif // SOA_H
