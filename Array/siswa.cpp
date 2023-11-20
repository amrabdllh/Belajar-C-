#include <iostream>

using namespace std;

int main(){
	int A[3][4] = {
	
	{51,50,45,100},
	{80,115,60,120},
	{110,120,75,200}
	
	};
	
	int lulus,jurusan; 
	char apakah;
	do {
		
		cout << "\n\tJUMLAH SISWA YANG LULUS TAHUN 2011 - 2013 \n " << endl;
		cout << "#######################################################" << endl;
		cout << "# TAHUN JURUSAN |   TM   |   TKJ   |   TMJ   |   TI   #" << endl;
		cout << "#######################################################" << endl;
		cout << "#      2011     #   " << A[0][0] << "   #    " << A[0][1] << "   #    " << A[0][2] << "   #    " << A[0][3] << " #" << endl;
		cout << "#######################################################" << endl;	
		cout << "#      2012     #   " << A[1][0] << "   #    " << A[1][1] << "  #    " << A[1][2] << "   #    " << A[1][3] << " #" << endl;
		cout << "#######################################################" << endl;
		cout << "#      2013     #   " << A[2][0] << "  #   " << A[2][1] << "   #    " << A[2][2] << "   #   " << A[2][3] << "  #" << endl;
		cout << "#######################################################" << endl;
		cout << "\n";
		cout << "MAU MENCARI LULUSAN TAHUN BERAPA ? ";
		cin >> lulus;
		lulus = lulus - 2011;
		switch (lulus){
			case 0:
				cout << "KODE JURUSAN : \n1. TM\n2. TKJ\n3. TMJ\n4. TI" << endl;
				cout << "JURUSAN YANG MAU DI CARI ? ";
				cin >> jurusan;
				if (jurusan == 1) {
					cout << "JUMLAH SISWA YANG LULUS ADALAH = " << A[0][0] << endl;
				} else if (jurusan == 2){
					cout << "JUMLAH SISWA YANG LULUS ADALAH = " << A[0][1] << endl;
				} else if (jurusan == 3) {
					cout << "JUMLAH SISWA YANG LULUS ADALAH = " << A[0][2] << endl;
				} else if (jurusan == 4) {
					cout << "JUMLAH SISWA YANG LULUS ADALAH = " << A[0][3] << endl;
				} else {
					cout << "INPUTAN SALAH !!!";
				}
			break;
			case 1:
				cout << "KODE JURUSAN : \n1. TM\n2. TKJ\n3. TMJ\n4. TI" << endl;
				cout << "JURUSAN YANG MAU DI CARI ? ";
				cin >> jurusan;
				if (jurusan == 1) {
					cout << "JUMLAH SISWA YANG LULUS ADALAH = " << A[1][0] << endl;
				} else if (jurusan == 2){
					cout << "JUMLAH SISWA YANG LULUS ADALAH = " << A[1][1] << endl;
				} else if (jurusan == 3) {
					cout << "JUMLAH SISWA YANG LULUS ADALAH = " << A[1][2] << endl;
				} else if (jurusan == 4) {
					cout << "JUMLAH SISWA YANG LULUS ADALAH = " << A[1][3] << endl;
				} else {
					cout << "INPUTAN SALAH !!!";
				}
			break;
			case 2:
				cout << "KODE JURUSAN : \n1. TM\n2. TKJ\n3. TMJ\n4. TI" << endl;
				cout << "JURUSAN YANG MAU DI CARI ? ";
				cin >> jurusan;
				if (jurusan == 1) {
					cout << "JUMLAH SISWA YANG LULUS ADALAH = " << A[2][0] << endl;
				} else if (jurusan == 2){
					cout << "JUMLAH SISWA YANG LULUS ADALAH = " << A[2][1] << endl;
				} else if (jurusan == 3) {
					cout << "JUMLAH SISWA YANG LULUS ADALAH = " << A[2][2] << endl;
				} else if (jurusan == 4) {
					cout << "JUMLAH SISWA YANG LULUS ADALAH = " << A[2][3] << endl;
				} else {
					cout << "INPUTAN SALAH !!!";
				}
			break;
			default:
				cout << "INPUTAN SALAH !!!" << endl;
			break;
		}
		
		cout << "MAU MENCARI LAGI ? ";
		cin >> apakah;
	} while (apakah == 'y' || apakah == 'Y');
	
		cout << "\nPROGRAM SELESAI DI JALANKAN\nTERIMA KASIH BANYAK !!!";
	
	
	
	
}
