<!-- Saya Rifa Sania NIM 2206697 mengerjakan Latihan Praktikum 1 dalam mata kuliah Struktur Data
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin... -->

<?php

class DPR{
    private $id = 0;
    private $nama = '';
    private $bidang = '';
    private $partai = '';

    public function __construct($id = 0, $nama ='', $bidang = '', $partai = '') {
        $this->id = $id;
        $this->nama = $nama;
        $this->bidang  = $bidang;   
        $this->partai = $partai;    
    }

    public function setId($id){
        $this->id = $id;
    }

    public function getId(){
        return $this->id;
    }

    public function setNama($nama){
        $this->nama = $nama;
    }

    public function getNama(){
        return $this->nama;
    }

    public function setBidang($bidang){
        $this->bidang = $bidang;
    }

    public function getBidang(){
        return $this->bidang;
    }

    public function setPartai($partai){
        $this->partai = $partai;
    }

    public function getPartai(){
        return $this->partai;
    }

    // Fungsi untuk menambah data
    public function tambahData($id, $nama, $bidang, $partai) {
        global $data;
        $data[$id] = ['nama' => $nama, 'bidang' => $bidang, 'partai' => $partai];
    }

    // Fungsi untuk mengubah data
    public function ubahData($id, $nama, $bidang, $partai) {
        global $data;
        if (isset($data[$id])) {
            $data[$id] = ['nama' => $nama, 'bidang' => $bidang, 'partai' => $partai];
            echo "Data berhasil diubah.";
        } else {
            echo "ID tidak ditemukan.";
        }
    }

    // Fungsi untuk menghapus data
    public function hapusData($id) {
        global $data;
        if (isset($data[$id])) {
            unset($data[$id]);
            echo "Data berhasil dihapus.";
        } else {
            echo "ID tidak ditemukan.";
        }
    }

    public function tampilkanAnggotaDPR() {
        foreach ($this->$data as $anggota) {
            echo "ID: " . $anggota->getId() . ", Nama: " . $anggota->getNama() . ", Bidang: " . $anggota->getBidang() . ", Partai: " . $anggota->getPartai() . "<br>";
        }
    }
}    

?>