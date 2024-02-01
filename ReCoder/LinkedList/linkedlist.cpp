#include<bits/stdc++.h>
using namespace std;

typedef struct node *nodeptr;

//Structure of a node ...
struct node{
    int info;
    nodeptr next;
};

//Creating new node ...
nodeptr newNode(){
    nodeptr x =(struct node*)malloc(sizeof(struct node));
    return x;
}

//Adding new node to next ...
void addLast (nodeptr *head,int value) {
    nodeptr x = newNode();
    x -> info = value;
    x ->next = NULL;
    // if linked list is empty ...
    if(*head == NULL) {
        *head  = x;
        return;
    }
    //Putting head value ...
    nodeptr nullPtr = *head;
    while (nullPtr->next != NULL)
    {
        nullPtr = nullPtr->next;
    }
    nullPtr->next = x;
}

//Add new node at the first position ...
void addFirst(nodeptr *head, int value) {
    nodeptr x = newNode();
    x -> info = value;
    x -> next = NULL;
    if(*head == NULL) {
        *head = x;
        return;
    }
    x ->next = *head;
    *head = x;
    return;
}


int main() {
    nodeptr start = NULL;
    int n,value;
    cout << "Enter the number of input" << endl;
    cin >> n;
    //Taking input for given n number ...
    for(int i = 0 ; i < n ; i++) {
        cin >> value;
        addLast(&start,value);
        //cout<< start -> info << endl;
    }
    addFirst(&start,5);
    addFirst(&start,3);
    int sum = 0,count = 0;
    //if start == null,i==null ...
    for(nodeptr i = start; i != NULL ; i = i->next) {
        cout << i->info << " ";
        sum += i->info;
        count ++;
    }
}