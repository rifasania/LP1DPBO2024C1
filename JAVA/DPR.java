public class DPR{
    private int id;
    private String nama;
    private String bidang;
    private String partai;

    public DPR(){
        this.id = 0;
        this.nama = "";
        this.bidang = "";
        this.partai = "";
    }

    public DPR(int id, String nama, String bidang, String partai){
        this.id = id;
        this.nama = nama;
        this.bidang = bidang;
        this.partai = partai;
    }

    public int getId(){
        return this.id;
    }

    public void setId(int id){
        this.id = id;
    }

    public String getNama(){
        return this.nama;
    }

    public void setNama(String nama){
        this.nama = nama;
    }

    public String getBidang(){
        return this.bidang;
    }

    public void setBidang(String bidang){
        this.bidang = bidang;
    }

    public String getPartai(){
        return this.partai;
    }

    public void setPartai(String partai){
        this.partai = partai;
    }
}
