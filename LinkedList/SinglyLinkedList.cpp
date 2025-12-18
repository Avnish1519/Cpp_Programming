#include<iostream>
using namespace std;
class Node{//node class created
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){//node constructor
        this -> data = data;//constructor
        this -> next = NULL;//constructor
    }

    void insertAtHead(Node* &head, int d){//function

        //
    }
};

int main(){//main function

    Node* Node1 = new Node(10);//node declared

    cout<< Node1 -> data << endl;
    cout<< Node1 -> next << endl;

}
