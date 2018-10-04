#include <iostream>
#include "SOA.h"
using namespace std;

int main()
{
    cout << "Watch number 1"<<endl;
    SOA *s = new SOA();
    s->insert_data('1');
    s->insert_data('2');
    s->insert_data('3');
    s->insert_data('4');
    s->print_all();
    s->search_in('1');
    cout <<endl;
    s->print_all();
    s->search_in('1');
    cout <<endl;
    s->print_all();

    return 0;
}
