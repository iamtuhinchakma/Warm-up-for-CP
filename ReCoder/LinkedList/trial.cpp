#include <bits/stdc++.h>
using namespace std;
struct Node{
    int info;
    Node* next;
};
//Creating new Node
Node* createNode(int info) {
    // Allocate memory for a new node
    Node* newNode = (Node*)malloc(sizeof(Node));

    // Check for allocation failure
    if (newNode == NULL) {
        cout << "Memory allocation failed!\n";
        return nullptr;
    }

    // Assign data to the node
    newNode->info = info;
    newNode->next = NULL;
    return newNode;
}
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->info << " ";
        temp = temp->next;
    }
    cout << endl;
}
void traversing(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    cout << count << endl;
}
void insertAtTail(Node* &head, int val){
    Node*  newNode = createNode(val);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}
void insertAtHead(Node* &head, int val){
    Node* newNode = createNode(val);
    newNode->next = head;
    head = newNode;
    cout << "Sucess!" << endl;
}
void deleteAnyPos(Node* head, int pos){
    Node* temp = head;
    for(int i = 1; i < pos - 1; i++){
        temp = temp->next;
    }
    Node* deleteNode =  temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}
int main(){
    Node* head = createNode(20);
    head->next = createNode(10);
    print(head);
    traversing(head);
    insertAtTail(head, 10);
}