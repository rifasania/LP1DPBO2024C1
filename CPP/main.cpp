/* Saya Rifa Sania NIM 2206697 mengerjakan Latihan Praktikum 1 dalam mata kuliah Struktur Data
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin... */

// Import Library
#include <bits/stdc++.h>
#include "DPR.cpp"

// Using standard namespace
using namespace std;

int main(){
    list<DPR>llist; // Buat list DPR
    int i, n = 0;   // Atribut penghitung  
    int id;         // untuk menampung id masukkan user    
    string nama;    // untuk menampung nama masukkan user
    string bidang;  // untuk menampung bidang masukkan user
    string partai;  // untuk menampung partai masukkan user

    // Instansi objek dengan konstruktor parameter
    DPR ali(1, "Ali", "Pengawasan", "PKS");
    DPR toni(2, "Toni", "Kaderisasi", "Golkar");
    DPR dani(3, "Dani", "Komunikasi", "Perindo");
    DPR riko(4, "Riko", "Pendidikan", "Nasdem");
    DPR yanto(5, "Yanto", "Kaderisasi", "PKS");

    // Masukkan objek ke list
    llist.push_back(ali);
    llist.push_back(toni);
    llist.push_back(dani);
    llist.push_back(riko);
    llist.push_back(yanto);

    // Tampilkan list
    cout << "List Data Anggota DPR : " << "\n";
    for(list<DPR>::iterator it = llist.begin(); it != llist.end(); ++it){
        cout << it->get_id() << ". " << it->get_nama() << " | " << it->get_bidang() << " | " << it->get_partai() << "\n";
    }

    // Tampilkan pilihan menu
    cout << "\n" << "Menu yang Tersedia" << "\n";
    cout << "1. Tambah Data" << "\n";
    cout << "2. Ubah Data" << "\n";
    cout << "3. Hapus Data" << "\n";
    cout << "4. Tampil Data dan Keluar Program" << "\n";

    int menu = 0; // inisialisasi

    // Jalankan program selama user belum pilih menu selesai
    while(menu != 4){
        cout << "Masukkan Menu yang Anda Pilih!" << "\n";
        cin >> menu; // scan masukkan user

        bool found = false;

        switch(menu){            
            case 1: // pilihan satu (tambah data)      
                cout << "\n" << "Silakan Masukkan Data Baru!" << "\n";
                cout << "ID tidak boleh sama." << "\n";
                cout << "[ID, Nama, Bidang, Partai]" << "\n";
                cin >> id >> nama>> bidang >> partai; // meminta masukkan user
    
                // cek id, jika id sudah ada sebelumnya, maka data tidak bisa ditambahkan
                for(list<DPR>::iterator it = llist.begin(); it != llist.end(); ++it){
                    if(it->get_id() == id){
                        found = true;
                    }
                }
    
                if(!found){
                    // tampung masukkan user dan masukkan data tersebut ke list
                    DPR temp(id, nama, bidang, partai);
                    llist.push_back(temp); 
                    cout << "Data berhasil ditambahkan!" << "\n\n";        
                }else{
                    cout << "Warning!!!" << "\n";
                    cout << "ID sudah ada. Data gagal ditambahkan!" << "\n\n";
                }    
            break;
    
            case 2: // pilihan kedua (ubah/update data)
                cout << "Masukkan ID yang ingin diubah!" << "\n";
                int ubah_id;
                cin >> ubah_id; // scan id yang akan diubah
    
                found = false;
                // cari id
                for(list<DPR>::iterator it = llist.begin(); it != llist.end(); ++it){
                    if(it->get_id() == ubah_id){
                        // jika id ketemu, masukkan data baru untuk diupdate
                        cout << "Masukkan data baru untuk ID " << ubah_id << "!\n";
                        cout << "[Nama, Bidang, Partai]" << "\n";
                        cin >> nama >> bidang >> partai;
    
                        // set data dengan id yang dipilih tadi
                        it->set_nama(nama);
                        it->set_bidang(bidang);
                        it->set_partai(partai);
    
                        cout << "Data berhasil diubah!" << "\n\n";
                        found = true;
                    }
                }

                // jika data tidak ditemukan
                if(!found){
                    cout << "Warning!!!" << "\n";
                    cout << "ID tidak ditemukan!\n\n";
                }
            break;    
    
            case 3: // pilihan tiga (hapus data)
                cout << "Masukkan ID yang ingin dihapus!" << "\n";
                int hapus_id;
                cin >> hapus_id; // scan id yang akan dihapus
     
                found = false;
                for(list<DPR>::iterator it = llist.begin(); it != llist.end(); ++it){
                    if(it->get_id() == hapus_id){                        
                        it = llist.erase(it); // hapus dengan id yang dipilih
                        cout << "Data berhasil dihapus!" << "\n\n";
                        found = true;
                    }
                }

                // jika id tidak ditemukan
                if(!found){
                    cout << "Warning!!!" << "\n";
                    cout << "ID tidak ditemukan!\n\n";
                }
            break;  

            case 4: // pilihan 4 (tampilkan data dan keluar dari program / program selesai!)
                cout << "List Data Anggota DPR : " << "\n";
                // tampilkan list dpr dengan looping
                for(list<DPR>::iterator it = llist.begin(); it != llist.end(); ++it){
                    cout << it->get_id() << ". " << it->get_nama() << " | " << it->get_bidang() << " | " << it->get_partai() << "\n";
                }

                cout << "Selesai!!!" << "\n";
                cout << "Anda akan keluar dari program." << "\n\n";
            break;      
        } 
    }       

    return 0;
}