import java.util.Scanner;
import java.util.ArrayList;

public class Main{
    public static void main(String[] args){
        DPR ali = new DPR(1, "Ali", "Pengawasan", "PKS");
        DPR toni = new DPR(2, "Toni", "Kaderisasi", "Golkar");
        DPR dani = new DPR(3, "Dani", "Komunikasi", "Perindo");
        DPR riko = new DPR(4, "Riko", "Pendidikan", "Nasdem");
        DPR yanto = new DPR(5, "Yanto", "Kaderisasi", "PKS");

        int i = 0;
        ArrayList<DPR> list = new ArrayList<>();

        list.add(ali);
        list.add(toni);
        list.add(dani);
        list.add(riko);
        list.add(yanto);

        // iterasi arraylist
        System.out.println("List Data Anggota DPR : ");
        for(i = 0; i < list.size(); i++){
            System.out.println(list.get(i).getId() + ". " + list.get(i).getNama() + " | " + list.get(i).getBidang() + " | " + list.get(i).getPartai());
        }

        System.out.println("Menu yang Tersedia");
        System.out.println("1. Tambah Data");
        System.out.println("2. Ubah Data");
        System.out.println("3. Hapus Data");
        System.out.println("4. Tampil Data dan Keluar Program");

        int menu = 0;
        int id;
        String nama;
        String bidang;
        String partai;
        while(menu != 4){
            // Tampilkan pilihan menu         
            Scanner sc = new Scanner(System.in);
            
            System.out.println("Masukkan Menu yang Anda Pilih!");
            menu = sc.nextInt();
            
            switch(menu){
                case 1:
                    System.out.println("Silakan Masukkan Data Baru! ID Tidak Boleh Sama.");
                    System.out.print("ID : ");
                    id = sc.nextInt();
                    System.out.print("Nama : ");
                    nama = sc.next();
                    System.out.print("Bidang : ");
                    bidang = sc.next();
                    System.out.print("Partai : ");
                    partai = sc.next();

                    int ketemu = 0;
                    for(DPR dpr : list){
                        if(dpr.getId() == id){
                            ketemu = 1;
                            break;
                        }
                    }

                    if(ketemu == 0){
                        list.add(new DPR(id, nama, bidang, partai));
                        System.out.println("Data berhasil ditambahkan!"); 
                    }else{
                        System.out.println("Warning!!!");
                        System.out.println("ID sudah ada. Data gagal ditambahkan!"); 
                    }
                    break;
                
                case 2:
                    System.out.print("Masukkan ID yang ingin diubah: ");
                    int ubah_id = sc.nextInt();  
                    
                    ketemu = 0;
                    for(DPR dpr : list){
                        if(dpr.getId() == ubah_id){
                            ketemu = 1;
                            System.out.println("Masukkan Data Baru untuk Data dengan ID " + ubah_id + "!");
                            System.out.print("Nama : ");
                            nama = sc.next();
                            System.out.print("Bidang : ");
                            bidang = sc.next();
                            System.out.print("Partai : ");
                            partai = sc.next();

                            dpr.setNama(nama);
                            dpr.setBidang(bidang);
                            dpr.setPartai(partai);
                            System.out.println("Data berhasil diubah!");
                            break;
                        }
                    }

                    if(ketemu == 0){
                        System.out.println("Warning!!!");
                        System.out.println("ID tidak ditemukan!");
                    }
                    break;

                case 3:
                    System.out.println("Masukkan ID yang ingin dihapus!");
                    int hapus_id = sc.nextInt();
                    
                    ketemu = 0;

                    for(i = 0; i < list.size(); i++) {
                        if(hapus_id == list.get(i).getId()){
                            ketemu = 1;
                            list.remove(i);
                            System.out.println("Data berhasil dihapus!");
                            break;
                        }
                    }

                    if(ketemu == 0){
                        System.out.println("Warning!!!");
                        System.out.println("ID tidak ditemukan!");
                    }
                    break;

                case 4:  
                    // iterasi arraylist
                    System.out.println("List Data Anggota DPR : ");
                    for(i = 0; i < list.size(); i++){
                        System.out.println(list.get(i).getId() + ". " + list.get(i).getNama() + " | " + list.get(i).getBidang() + " | " + list.get(i).getPartai());
                    }
                    System.out.println("Selesai!!!");
                    System.out.println("Anda akan keluar dari program.");
            }
            
        }        
    }
}