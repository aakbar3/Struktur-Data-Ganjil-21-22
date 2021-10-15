#include <iostream>
using namespace std;

struct user{
    string nama, password;
    user *prev;
    user *next;
}*head, *tail, *cur, *newNode, *del;

void createDoubleLL(string nama, string id){
    head = new user();
    head->nama = nama;
    head->id = id;
    head->prev = NULL;
    head->next = NULL;
    tail = head;
}

void addFiirst(string nama, string id){
    newNode = new user();
    newNode->nama = nama;
    newNode->id = id;
    newNode->prev = NULL;
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void addLast(string nama, string password){
    newNode = new user();
    newNode->nama = nama;
    newNode->password = password;
    newNode->prev = tail;
    newNode->next = NULL;
    tail->next = newNode;
    tail = newNode;
}

void removeFirst(){
    del = head;
    head = head->next;
    head->prev = NULL;
    delete del;
}

void removeLast(){
    del = tail;
    tail = tail->prev;
    tail->next = NULL;
    delete del;
}

void printDLL(){

    cur = head;
    while (cur != NULL){
        cout << "nama user = " << cur->nama << endl;
        cout << "password  = " << cur->password << endl;

        cur = cur->next;
    }

}

int main(){

    createDoubleLL("Heri", "Heri123");
    printDLL();
    cout << endl;

    addFiirst("Arya", "rahasia");
    printDLL();
    cout << endl;

    addLast("Hana", "kopimacca");
    printDLL();
    cout << endl;

    removeFirst();
    printDLL();
    cout << endl;

    removeLast();
    printDLL();
    cout << endl;
    
    return 0;
    
}
