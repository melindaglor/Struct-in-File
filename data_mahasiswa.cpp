#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

struct nilai {
	int tugas, uts, uas;
};

struct mahasiswa {
	int nim;
	string nama_depan, nama_belakang;
	nilai nilai;
};

int main (){
	mahasiswa mahasiswa;
	float na;
	char huruf;
	
	ifstream infile;
	infile.open("NilaiSiswa.txt");
	ofstream output("NilaiSiswa-hasil.txt");
	
	cout << "Nilai Mata Kuliah Algoritma" << endl;
	cout << "----------------------------------------------------------------------------------------------------------- " << endl;
	cout << "No.  |             NIM |                                Nama |       Tugas |  UTS |  UAS |  Bobot | Huruf | " << endl;
	cout << "----------------------------------------------------------------------------------------------------------- " << endl;

	output << "Nilai Mata Kuliah Algoritma" << endl;
	output << "----------------------------------------------------------------------------------------------------------- " << endl;
	output << "No.  |             NIM |                                Nama |       Tugas |  UTS |  UAS |  Bobot | Huruf | " << endl;
	output << "----------------------------------------------------------------------------------------------------------- " << endl;
	
	for (int i=0; i<33; i++){
		infile >> mahasiswa.nim >> mahasiswa.nama_depan >> mahasiswa.nama_belakang >> mahasiswa.nilai.tugas >> mahasiswa.nilai.uts >> mahasiswa.nilai.uas;
		na = 0.3*mahasiswa.nilai.tugas + 0.3*mahasiswa.nilai.uts + 0.4*mahasiswa.nilai.uas;
		
		if (na >= 80){
			huruf = 'A';
		}
		else if ((na >= 70) && (na < 80)){
			huruf = 'B';
		}
		else if ((na >= 56) && (na < 70)){
			huruf = 'C';
		}
		else if ((na >= 45) && (na < 56)){
			huruf = 'D';
		}
		else {
			huruf = 'E';
		}
		
		cout << right << setw (4) << i+1 << " |" << right << setw (16) << mahasiswa.nim << " |"
		<< right << setw (36) << mahasiswa.nama_depan + ' ' + mahasiswa.nama_belakang << " |"
		<< right << setw (12) << mahasiswa.nilai.tugas << " |" << setw (5) << mahasiswa.nilai.uts << " |"
		<< right << setw (5) << mahasiswa.nilai.uas << " |" << setw (7) << na << " | "
		<< setw (4) << huruf << "  |" << endl;
		
		
		output << right << setw (4) << i+1 << " |" << right << setw (16) << mahasiswa.nim << " |"
		<< right << setw (36) << mahasiswa.nama_depan + ' ' + mahasiswa.nama_belakang << " |"
		<< right << setw (12) << mahasiswa.nilai.tugas << " |" << setw (5) << mahasiswa.nilai.uts << " |"
		<< right << setw (5) << mahasiswa.nilai.uas << " |" << setw (7) << na << " | "
		<< setw (4) << huruf << "  |" << endl;
	}
	cout << "----------------------------------------------------------------------------------------------------------- " << endl;
	output << "----------------------------------------------------------------------------------------------------------- " << endl;
	infile.close();
	output.close();
	
	return 0;
}


