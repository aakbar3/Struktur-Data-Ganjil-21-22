#include <iostream>
using namespace std;

struct Buku{
    string pengarang, judul;
    int tahun;

    Buku *next;
}*head, *tail, *cur, *newNode, *lastNode, *del;

void SingleLinkedList(string pengarang, string judul, int tahun){
    head = new Buku();
    head->pengarang = pengarang;
    head->judul = judul;
    head->tahun = tahun;
    head->next = NULL;
    tail = head;}

void addFirst(string pengarang, string judul, int tahun){
    newNode = new Buku();
    newNode->pengarang = pengarang;
    newNode->judul = judul;
    newNode->tahun = tahun;
    newNode->next = head;
    head = newNode;
}

void addLast(string pengarang, string judul, int tahun){
    lastNode = new Buku();
    lastNode->pengarang = pengarang;
    lastNode->judul = judul;
    lastNode->tahun = tahun;
    lastNode->next = NULL;
    tail->next = lastNode;
    tail = lastNode;

}

void removeFirst(){
    del = head;
    head = head->next;
    delete del;
}

void removeLast(){
    del = tail;
    cur = head;
    while (cur->next != tail){
        cur = cur->next;
    }
    tail = cur;
    tail->next = NULL;
}

void changeFirst(string pengarang, string judul, int tahun){
    head->pengarang = pengarang;
    head->judul = judul;
    head->tahun = tahun;
}

void changeLast(string pengarang, string judul, int tahun){
    tail->pengarang = pengarang;
    tail->judul = judul;
    tail->tahun = tahun;
}

void printSingleLinkedList(){
    cur = head;
    while (cur != NULL){
        cout << "Pengarang  = " << cur->pengarang << endl;
        cout << "Judul   = " << cur->judul << endl;
        cout << "Tahun   = " << cur->tahun << endl;
        cur = cur->next;
    }
}

int main(){
    SingleLinkedList("Otan","Dunia Alam",2019);
    printSingleLinkedList();
    cout << endl;

    addFirst("Maya","Indahnya Berbagi",2010);
    printSingleLinkedList();
    cout << endl;

    addLast("Riski","Belajar Membaca",2019);
    printSingleLinkedList();
    cout << endl;

   changeFirst("Mila","Cerita Pandaku",2021);
   printSingleLinkedList();
   cout << endl;

    changeLast("Nara","Hidup itu Melelahkan", 2017);
    printSingleLinkedList();
    cout << endl;

 return 0;
}
