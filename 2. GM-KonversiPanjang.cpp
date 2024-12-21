#include <iostream>
using namespace std;

// Nama : Anak Agung Mas Mayuri
// Kelas : XI IPA 8


int main (){
	float a;
	char mode;
	
	cout << "== Selamat Datang di Konversi Satuan Panjang ==" << endl;
	cout << endl;
	cout << "Silahkan piih mode konversi" << endl;
	cout << "A. Konversi Kilo meter (km)" << endl;
	cout << "B. Konversi Hekto meter (hm)" << endl;
	cout << "C. Konversi Deka meter (dam)" << endl;
	cout << "D. Konversi Meter (m)" << endl;
	cout << "E. Konversi Desi meter (dm)" << endl;
	cout << "F. Konversi Centi meter (cm)" << endl;
	cout << "G. Konversi Mili meter (mm)" << endl;
	cout << endl;
	cout << "Masukkan pilihan anda dalam Huruf Kapital : " << endl;
	cin >> mode;
	cout << "--------------------------------------------" << endl;
	
	switch (mode){
		case 'A':
			cout << "Konversi Kilo meter" << endl;
			cout << endl;
			cout << "Silahkan piih mode konversi km" << endl;
            
			cout << "a. km ke hm" << endl;
			cout << "b. km ke dam" << endl;
			cout << "c. km ke m" << endl;
			cout << "d. km ke dm" << endl;
			cout << "e. km ke cm" << endl;
			cout << "f. km ke mm" << endl;
			cout << endl;
			cout << "Masukkan pilihan anda : " << endl;
			cin >> mode;
			cout << "--------------------------------------------" << endl;
			cout << endl;
			
			
			switch (mode){
       			 case 'a':
            		cout << "Kilo meter ke Hekto meter" << endl;
            		cout << endl;
		            cout << "Masukkan nilai km" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " km adalah " << a*10 << " hm" <<endl;
		            break;
            
				case 'b':
		            cout << "Kilo meter ke Deka Meter" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai km" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " km adalah " << a*100 << " dm" <<endl;
		            break;
		            
		        case 'c':
		            cout << "Kilo meter ke Meter" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai km" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " km adalah " << a*1000 << " m" <<endl;
		            break;
		            
		        case 'd':
		            cout << "Kilo meter ke Desi meter" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai km" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " km adalah " << a*10000 << " dm" <<endl;
		            break;
		            
		        case 'e':
		            cout << "Kilo meter ke Centi meter" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai km" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " km adalah " << a*100000 << " cm" <<endl;
		            break;
		            
		        case 'f':
		            cout << "Kilo meter ke Mili meter" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai km" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " km adalah " << a*1000000 << " mm" <<endl;
		            break;
		            
		        default:
            		cout << "Pilihan tidak tersedia" << endl;
			}
			break;
			
		
		case 'B':
			cout << "Konversi Hekto meter" << endl;
			cout << endl;
			cout << "Silahkan piih mode konversi hm" << endl;
            
			cout << "a. hm ke km" << endl;
			cout << "b. hm ke dam" << endl;
			cout << "c. hm ke m" << endl;
			cout << "d. hm ke dm" << endl;
			cout << "e. hm ke cm" << endl;
			cout << "f. hm ke mm" << endl;
			cout << endl;
			cout << "Masukkan pilihan anda : " << endl;
			cin >> mode;
			cout << "--------------------------------------------" << endl;
			cout << endl;
			
			
			switch (mode){
       			 case 'a':
            		cout << "Hekto meter ke Kilo meter" << endl;
            		cout << endl;
		            cout << "Masukkan nilai hm" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " hm adalah " << a/10 << " km" <<endl;
		            break;
            
				case 'b':
		            cout << "Hekto meter ke Deka Meter" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai hm" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " hm adalah " << a*10 << " dm" <<endl;
		            break;
		            
		        case 'c':
		            cout << "Hekto meter ke Meter" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai hm" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " hm adalah " << a*100 << " m" <<endl;
		            break;
		            
		        case 'd':
		            cout << "Hekto meter ke Desi meter" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai hm" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " hm adalah " << a*1000 << " dm" <<endl;
		            break;
		            
		        case 'e':
		            cout << "Hekto meter ke Centi meter" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai hm" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " hm adalah " << a*10000 << " cm" <<endl;
		            break;
		            
		        case 'f':
		            cout << "Hekto meter ke Mili meter" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai hm" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " hm adalah " << a*100000 << " mm" <<endl;
		            break;
		            
		        default:
            		cout << "Pilihan tidak tersedia" << endl;
			}
			break;
		
		case 'C':
			cout << "Konversi Deka meter" << endl;
			cout << endl;
			cout << "Silahkan piih mode konversi dam" << endl;
            
			cout << "a. dam ke km" << endl;
			cout << "b. dam ke hm" << endl;
			cout << "c. dam ke m" << endl;
			cout << "d. dam ke dm" << endl;
			cout << "e. dam ke cm" << endl;
			cout << "f. dam ke mm" << endl;
			cout << endl;
			cout << "Masukkan pilihan anda : " << endl;
			cin >> mode;
			cout << "--------------------------------------------" << endl;
			cout << endl;
			
			
			switch (mode){
       			 case 'a':
            		cout << "Deka meter ke Kilo meter" << endl;
            		cout << endl;
		            cout << "Masukkan nilai dam" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " dam adalah " << a/100 << " km" <<endl;
		            break;
            
				case 'b':
		            cout << "Deka meter ke Hekto Meter" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai dam" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " dam adalah " << a/10 << " hm" <<endl;
		            break;
		            
		        case 'c':
		            cout << "Deka meter ke Meter" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai dam" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " dam adalah " << a*10 << " m" <<endl;
		            break;
		            
		        case 'd':
		            cout << "Deka meter ke Desi meter" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai dam" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " dam adalah " << a*100 << " dm" <<endl;
		            break;
		            
		        case 'e':
		            cout << "Deka meter ke Centi meter" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai dam" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " dam adalah " << a*1000 << " cm" <<endl;
		            break;
		            
		        case 'f':
		            cout << "Deka meter ke Mili meter" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai dam" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " dam adalah " << a*10000 << " mm" <<endl;
		            break;
		            
		        default:
            		cout << "Pilihan tidak tersedia" << endl;
			}
			break;
			
		case 'D':
			cout << "Konversi Meter" << endl;
			cout << endl;
			cout << "Silahkan piih mode konversi m" << endl;
            
			cout << "a. m ke km" << endl;
			cout << "b. m ke hm" << endl;
			cout << "c. m ke dam" << endl;
			cout << "d. m ke dm" << endl;
			cout << "e. m ke cm" << endl;
			cout << "f. m ke mm" << endl;
			cout << endl;
			cout << "Masukkan pilihan anda : " << endl;
			cin >> mode;
			cout << "--------------------------------------------" << endl;
			cout << endl;
			
			
			switch (mode){
       			 case 'a':
            		cout << "Meter ke Kilo meter" << endl;
            		cout << endl;
		            cout << "Masukkan nilai m" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " m adalah " << a/1000 << " km" <<endl;
		            break;
            
				case 'b':
		            cout << "Meter ke Hekto Meter" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai m" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " m adalah " << a/100 << " hm" <<endl;
		            break;
		            
		        case 'c':
		            cout << "Meter ke Deka Meter" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai m" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " m adalah " << a/10 << " dam" <<endl;
		            break;
		            
		        case 'd':
		            cout << "Meter ke Desi meter" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai m" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " m adalah " << a*10 << " dm" <<endl;
		            break;
		            
		        case 'e':
		            cout << "Meter ke Centi meter" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai m" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " m adalah " << a*100 << " cm" <<endl;
		            break;
		            
		        case 'f':
		            cout << "Meter ke Mili meter" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai m" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " m adalah " << a*1000 << " mm" <<endl;
		            break;
		            
		        default:
            		cout << "Pilihan tidak tersedia" << endl;
			}
			break;
			
		case 'E':
			cout << "Konversi Desi meter" << endl;
			cout << endl;
			cout << "Silahkan piih mode konversi dm" << endl;
            
			cout << "a. dm ke km" << endl;
			cout << "b. dm ke hm" << endl;
			cout << "c. dm ke dam" << endl;
			cout << "d. dm ke m" << endl;
			cout << "e. dm ke cm" << endl;
			cout << "f. dm ke mm" << endl;
			cout << endl;
			cout << "Masukkan pilihan anda : " << endl;
			cin >> mode;
			cout << "--------------------------------------------" << endl;
			cout << endl;
			
			
			switch (mode){
       			 case 'a':
            		cout << "Desi meter ke Kilo meter" << endl;
            		cout << endl;
		            cout << "Masukkan nilai dm" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " dm adalah " << a/10000 << " km" <<endl;
		            break;
            
				case 'b':
		            cout << "Desi meter ke Hekto Meter" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai dm" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " dm adalah " << a/1000 << " hm" <<endl;
		            break;
		            
		        case 'c':
		            cout << "Desi meter ke Deka meter" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai dm" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " dm adalah " << a/100 << " dam" <<endl;
		            break;
		            
		        case 'd':
		            cout << "Desi meter ke Meter" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai dm" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " dm adalah " << a/10 << " m" <<endl;
		            break;
		            
		        case 'e':
		            cout << "Desi meter ke Centi meter" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai dm" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " dm adalah " << a*10 << " cm" <<endl;
		            break;
		            
		        case 'f':
		            cout << "Desi meter ke Mili meter" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai dm" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " dm adalah " << a*100 << " mm" <<endl;
		            break;
		            
		        default:
            		cout << "Pilihan tidak tersedia" << endl;
			}
			break;
			
		case 'F':
			cout << "Konversi Centi meter" << endl;
			cout << endl;
			cout << "Silahkan piih mode konversi cm" << endl;
            
			cout << "a. cm ke km" << endl;
			cout << "b. cm ke hm" << endl;
			cout << "c. cm ke dam" << endl;
			cout << "d. cm ke m" << endl;
			cout << "e. cm ke dm" << endl;
			cout << "f. cm ke mm" << endl;
			cout << endl;
			cout << "Masukkan pilihan anda : " << endl;
			cin >> mode;
			cout << "--------------------------------------------" << endl;
			cout << endl;
			
			
			switch (mode){
       			 case 'a':
            		cout << "Centi meter ke Kilo meter" << endl;
            		cout << endl;
		            cout << "Masukkan nilai cm" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " cm adalah " << a/100000 << " km" <<endl;
		            break;
            
				case 'b':
		            cout << "Centi meter ke Hekto Meter" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai cm" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " cm adalah " << a/10000 << " hm" <<endl;
		            break;
		            
		        case 'c':
		            cout << "Centi meter ke Deka Meter" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai cm" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " cm adalah " << a/1000 << " dam" <<endl;
		            break;
		            
		        case 'd':
		            cout << "Centi meter ke Meter" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai cm" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " cm adalah " << a/100 << " m" <<endl;
		            break;
		            
		        case 'e':
		            cout << "Centi meter ke Desi meter" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai cm" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " cm adalah " << a/10 << " dm" <<endl;
		            break;
		            
		        case 'f':
		            cout << "Centi meter ke Mili meter" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai cm" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " cm adalah " << a*10 << " mm" <<endl;
		            break;
		            
		        default:
            		cout << "Pilihan tidak tersedia" << endl;
			}
			break;
			
		case 'G':
			cout << "Konversi Mili meter" << endl;
			cout << endl;
			cout << "Silahkan piih mode konversi mm" << endl;
            
			cout << "a. mm ke km" << endl;
			cout << "b. mm ke hm" << endl;
			cout << "c. mm ke dam" << endl;
			cout << "d. mm ke m" << endl;
			cout << "e. mm ke dm" << endl;
			cout << "f. mm ke cm" << endl;
			cout << endl;
			cout << "Masukkan pilihan anda : " << endl;
			cin >> mode;
			cout << "--------------------------------------------" << endl;
			cout << endl;
			
			
			switch (mode){
       			 case 'a':
            		cout << "Mili meter ke Kilo meter" << endl;
            		cout << endl;
		            cout << "Masukkan nilai mm" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " mm adalah " << a/1000000 << " km" <<endl;
		            break;
            
				case 'b':
		            cout << "Mili meter ke Hekto meter" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai mm" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " mm adalah " << a/100000 << " hm" <<endl;
		            break;
		            
		        case 'c':
		            cout << "Mili meter ke Deka meter" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai mm" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " mm adalah " << a/10000 << " dam" <<endl;
		            break;
		            
		        case 'd':
		            cout << "Mili meter ke Meter" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai mm" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " mm adalah " << a/1000 << " m" <<endl;
		            break;
		            
		        case 'e':
		            cout << "Mili meter ke Desi meter" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai mm" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " mm adalah " << a/100 << " dm" <<endl;
		            break;
		            
		        case 'f':
		            cout << "Mili meter ke Centi meter" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai mm" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " mm adalah " << a/10 << " cm" <<endl;
		            break;
		            
		        default:
            		cout << "Pilihan tidak tersedia" << endl;
			}
			break;
	
		default:
            cout << "Pilihan tidak tersedia" << endl;	
			break;	
	}
	
	return 0;
}


