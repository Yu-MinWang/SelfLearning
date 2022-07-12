#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;

    node(int v){
        data = v;
        next = nullptr;
    }

    void print_list(node *n){
        for(; n!=nullptr; n = n->next)
            cout << n->data << ' ';
    }

    void insert_node(node *n, int v){
        node *new_node = new node(v);
        if(n->next != nullptr)
            new_node->next = n->next;
        n->next = new_node;
    }

    void delete_node(node *n){
        if(n->next == nullptr)
            return;
        node *n_next = n->next;
        n->next = n_next->next;
        delete n_next;
    }

};

int main(){
    node a(4);
    a.insert_node(&a, 6);
    a.print_list(&a);
}
