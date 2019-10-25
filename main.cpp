#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class queue1{
public:
struct Node
{
    int data;
    Node* next;
};
    int length;
    Node* top=NULL;

    queue1();
    queue1(int value, int intial_size){
                length=intial_size;
    }
    ~queue1(){
        cout<<"queue is deleted"<<endl;
    }
    int front();
    void pop();
    void push(int value);
    int size();

};
int queue1::front(){
    if(top==NULL){
        return NULL;
    }
    else{
        return top->data;
    }
}
int queue1::size(){
 int counter=0;
    Node* crr=top;
    while(crr!=NULL){
        counter++;
        crr = crr->next;
    }
   return counter;
}
void queue1::push(int value){
    Node* node=new Node();
    node->data=value;
    if(top==NULL){
        top=node;
    }
    else{
        Node* crr=top;
        while(crr->next!=NULL){
            crr=crr->next;
        }
        crr->next=node;
    }
}
void queue1::pop(){
    if(top==NULL){
        return;
    }
    Node* delete_node=new Node();
    delete_node=top;
    top=top->next;
    delete(delete_node);
}
int main()
{

    queue1 q(12,4);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.size()<<endl;
    return 0;
}
