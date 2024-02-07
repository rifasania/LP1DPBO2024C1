// Import Library
#include <iostream>
#include <string>

using namespace std;

class DPR{
    private:
        int id;
        string nama;
        string bidang;
        string partai;

    public:
        DPR(){
            this->id = 0;
            this->nama = "";
            this->bidang = "";
            this->partai = "";
        }    

        DPR(int id, string nama, string bidang, string partai){
            this->id = id;
            this->nama = nama;
            this->bidang = bidang;
            this->partai = partai;
        }

        int get_id(){
            return this->id;
        }

        void set_id(int id){
            this->id = id;
        }

        string get_nama(){
            return this->nama;
        }

        void set_nama(string nama){
            this->nama = nama;
        }

        string get_bidang(){
            return this->bidang;
        }

        void set_bidang(string bidang){
            this->bidang = bidang;
        }

        string get_partai(){
            return this->partai;
        }

        void set_partai(string partai){
            this->partai = partai;
        } 

        // void tambah(int i, int n){
        //     string nama;
        //     string bidang;       

        //     cin >> n;
        //     for(i = 0; i < n; i++){
        //         DPR temp;

        //         cin >> nama >> bidang;

        //         temp.set_nama(nama);
        //         temp.set_bidang(bidang);

        //         llist.push_back(temp);
        //     }
        // }



        // void eat(){
        //     cout << this->nama << " is eating!" << '\n';
        // }

        // void sleep(){
        //     cout << this->nama << " is sleeping!" << '\n';
        // }

        ~DPR(){

        }
};