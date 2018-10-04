#include "SOA.h"

SOA::SOA()
{
    head = NULL ;
}
SOA::insert_data(char c){
    Node *newnode = new Node(c);
   if (head == NULL){
        newnode->prev = NULL ;
        newnode->next = NULL ;
        head = newnode ;
    }else{
        newnode->prev = NULL ;
        head->prev = newnode ;
        newnode->next = head ;
        head = newnode;
    }
}
SOA::search_in(char c){
    Node *pointer = head;
    Node *third_wheel ;
    while(pointer){
        if(c == pointer->value){
            third_wheel = pointer->prev;
            if(!pointer->prev){
                break;
            }
            if(!pointer->next){
                third_wheel->prev->next = pointer;
            }
            if(!third_wheel->prev){
                third_wheel->next = pointer->next;
                head = pointer;
            }
            if(third_wheel->prev){
                third_wheel->prev->next = pointer;
                third_wheel->next = pointer->next;
            }
            ///////Common piece of code///////
            pointer->prev = third_wheel->prev;
            pointer->next = third_wheel;
            third_wheel->prev = pointer;
            break;
        }
        pointer = pointer->next;
    }

}
SOA::print_all(){
    Node *pointer = head;
    while(pointer){
        cout << pointer->value << " " ;
        pointer = pointer->next;
    }
}
