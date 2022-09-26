#include<iostream>
#include<conio.h>

using namespace std;
struct paket
{
    char jenis_brg[30];
    int berat;
    char kota[30];
};

struct paket kirim[100];

/*******************************************/

void tambahdata(int x)
{
    cout<<"Inputkan Jenis Barang    : ";
    cin>>kirim[x].jenis_brg;
    cout<<"Inputkan Berat           : ";
    cin>>kirim[x].berat;
    cout<<"Inputkan Kota Tujuan     : ";
    cin>>kirim[x].kota;
}

void tampildata(int x)
{
    cout<<"=========================="<<endl;
    cout<<"|| Daftar Kiriman Paket ||"<<endl;
    cout<<"=========================="<<endl;
    for(int a=1; a<x; a++)
    {
        cout<< "|| "<<a<<". ";
        cout<<kirim[a].jenis_brg<<" ";
        cout<<kirim[a].berat<<" ";
        cout<<kirim[a].kota<<endl;
    }
    cout<<">> Press Any Key To Continue... <<"<<endl<<endl;
    getch();
    /*harus Ijin --> #include<conio.h>*/
}

void hapusdata(int x)
{
    cout<<"======================================"<<endl;
    cout<<"Data Terakhir yang anda Hapus Adalah :"<<endl;
    cout<<kirim[x].jenis_brg<<" ";
    cout<<kirim[x].berat<<" Kg ";
    cout<<kirim[x].kota<<endl;
    cout<<"======================================"<<endl;
    cout<<">> Press Any Key To Continue... <<"<<endl<<endl;
    getch();
}

int main()
{
    int pilih,maks;
    int top=1;
    cout<<"Masukkan jumlah maksimal barang yg ingin di kirim : ";
    cin>>maks;
    do
    {
        cout<<"======================="<<endl;
        cout<<"||     MENU UTAMA    ||"<<endl;
        cout<<"======================="<<endl;
        cout<<"1. Tambah Data"<<endl;
        cout<<"2. Hapus Data Terakhir"<<endl;
        cout<<"3. Tampilkan Data"<<endl;
        cout<<"4. Hapus Semua Data"<<endl;
        cout<<"9. Keluar"<<endl;
        cout<<"======================="<<endl;
        cout<<"Pilihan Anda [1-9] : ";
        cin>>pilih;
        if(pilih==1)
        {
            if(top<=maks){
                tambahdata(top);
                top++;
            }else{
                cout<<"========================"<<endl;
                cout<<"|| Barang Sudah Penuh ||"<<endl;
                cout<<"========================"<<endl;
                cout<<endl;
            }
        }
        if(pilih==2)
        {
            hapusdata(top-1);
            top--;
        }
        if(pilih==3)
        {
            if(top>1){
                tampildata(top);
            }else{
                cout<<"======================"<<endl;
                cout<<"|| Barang kosong... ||"<<endl;
                cout<<"======================"<<endl;
                cout<<endl;
            }
        }
        if(pilih==4)
        {
            top=1;
            cout<<"============================================"<<endl;
            cout<<"|| Semua data barang berhasil di hapus... ||"<<endl;
            cout<<"============================================"<<endl;
            cout<<endl;
        }
    }
    while(pilih!=9);
    return 0;
}
