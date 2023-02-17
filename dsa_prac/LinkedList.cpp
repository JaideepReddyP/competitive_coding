#include<iostream>
using namespace std;


class Node{
    int data;
    Node* next;
public:
    Node(int value){
        data = value;
        next = NULL;
    }
};

class LL{
    Node* head;
    int size;
public:
    LL(){
        head = NULL;
        size = 0;
    }
    void append(int value){
        Node *p = head;
        if(!size){
            Node h(value);
            head = &h;
        } else{
            while(p->next != NULL) p = p->next;
            Node *t = new Node(value);
            p->next = t;
        }
        size++;
    }
    void print_list(){
        Node* p = head;
        while(p != NULL){
            cout << p->data << " ";
            p = p->next;
        }
    }
    void insert(int l, int x){
        if(l > size+1) throw "insert index overflow";
        Node *p = head;
        for(int i = 0; i < l-1; i++) p = p->next;
        
    }
};


int main(){
    LL list;
    list.append(10);
    list.append(20);
    list.append(30);
    list.append(40);
    list.append(50);


    list.printl();
}