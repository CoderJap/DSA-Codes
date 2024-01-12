#include <iostream>
using namespace std;

// Iterative  Soln
Node* revLinekdList(Node* head){

    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    while(curr != NULL){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }

    return prev;

}

// Recursive Soln 

//Approach 1 for recursive solution:-

void reverse(Node* &head , Node*curr , Node*prev){
    // base case 
    if(curr == NULL){
        head = prev;
        return ;

    }

    Node* forward = curr->next;
    reverse(head , forward , curr);
    curr->next = prev ;

}

Node* revLinkedList(Node* head){
    Node* curr = head;
    Node* prev = NULL;
    reverse(head , curr , prev);
    return head;

}

// Approach 2 for recursive solution :-
Node* reverse2(Node* head){

    // base case 
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* chotaHead = reverse2(head->next);
    head->next->next = head;
    head->next = NULL;

    return chotaHead;

}

Node* revLinkedList(Node* head){
    return reverse2(head);

}
