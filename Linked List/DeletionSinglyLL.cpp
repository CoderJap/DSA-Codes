

#include <iostream>
using namespace std;

class Node{
    public :
    int data;
    Node* next;
// Constructor 
    Node (int data){
        this -> data = data;
        this -> next = NULL;
    }

    // destructor 
    ~Node(){
        int value = this -> data;
        // memory free
        if(this -> next != NULL){
            delete next;
            this -> next =NULL;
        }
        cout <<" memory is free for node with data"<<value<<endl;
    }

};
void insertAtHead(Node* &head , int d){
        // new node create 
        Node* temp = new Node(d);
        temp -> next = head;
        head = temp;
}
void insertAtTail(Node* &tail , int d){
    // new node create 
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void deleteNode(int position , Node* &head){
    // deleting first or start node 
    if(position == 1){
        Node* temp = head;
        head = head -> next;

        // memory free start node 
        temp -> next = NULL;
        delete temp;
    }
    else{
        // deleting nany middle node or last node 
        Node* curr = head;
        Node* prev =NULL;

        int cnt=1;
        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;

    }
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp -> data << " ";
        temp = temp -> next;

    } cout<<endl;

}

int main(){
    Node* node1 = new Node(10);
    // cout<< node1 -> data <<endl;
    // cout<< node1 -> next <<endl;

    Node* head = node1;
    Node* tail = node1;

    print(head);

    insertAtTail(tail, 12);
    print(head);

    insertAtTail(tail , 15);
    print(head);

    deleteNode(3,head);
    print(head);



    return 0;
}
