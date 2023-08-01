#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;

        Node(int val){
            data = val;
            left = NULL;
            right = NULL;
        }

        void inorderDisplay(){

        }

        void preorderDisplay(Node* root){
            if(root==NULL){
                return;
            }
            cout <<root->data<<" ";
            preorderDisplay(root->left);
            preorderDisplay(root->right);
        }

        void postorderDisplay(){

        }
};


int main(){
    Node* root(1);
    
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->right = new Node(7);
    root.preorderDisplay(root);
    return 0;
}
