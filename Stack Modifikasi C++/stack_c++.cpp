#include <iostream>
#include <stdlib.h> // menggunakan system("cls")
#include <conio.h> // menggunakan getch()
#define MAX 10 // batas stack yang ingin dibuat
using namespace std;

int top=-1, Stack[MAX];
void push(){
    if(top == MAX-1){
        cout << ">> Stack sudah Penuh! <<" << endl;
    }else{
        top++;
        cout << ">> Masukan Data : ";
        cin >> Stack[top];
        cout << "Pada Index ke '" << top << "' Data [" << Stack[top] << "] Berhasil Ditambah" << endl;
    }
}
void pop(){
    if(top == -1){
        cout << ">> Stack Kosong! <<" << endl;
    }else{
        cout << "Data [" << Stack[top] << "] pada index ke '" << top << "' Diambil !" << endl;
        Stack[top--];
    }
}
int clearr(){
    return top = -1;
}
void Print(){
    if (top == -1) {
        cout << "          Stack : " << endl;
        cout << "===========================" << endl;
        cout << "          Kosong ! " << endl;
        cout << "===========================" << endl;
    }
    else {
        cout << "          Stack : " << endl;
        cout << "===========================" << endl;
        for (int i = top; i >= 0; i--){
            cout << "     ===>[ " << Stack[i] << " ]<===" << endl;
        }
        cout << "===========================" << endl;
    }
}
int main()
{
    int choose;
    do {
        Print();
        cout << "\n1. Push\n2. Pop\n3. Clear\n4. Exit\nPergerakan ( TOP ) : " << top << "\n\n>> Masukkan pilihan : "; cin >> choose;
        switch (choose){
            case 1:
                push();getch();
                break;
            case 2:
                pop();getch();
                break;
            case 3:
                clearr();
                cout << "\nClear Berhasil" << endl;
                getch();
                break;
            case 4:
                cout << "Program Selesai :)" << endl;
                getch();
                break;
                default:
                cout << "Pilihan tidak ada\nMasukan pilihan yang benar" << endl;
                getch();
                break;
        }
        system("cls");
    }while(choose !=4);
}
