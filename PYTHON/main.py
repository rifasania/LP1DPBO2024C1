from DPR import DPR

# array
llist = []

ali = DPR(1, "Ali", "Pengawasan", "PKS")
toni = DPR(2, "Toni", "Kaderisasi", "Golkar")
dani = DPR(3, "Dani", "Komunikasi", "Perindo")
riko = DPR(4, "Riko", "Pendidikan", "Nasdem")
yanto = DPR(5, "Yanto", "Kaderisasi", "PKS")

llist.append(ali)
llist.append(toni)
llist.append(dani)
llist.append(riko)
llist.append(yanto)

i = 0
print("List Data Anggota DPR : ")
for dpr in llist:
    print(dpr.get_id(), ".", dpr.get_nama(), "|", dpr.get_bidang(), "|", dpr.get_partai())
    i += 1

menu = 0

while menu != 4:
    print("Menu yang Tersedia")
    print("1. Tambah Data")
    print("2. Ubah Data")
    print("3. Hapus Data")
    print("4. Tampilkan Data dan Keluar Program")
    menu = int(input("Pilih Menu: "))

    if menu == 1:
        DPR.tambah_data(llist)
    elif menu == 2:
        DPR.ubah_data(llist)
    elif menu == 3:
        DPR.hapus_data(llist)
    elif menu == 4:
        DPR.tampilkan_data(llist)
    else:
        print("Pilihan tidak valid!\n")

#     if menu == 1:
#         print("Masukkan Data Baru! Id Tidak Boleh Sama.")
#         id = int(input("Id: "))
#         nama = str(input("Nama: "))
#         bidang = str(input("Bidang: "))
#         partai = str(input("Partai: "))

#         id_ada = any(DPR.get_id() == id for DPR in llist)  

#         if not id_ada:
#             temp = DPR(id, nama, bidang, partai)
#             llist.append(temp)
#             print("Data berhasil ditambahkan!\n")
#         else:
#             print("Warning!!")
#             print("ID sudah ada. Data gagal ditambahkan!\n")   

#     elif menu == 2:
#         print("Masukkan ID yang akan diubah: ")
#         ubah_id = int(input())
#         print("Masukkan Data Baru untuk Data dengan ID", ubah_id) 
#         nama = str(input("Nama: "))
#         bidang = str(input("Bidang: "))
#         partai = str(input("Partai: "))

#         found = False

#         for dpr in llist:
#             if dpr.get_id() == ubah_id:
#                 found = True
#                 print(dpr.get_id(), ".", dpr.get_nama(), "|", dpr.get_bidang(), "|", dpr.get_partai())
#                 # dpr.set_nama(nama)
#                 # dpr.set_bidang(bidang)
#                 # dpr.set_partai(partai)
#                 print("Data berhasil diubah!")
#                 break


#         if not found:
#             print("Warning!!!")
#             print("ID tidak ditemukan!\n")    
                   

i = 0
print("List DPR : ")
for dpr in llist:
    print(dpr.get_id(), ".", dpr.get_nama(), "|", dpr.get_bidang(), "|", dpr.get_partai())
    i += 1