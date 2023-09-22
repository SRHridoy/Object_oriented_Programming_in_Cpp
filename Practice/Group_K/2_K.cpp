//Write a program implementing linked list as a class. Also Perform some required operations like inserting, deleting nodes & display the contents of entre linked list.
#include<iostream>
using namespace std;

class Node{

    public:
        int val;
        Node* next;

        Node(int data){
            
            val=data;
            next=NULL;
        }
};

void insertAtHead(Node* &head,int val){

    Node *new_node = new Node(val);
    new_node->next=head;
    head = new_node;
}

void insertAtTail(Node* &head, int val){

    Node* new_node = new Node(val);
    Node* temp = head;
    while (temp->next!=NULL)
    {
        temp  = temp->next;
    }
    temp->next = new_node;
}

void deleteAtHead(Node* &head){

    Node* temp = head;
    head = head->next;
    free(temp);
}

void deleteAtTail(Node* &head){

    Node* second_last = head;
    while (second_last->next->next!=NULL)
    {
        second_last = second_last->next;
    }
    Node* temp = second_last->next;
    second_last->next = NULL;
    free(temp);
}

void display(Node* head){

    Node* temp = head;
    while (temp!=NULL)
    {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "Null" << endl;
}


int main(){

    Node *head = NULL;
    display(head);

    insertAtHead(head,2);
    display(head);
    insertAtHead(head,1);
    display(head);
    insertAtTail(head,3);
    display(head);

    deleteAtHead(head);
    display(head);
    deleteAtTail(head);
    display(head);


}