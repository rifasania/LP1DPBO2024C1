#include <bits/stdc++.h>
#include "DPR.cpp"

using namespace std;

int main(){
    int i, n = 0;
    list<DPR>llist;
    
    int id;
    string nama;
    string bidang; 
    string partai;

    DPR ali(1, "Ali", "Pengawasan", "PKS");

    cout << "Menu yang Tersedia" << "\n";
    cout << "1. Tambah Data" << "\n";
    cout << "2. Ubah Data" << "\n";
    cout << "3. Hapus Data" << "\n";

    cout << "Pilih Menu :";
    int menu;
    cin >> menu;
    
    switch(menu){
        case 1:               
            cin >> n;
            for(i = 0; i < n; i++){
                DPR temp;

                cin >> nama >> bidang;

                temp.set_nama(nama);
                temp.set_bidang(bidang);

                llist.push_back(temp);
            }
        break;

        case 2:
            cin >> id;
            for(i = 0; i < n; i++){

            }
    }    

    cout << "Output : " << "\n";
    i = 0;
    for(list<DPR>::iterator it = llist.begin(); it != llist.end(); ++it){
        cout << (i + 1) << ". " << it->get_nama() << " | " << it->get_bidang() << " | " << it->get_partai() << "\n";
        i++;
    }

    return 0;
}