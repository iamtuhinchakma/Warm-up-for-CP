#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
        Node(int val){
            this->val = val;
            this->next = NULL;
        }
};
void insertAtTail(Node* &head, int val){
    Node*  newNode = new Node(val);
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
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl << endl;
}
void insertAtPos(Node* head, int pos, int val){
    Node* newNode = new Node(val);

    Node* temp = head;
    for(int i = 1; i < pos - 1; i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    cout << "Successfully Inserted!" << endl;
}
void insertAtHead(Node* &head, int val){
    Node* newNode = new Node(val);
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
    Node* head = NULL;
    while(true){
        cout << "Option 1: Insert at tail" << endl;
        cout << "Option 2: Print" << endl;
        cout << "option 3: Terminate" << endl;
        cout << "Option 4: Insert at any position" << endl;
        cout << "Enter an option: ";
        int opt;
        cin >> opt;
        if(opt == 1){
            cout << "Please enter a value:" << endl;
            int val;
            cin >> val;
            insertAtTail(head, val);
        } else if(opt == 2){
            print(head);
        } else if(opt == 3){
            break;
        } else if(opt == 4){
            int pos, val;
            cout << "Enter position: ";
            cin >> pos;
            cout << endl << "Enter value: ";
            cin >> val;
            cout << endl;
            if(pos == 0){
                insertAtHead(head, val);
            } else {
                insertAtPos(head, pos, val);
            }
        }
    }
}