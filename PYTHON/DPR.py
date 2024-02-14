# Saya Rifa Sania NIM 2206697 mengerjakan Latihan Praktikum 1 dalam mata kuliah Struktur Data
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin...

class DPR:

    __id = 0
    __nama = ''
    __bidang = ""
    __partai = ""

    def __init__(self, id = 0, nama = "", bidang = "", partai = ""):
        self.__id = id
        self.__nama = nama
        self.__bidang = bidang
        self.__partai = partai

    def get_id(self):
        return self.__id

    def set_id(self):
        return self.__id

    def get_nama(self):
        return self.__nama

    def set_nama(self):
        return self.__nama

    def get_bidang(self):
        return self.__bidang

    def set_bidang(self):
        return self.__bidang  

    def get_partai(self):
        return self.__partai

    def set_partai(self):
        return self.__partai  
    
    def tambah_data(llist):
        print("\nSilakan Masukkan Data Baru!")
        print("ID tidak boleh sama.")
        print("[ID, Nama, Bidang, Partai]")
        id, nama, bidang, partai = input().split()

        found = False
        for dpr in llist:
            if dpr.get_id() == int(id):
                found = True
                break

        if not found:
            temp = DPR(int(id), nama, bidang, partai)
            llist.append(temp)
            print("Data berhasil ditambahkan!\n")
        else:
            print("Warning!!!")
            print("ID sudah ada. Data gagal ditambahkan!\n")


    def ubah_data(llist):
        print("Masukkan ID yang ingin diubah!")
        ubah_id = int(input())
        print("Masukkan Data Baru untuk Data dengan ID", ubah_id)
        nama, bidang, partai = input("Nama, Bidang, Partai: ").split()
    
        found = False
        for dpr in llist:
            if dpr.get_id() == ubah_id:
                dpr.set_nama(nama)
                dpr.set_bidang(bidang)
                dpr.set_partai(partai)
                print("Data berhasil diubah!\n")
                found = True
                break
            
        if not found:
            print("Warning!!!")
            print("ID tidak ditemukan!\n")
    
    
    def hapus_data(llist):
        print("Masukkan ID yang ingin dihapus!")
        hapus_id = int(input())
    
        found = False
        for dpr in llist:
            if dpr.get_id() == hapus_id:
                llist.remove(dpr)
                print("Data berhasil dihapus!\n")
                found = True
                break
            
        if not found:
            print("Warning!!!")
            print("ID tidak ditemukan!\n")
    
    
    def tampilkan_data(llist):
        print("List Data Anggota DPR:")
        i = 0;
        for dpr in llist:
            print(dpr.get_id(), ".", dpr.get_nama(), "|", dpr.get_bidang(), "|", dpr.get_partai())
            i += 1
        print("Selesai. Keluar dari program.\n")