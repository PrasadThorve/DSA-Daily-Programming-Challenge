#include<iostream>

using namespace std;

class Node {
public:  
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

void insertAtTail(Node *&head, int val)
{
    Node *n = new Node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
};

void display(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {   
        
        cout << temp->data << " -> ";
        // if(temp->data == 2){
        //     cout<<"2 is present in the linkedList.";
        // }
        temp = temp->next;
        
    }
    cout << "NULL" << endl;
};



int main() {
    Node *head = NULL;
    insertAtTail(head, 1);
    display(head);
    insertAtTail(head, 2);
    display(head);
    insertAtTail(head,3);
    display(head);
    return 0;

}