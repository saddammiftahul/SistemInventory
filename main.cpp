#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> item {"Pedang","Panci","Pistol","Pisau"};
    vector<string> tas;
    vector<string>::iterator penunjuk;
//    item.push_back("item1");
//    item.push_back("item2");
//    for (penunjuk = item.begin(); penunjuk != item.end() ; ++penunjuk){
//        cout << *penunjuk << endl;
//    }
//    cout << endl;
//    item.erase(item.begin());
//
//    cout << item.size() << endl;
//    cout << endl;

    char jwb = 'y';
    int menu;
    int hapus;
    int maks;
    int i=1;

    cout << "Kapasitas Inventory = 4" << endl;
    ulang:
    cout << "Masukkan Max Inventory : "; cin >> maks;
    if(maks > 4){
        cout << "Melebihi kapasitas !!\n" << endl;
        goto ulang;
    }
    while(jwb == 'y'){

        cout << "1. Tampilkan Inventory" << endl;
        cout << "2. Tambah Inventory" << endl;
        cout << "3. Hapus Inventory" << endl;
        cout << "Masukkan menu : "; cin >> menu;
        cout << endl;

        switch(menu){
            case 1 :
                if(tas.size() == 0){
                    cout << "Inventory Kosong !!\n" << endl;
                }else{
                    for (penunjuk = tas.begin(); penunjuk != tas.end() ; ++penunjuk){
                        cout << *penunjuk << endl;
                    }
                }

                cout << endl;
            break;
            case 2 :
                if(tas.size() < maks){
                    tas.assign(item.begin(),item.begin()+i++);
                }else{
                    cout << "Inventory Penuh !!\n" << endl;
                }
            break;
            case 3 :
                if(tas.size() == 0){
                    cout << "Inventory Kosong !!\n" <<endl;
                }else{
                    cout << "Item yang ingin dihapus ? "; cin >> hapus;
                    tas.erase(tas.begin()+hapus-1);
                }
            break;
        }
        cout << "Mau input lagi? (y/n) "; cin >> jwb;
        cout << endl;
    }
    return 0;
}
