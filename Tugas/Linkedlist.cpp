#include<iostream>

using namespace std;

struct buku
{
    //komponen /member
    string judul, pengarang;
    int tahunterbit;

    buku *next;
};

int main()
{
    //inisialisasi single lingked list
    buku *node1, *node2, *node3;

    node1 = new buku();
    node2 = new buku();
    node3 = new buku();

    //Pengisian node 1
    node1->judul = "Matematika";
    node1->pengarang = "Ahli Matematika";
    node1->tahunterbit = 1995;
    node1->next = node2;

    //Pengisian node 2
    node2->judul = "Biologi";
    node2->pengarang = "Lana";
    node2->tahunterbit = 1985;
    node2->next = node3;

    //Pengisian node 3
    node3->judul = "Kata";
    node3->pengarang = "Agung";
    node3->tahunterbit = 1990;
    node3->next = NULL;

    //print single lingked list

    buku *cur;
    cur = node1;
    while(cur !=NULL){
        cout << "Judul BUku : " << cur->judul << endl;
        cout << "Pengarang : " << cur->pengarang << endl;
        cout << "Tahun Terbit : " << cur->tahunterbit << endl;
        
    	cur = cur->next;
    }
}

