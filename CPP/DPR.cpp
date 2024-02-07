/* Saya Rifa Sania NIM 2206697 mengerjakan Latihan Praktikum 1 dalam mata kuliah Struktur Data
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin... */

// Import Library
#include <iostream>
#include <string>

// Using standard namespace
using namespace std;

// Class Declaration
class DPR{
    // Privates atributes
    private:
        int id;
        string nama;
        string bidang;
        string partai;

    // Public atributes
    public:
        // Constructor
        DPR(){
            this->id = 0;
            this->nama = "";
            this->bidang = "";
            this->partai = "";
        }    

        // Constructor with parameter 
        DPR(int id, string nama, string bidang, string partai){
            this->id = id;
            this->nama = nama;
            this->bidang = bidang;
            this->partai = partai;
        }

        // get id
        int get_id(){
            return this->id;
        }

        // set id
        void set_id(int id){
            this->id = id;
        }

        // get nama
        string get_nama(){
            return this->nama;
        }

        // set nama
        void set_nama(string nama){
            this->nama = nama;
        }

        // get bidang
        string get_bidang(){
            return this->bidang;
        }

        // set bidang
        void set_bidang(string bidang){
            this->bidang = bidang;
        }

        // get partai
        string get_partai(){
            return this->partai;
        }

        // set partai
        void set_partai(string partai){
            this->partai = partai;
        } 

        // Destructor
        ~DPR(){

        }
};