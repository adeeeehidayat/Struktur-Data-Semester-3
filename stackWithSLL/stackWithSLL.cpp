#include <iostream>
#include<string.h>
using namespace std;

struct stack
{
    char nama[30];
    int nilai;
    stack *next;
};

stack *head, *tail;

void push()//tambah data
{
    stack *baru;
    baru = new stack;
    cout <<"Masukkan Nama : "; cin>>baru->nama;
    cout <<"Masukkan Nilai : ";cin>>baru->nilai;
    baru->next=NULL;

    //stack peratama sebagai head
    //dan stack terakhir sebagai tail
    if(head==NULL)
        head=tail=baru;
    else{
        tail->next=baru;
        tail=tail->next;
    }
}

void pop()//Hapus tail
{
    stack *hapus;
    hapus = tail;

    if(head==tail){
        delete hapus;
        head=tail=NULL;
    }else{
        stack *bantu;
        bantu = head;
        do{
            if(bantu->next->nama==tail->nama){
                tail=bantu;
                tail->next=NULL;
                delete hapus;
            }
            bantu=bantu->next;
        }while(bantu!=NULL);
    }
}

void tampil()
{
    stack *bantu;
    bantu=head;
    cout << endl;
    cout << "========================"<<endl;
    cout << "|   Stack dengan SLL   |"<<endl;
    if(bantu==NULL)
        cout<<"| Data Masih Kosong... |"<<endl;
        cout<<"========================"<<endl;
    while (bantu!=NULL)
    {
        cout<<"| "<<bantu->nama<<" "<<bantu->nilai<<endl;
        bantu=bantu->next;
        cout << "========================"<<endl;
    }
    cout << endl;
}

int main()
{
    int pilih;
    do
    {
        tampil();
        cout<<"1. PUSH"<<endl;
        cout<<"2. POP"<<endl;
        cout<<"3. Exit"<<endl;
        cout<<"Pilihan Anda [1-3] : ";
        cin>>pilih;
        if(pilih==1)
            /*Menjalankan : Tambah Node di-BELAKANG */
            push();
        if(pilih==2)
            /*Menjalankan : Hapus Node di-BELAKANG*/
            pop();
    }
    while(pilih!=3);
    return 0;
}
