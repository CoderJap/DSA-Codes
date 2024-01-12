// Ques - middle nikalo linked list ki if even then the one node which is farther from head

//Approach 1 - find length of L.L then middle = (len/2 +1) -> this will give the position of middle
// In below code we have to find node so while traversing we will use len/2 only since it will be enough to get to the node while traversing 


#include <iostream>
using namespace std;

int getLength(Node* head){
    int len=0;
    while(head!= NULL){
        len++;
        head = head->next;

}
return len;

}

Node* findMiddleNode(Node* head)
{
    int len = getLength(head);
    int ans = len/2;

    Node* temp = head;
    int cnt=0;
    while(cnt < ans){
        temp = temp->next;
        cnt++ ;
    }
    return temp;

}


// Approach 2:- fast slow ke concpet se jayenge where fast will move 2 nodes and slow in that time will move 1 node so when fast will 
// reach null at that time slow will reach middle and we will return slow node 

Node* getMiddle(Node* head){
    if(head == NULL || head->next ==NULL)
    return head;

    // 2 nodes 
    if(head->next->next == NULL)
    return head->next;

    Node* slow = head;
    Node* fast = head->next;

    while(fast!= NULL){
        fast = fast -> next;
        if(fast!=NULL){
            fast = fast->next;
        }
        slow = slow->next;

    }
    return slow;
}

Node* findMiddle(Node* head){
    return getMiddle(head);

}

// For both these approaches 
// T.C -> O(n)
// S.C -> O(1)
