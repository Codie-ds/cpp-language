#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }

    //dextructor
   /* ~Node(){
        int values = this -> data;
        //memory free
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
            cout << "Memory is free for node with data " << values <<endl;
    }   */
};

void insertathead(Node* &head, int d){

        //new node create
        Node* temp = new Node(d);
        temp -> next = head;
        head = temp;
}   
    
void insertattail(Node* &tail, int d){
    
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}   

void print(Node* head){

    if(head == NULL){
        cout << "List is empty" <<endl;
        return;
    }

    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

void uniqueSortedList(Node* head){

    //empty list
    if(head == NULL)
        return;

    //non empty list
    Node* curr = head;

    while(curr != NULL){
    
        if((curr -> next != NULL) && curr -> data == curr -> next -> data){
            Node* next_next = curr -> next -> next;
            Node* nodeToDelete = curr -> next;
            delete(nodeToDelete);
            curr -> next = next_next;
        }

        else{//non equal
            
            curr = curr -> next;
        }
    }

    print(head);
}

void insertAtposition(Node* &tail, Node* &head, int position, int d){

    //insert at start
    if(position == 1){
        insertathead(head, d);
        return;
    }
    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }

    if(temp -> next == NULL){
        insertattail(tail, d);
        return;
    }

    //creating a node for d
    Node* nodeTOinsert = new Node(d);

    nodeTOinsert -> next = temp -> next;

    temp -> next = nodeTOinsert;
}

int main()
{
    Node* node1 = new Node(1);

    Node* head = node1;
    Node* tail = node1;

    insertattail(tail, 2);
    insertattail(tail, 2);
    insertattail(tail, 3);

    print(head);

    uniqueSortedList(head);




    return 0;
}