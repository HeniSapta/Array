/*
#include <iostream>

using namespace std;

int main(){
    //membuat array
    int nilai[5];

    //mengisi array
    nilai[0]=3;
    nilai[1]=5;
    nilai[2]=10;
    nilai[3]=200;
    nilai[4]=100;

    //mencetak isi array
    cout <<"\nNilai index 0 = "<<nilai[0];
    cout <<"\nNilai index 1 = "<<nilai[1];
    cout <<"\nNilai index 2 = "<<nilai[2];
    cout <<"\nNilai index 3 = "<<nilai[3];
    cout <<"\nNilai index 4 = "<<nilai[4];

    string mhs[5]={"Andi", "Budi", "Ani", "Doni", "Badu"};
    cout <<"\nNilai index 0 = "<<mhs[0];
    cout <<"\nNilai index 1 = "<<mhs[1];
    cout <<"\nNilai index 2 = "<<mhs[2];
    cout <<"\nNilai index 3 = "<<mhs[3];
    cout <<"\nNilai index 4 = "<<mhs[4];
    for(int i=1;i<=4;i++){
        cout <<"\nNilai index ke-"<<i<<"="<<mhs[i];
    }

    return 0;
}

#include <iostream>
using namespace std;

int main(int argc, char const*argv[]){
    int i,n,jumlah=0, terkecil, terbesar;
    cout <<"Input banyak nilai : ";
    cin>>n;
    int nilai[n];
    for(i=0;i<n;i++){
        cout << "Input nilai ke "<<i+1<<":";
        cin >>nilai[i];
        jumlah+=nilai[i];

        if(i==0){
            terkecil = nilai[0];
            terbesar = nilai[0];
        }if(nilai[i]<terkecil){
            terkecil = nilai[i];
        }if(nilai[i]>terbesar){
            terkecil = nilai[i];
        }
    }

    cout <<"\n\nData Nilai\t\n";
    for(i=0;i<n;i++){
        cout <<","<<nilai[i];
    }

    cout <<"\nJumlah Nilai\t = "<<jumlah<<endl;
    cout <<"\nTerbesar Nilai\t = "<<terbesar<<endl;
    cout <<"\nTerkecil Nilai\t = "<<terkecil<<endl;

    return 0;
}
*/


#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	string nama[10],status[10];
	int nilai[10];

	cout<<"Masukan Jumlah Data = ";
	cin>>n;
	cout<<endl;

	for (int i=0; i<n; i++) {
		cout<<endl;

		cout<<"Data ke-"<<i+1<<endl;
		cout<<"Masukan Nama = ";
		cin>>nama[i];
		cout<<"Masukan Nilai = ";
		cin>>nilai[i];

		if (nilai[i]<=50) {
		 	status[i]="Tidak Lulus";
		} else {
			status[i]="Lulus";
		}
	}
	cout<<endl;
	cout<<"DAFTAR NILAI MAHASISWA"<<endl;
	cout<<"-------------------------------------------"<<endl;
	cout<<"No    Nama           Nilai           Status         "<<endl;
	cout<<"-------------------------------------------"<<endl;

	for (int i=0; i<n;i++) {
	cout<<i+1<<"   "<<nama[i]<<"            "<<nilai[i]<<"          "<<status[i]<<endl;
	cout<<"-------------------------------------------"<<endl;
	}

    return 0;
}
