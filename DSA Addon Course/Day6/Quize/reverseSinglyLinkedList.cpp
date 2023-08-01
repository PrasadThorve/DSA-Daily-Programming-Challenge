#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data=data;
        this->next=NULL;
    }

    void insert(node* &head, int val){
        cout<<"insert";
        node* temp = new node(val);
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;    
        }
        temp->data=val;
        return;

    }

    void print(node* &head){
        cout<<"print";
        node* temp;
        temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        return;
    }
};

int main(){
    node* head;
    head->insert(head,10);
    head->insert(head,20);
    head->insert(head,30);
    head->insert(head,40);
    head->insert(head,50);
    head->print(head);
    return 0;

}