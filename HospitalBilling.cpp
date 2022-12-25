#include <iostream>
#include <string>
using namespace std;

class dateType
{
private:
    int Hari;
    int Bulan;
    int Tahun;

public:
    // Constructor penanggalan
    dateType(int d, int m, int y) : Hari(d), Bulan(m), Tahun(y) {}

    // Member functions get hari, bulan, dan tahunnya
    int getHari() { return Hari; }
    int getBulan() { return Bulan; }
    int getTahun() { return Tahun; }

    // Member function untuk penanggalan
    void setHari(int d) { Hari = d; }
    void setBulan(int m) { Bulan = m; }
    void setTahun(int y) { Tahun = y; }
    friend istream &operator>>(istream &in, dateType &tgl)
    {
        in >> tgl.Hari >> tgl.Bulan >> tgl.Tahun;
        return in;
    }
};

class personType
{
public:
    string NamaDepan;
    string NamaBelakang;
    string Alamat;

    // Constructor nama lengkap dan alamat
    personType(string fName, string lName, string alamat) : NamaDepan(fName), NamaBelakang(lName), Alamat(alamat) {}

    // Member functions get nama lengkap beserta alamat
    string getNamaDepan() { return NamaDepan; }
    string getNamaBelakang() { return NamaBelakang; }
    string getAlamat() { return Alamat; }

    // Member functions untuk set nama lengkap
    void setNamaDepan(string fName) { NamaDepan = fName; }
    void setNamaBelakang(string lName) { NamaBelakang = lName; }
};

// Class info dokter
class doctorType : public personType
{
private:
    string Bidang;

public:
    // Constructor nama lengkap dan bidang
    doctorType(string fName, string lName, string alamat, string bidang)
        : personType(fName, lName, alamat), Bidang(bidang) {}

    // Accessor get bidang
    string getBidang() const { return Bidang; }

    // Mutator set bidang
    void setBidang(string bidang) { Bidang = bidang; }
};

// Class info biaya
class billType
{
private:
    int IDPasien;
    double TebusanObat;
    double BiayaDokter;
    double HargaKamar;

public:
    // Constructor id dan biaya
    billType(int id, double obat, double dokter, double kamar)
        : IDPasien(id), TebusanObat(obat), BiayaDokter(dokter), HargaKamar(kamar) {}

    // Accessor get biaya
    int getIDPasien() const { return IDPasien; }
    double getTebusanObat() const { return TebusanObat; }
    double getBiayaDokter() const { return BiayaDokter; }
    double getHargaKamar() const { return HargaKamar; }

    // Mutator set biaya
    void setIDPasien(int id) { IDPasien = id; }
    void setTebusanObat(double obat) { TebusanObat = obat; }
    void setBiayaDokter(double dokter) { BiayaDokter = dokter; }
    void setHargaKamar(double kamar) { HargaKamar = kamar; }

    // Perhitungan total biaya
    double totalCharges() const
    {
        return TebusanObat + BiayaDokter + HargaKamar;
    }
};

// Class info pasien
class patientType : public personType
{
private:
    int IDPasien;
    int Umur;
    dateType TanggalLahir;
    doctorType Dokternya;
    dateType TanggalMasuk;
    dateType TanggalKeluar;

public:
    // Constructor nama lengkap, id, umur, tanggal lahir, dokter, tanggal masuk, dan tanggal keluar
    patientType(string fName, string lName, string alamat, int id, int umur, dateType tglLahir, doctorType dokter, dateType tglMasuk, dateType tglKeluar)
        : personType(fName, lName, alamat), IDPasien(id), Umur(umur), TanggalLahir(tglLahir), Dokternya(dokter), TanggalMasuk(tglMasuk), TanggalKeluar(tglKeluar) {}
    patientType();

    void setIDPasien(int id);
    void setUmur(int umur);
    void setTanggalLahir(dateType tglLahir);
    void setDokternya(doctorType dokter);
    void setTanggalMasuk(dateType tglMasuk);
    void setTanggalKeluar(dateType tglKeluar);

    int getIDPasien() const;
    int getUmur() const;
    dateType getTanggalLahir() const;
    doctorType getDokternya() const;
    dateType getTanggalMasuk() const;
    dateType getTanggalKeluar() const;

    void input();
    void print() const;
};

int main()
{
    patientType pasien1(
        "Rizal", "Rahmat", "Jl. Jalan", 1, 20, dateType(1, 1, 2000),
        doctorType("Dr.", "Rizal", "Jl. Jalan", "Dokter Umum"),
        dateType(1, 1, 2020), dateType(1, 1, 2020));
    patientType pasien2(
        "Rahmat", "Rahayu", "Jl. in aja", 2, 20, dateType(1, 1, 2000),
        doctorType("Dr.", "Rahmat", "Jl. in aja", "Dokter Gigi"),
        dateType(1, 1, 2020), dateType(1, 1, 2020));
    patientType pasien3(
        "Rahayu", "Rahmat", "Jl. Keselamatan", 3, 20, dateType(1, 1, 2000),
        doctorType("Dr.", "Rahayu", "Jl. Keselamatan", "Dokter Mata"),
        dateType(1, 1, 2020), dateType(1, 1, 2020));
    cout << "Nama pasien = " << pasien1.getNamaDepan() << " " << pasien1.getNamaBelakang() << endl;
    cout << "Nama pasien = " << pasien2.getNamaDepan() << " " << pasien2.getNamaBelakang() << endl;
    cout << "Nama pasien = " << pasien3.getNamaDepan() << " " << pasien3.getNamaBelakang() << endl;

    doctorType
        dokter1("Dr.", "Rizal", "Jl. Jalan", "Dokter Umum"),
        dokter2("Dr.", "Rahmat", "Jl. in aja", "Dokter Gigi"),
        dokter3("Dr.", "Rahayu", "Jl. Keselamatan", "Dokter Mata");
    cout << "Nama dokter = " << dokter1.getNamaDepan() << " " << dokter1.getNamaBelakang()
         << ", bidang = " << dokter1.getBidang() << endl;
    cout << "Nama dokter = " << dokter2.getNamaDepan() << " " << dokter2.getNamaBelakang()
         << ", bidang = " << dokter2.getBidang() << endl;
    cout << "Nama dokter = " << dokter3.getNamaDepan() << " " << dokter3.getNamaBelakang()
         << ", bidang = " << dokter3.getBidang() << endl;

    billType bill(10000, 10000, 5000, 25000);
    cout << "ID Pasien:" << bill.getIDPasien()
         << " biaya= Rp" << bill.getTebusanObat() << " untuk tebusan obat,"
         << " Rp" << bill.getBiayaDokter() << " untuk biaya konsultasi,"
         << " Rp" << bill.getHargaKamar() << " untuk kamar." << endl;

    bill.setTebusanObat(10000);
    bill.setBiayaDokter(12500);
    bill.setHargaKamar(30000);
    cout << "ID Pasien: " << bill.getIDPasien()
         << " biaya = Rp" << bill.getTebusanObat() << " untuk tebusan obat,"
         << " Rp" << bill.getBiayaDokter() << " untuk biaya konsultasi,"
         << " Rp" << bill.getHargaKamar() << " untuk kamar." << endl;
    cout << "Total charges: Rp" << bill.totalCharges() << endl;

    return 0;
}
