#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

};

int main()
{
    Node* node1 = new Node();
    cout << node1 -> data <<endl;
    cout << node1 -> next <<endl;
    cout << "Enter the values is the formate of nodes is linear data structure" <<endl;


    return 0;
}