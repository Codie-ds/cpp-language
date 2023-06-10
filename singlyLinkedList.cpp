#include<iostream>
using namespace std;
    
class Node{
    
    public:
    int data;
    Node* next;
    
    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    //dextructor
    ~Node(){
        int values = this -> data;
        //memory free
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout << "Memory is free for node with data " << values <<endl;
    }   
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
    Node* temp = head;
    
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
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

void deleteNode(int position, Node* & head){


    if(position ==  1){
        Node* temp = head;
        head = head -> next;
        //memory free start node
        temp -> next = NULL;
        delete temp;
    }
    else{
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt <  position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}
    
int main()
{   
    //create a new node
    Node*node1 = new Node(10);
    cout << node1 -> data <<endl;
    cout << node1 -> next <<endl;
      
    //head pointed to node1
    Node* head = node1;
    Node* tail = node1;
    print(head);
    
    insertattail(tail, 12);
    
    print(head);
    
    insertattail(tail, 15);
    print(head);
  
    insertAtposition(tail,head, 4, 22);
    print(head);

    cout << "Head  " << head -> data <<endl;
    cout << "Tail " << tail -> data <<endl;

    deleteNode(4, head);
    print(head);

    cout << "Head  " << head -> data <<endl;
    cout << "Tail " << tail -> data <<endl;
    
    return 0;
}   