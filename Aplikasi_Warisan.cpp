#include<iostream>
#include<fstream>
using namespace std;

unsigned int long tanaah(int tanah){
	unsigned int long k;
	k=tanah*100000000;
	return k;
}

unsigned int long emaas(int emas){
	unsigned int long e;
	e=emas*520000;
	return e;
}

unsigned int long peraak(int perak){
	unsigned int long g;
	g=perak*20000;
	return g;
}

int main(){
	int suku, jeniskelamin,jumlahanak,jlhanak,motor,mobil, uang, emas, perak,mr,ml,rh;
	int sum=0,jml=0,jlh=0;
	unsigned int long a,c,d;
	char x;
	string rumah;
	double h,t,tanah;
	ofstream p;
	
	system("Color 0A");
	cout<<"====================================================\n";
	cout<<"===============   APLIKASI WARISAN   ===============\n";
	cout<<"====================================================\n";
	cout<<"\n";
	cout<<"Berdasarkan Suku\n";
	cout<<"\n";
	cout<<"1. Batak\n";
	cout<<"2. Jawa\n";
	cout<<"3. Padang\n";
	cout<<"\n";
	cout<<"Input suku : ";
	cin>>suku;
	cout<<endl;
	system("cls");
	system("Color 0B");
	switch (suku){
		case 1:
			cout<<"Suku Batak\n";
			cout<<"\n";
			cout<<"Jenis Kelamin\n";
			cout<<"1. Laki-laki\n";
			cout<<"2. Perempuan\n";
			cout<<"3. Laki-laki & Perempuan\n";
			cout<<"\n";
			cout<<"Input : ";
			cin>>jeniskelamin;
			cout<<endl;
			system("cls");
			switch (jeniskelamin){
				case 1:
					cout<<"Laki-laki\n";
					cout<<"\n";
					cout<<"Input jumlah anak : ";
					cin>>jumlahanak;
					cout<<"\n";
					cout<"Harta dan Benda\n";
					cout<<"Jumlah uang : Rp. ";
					cin>>uang;
					cout<<"Jumlah rumah : ";
					cin>>rh;
					for(int j=1;j<=rh;j++){
						cout<<"Rumah ke-"<<j<<" berukuran (besar/sedang/kecil) = ";
						cin>>rumah;
						if (rumah=="besar"){
							a=1000000000;
						}else if(rumah=="sedang"){
							a=650000000;
						}else if(rumah=="kecil"){
							a=250000000;
						}
						jml=jml+a;
					}
					cout<<"Input Tanah (Ha) : ";
					cin>>tanah;
					cout<<"Jumlah motor : ";
					cin>>mr;
					for(int i=1;i<=mr;i++){
						cout<<"Motor ke-"<<i<<" cc (125/150/>150) = ";
						cin>>motor;
						if (motor<=125){
							c=16000000;
						}else if(motor<=150){
							c=32000000;
						}else if(motor>150){
							c=70000000;
						}
						sum=sum+c;
					}
					cout<<"Banyak mobil : ";
					cin>>ml;
					for(int k=1;k<=ml;k++){
						cout<<"Mobil ke-"<<k<<" cc(1500/2500/>2500) = ";
						cin>>mobil;
						if (mobil<=1500){
							d=180000000;
						}else if(mobil<=2000){
							d=250000000;
						}else if(mobil>=2500){
							d=500000000;
						}
						jlh=jlh+d;
					}
					cout<<"Input Emas atau '0' (tidak ada) / gram : ";
					cin>>emas;
					cout<<"Input Perak atau '0' (tidak ada) / gram : ";
					cin>>perak;
					h=sum+jml+jlh+emaas(emas)+peraak(perak)+tanaah(tanah);
					t= (float) h/jumlahanak;
					cout<<endl;
					system("cls");
					if(jumlahanak==1){
						cout<<"Jumlah seluruh warisan \n";
						cout<<"Jumlah uang			: Rp. "<<uang<<endl;
						cout<<"Jumlah Rumah			: Rp. "<<jml<<endl;
						cout<<"Jumlah Tanah			: Rp. "<<tanaah(tanah)<<endl;
						cout<<"Jumlah Motor			: Rp. "<<sum<<endl;
						cout<<"Jumlah Mobil			: Rp. "<<jlh<<endl;
						cout<<"Jumlah Emas 			: Rp. "<<emaas(emas)<<endl;
						cout<<"Jumlah Perak			: Rp. "<<peraak(perak)<<endl;
						cout<<"Jumlah Seluruh Harta	: Rp. "<<h<<endl;
						cout<<endl;
						cout<<"Anak mendapatkan rumah dan uang sejumlah Rp. "<<t<<endl;
					}else if(jumlahanak==2){
						cout<<"Jumlah seluruh warisan \n";
						cout<<"Jumlah uang			: Rp. "<<uang<<endl;
						cout<<"Jumlah Rumah			: Rp. "<<jml<<endl;
						cout<<"Jumlah Tanah			: Rp. "<<tanaah(tanah)<<endl;
						cout<<"Jumlah Motor			: Rp. "<<sum<<endl;
						cout<<"Jumlah Mobil			: Rp. "<<jlh<<endl;
						cout<<"Jumlah Emas 			: Rp. "<<emaas(emas)<<endl;
						cout<<"Jumlah Perak 		: Rp. "<<peraak(perak)<<endl;
						cout<<"Jumlah Seluruh Harta	: Rp. "<<h<<endl;
						cout<<endl;
						cout<<"Anak pertama mendapatkan uang sejumlah Rp. "<<t<<endl;
						cout<<"Anak terakhir mendapatkan rumah dan harta sejumlah Rp. "<<t<<endl;
					}else if(jumlahanak>2){
						cout<<"Jumlah seluruh warisan \n";
						cout<<"Jumlah uang			: Rp. "<<uang<<endl;
						cout<<"Jumlah Rumah			: Rp. "<<jml<<endl;
						cout<<"Jumlah Tanah			: Rp. "<<tanaah(tanah)<<endl;
						cout<<"Jumlah Motor			: Rp. "<<sum<<endl;
						cout<<"Jumlah Mobil			: Rp. "<<jlh<<endl;
						cout<<"Jumlah Emas 			: Rp. "<<emaas(emas)<<endl;
						cout<<"Jumlah Perak 		: Rp. "<<peraak(perak)<<endl;
						cout<<"Jumlah Seluruh Harta : Rp. "<<h<<endl;
						cout<<endl;
						cout<<"Anak pertama dan tengah mendapatkan uang sejumlah Rp. "<<t<<endl;
						cout<<"Anak terakhir mendapatkan rumah dan harta sejumlah Rp. "<<t<<endl;
						}
					break;
			case 2:
				cout<<"Perempuan\n";
				cout<<"\n";
				cout<<"Input jumlah anak : ";
				cin>>jumlahanak;
				cout<<"\n";
				cout<"Harta dan Benda\n";
				cout<<"Jumlah uang : Rp. ";
				cin>>uang;
				cout<<"Jumlah rumah : ";
				cin>>rh;
				for(int j=1;j<=rh;j++){
					cout<<"Rumah ke-"<<j<<" berukuran (besar/sedang/kecil) = ";
					cin>>rumah;
					if (rumah=="besar"){
						a=1000000000;
					}else if(rumah=="sedang"){
						a=650000000;
					}else if(rumah=="kecil"){
						a=250000000;
					}
					jml=jml+a;
				}
				cout<<"Input Tanah (Ha) : ";
				cin>>tanah;
				cout<<"Jumlah motor : ";
				cin>>mr;
				for(int i=1;i<=mr;i++){
					cout<<"Motor ke-"<<i<<" cc (125/150/>150) = ";
					cin>>motor;
					if (motor<=125){
						c=16000000;
					}else if(motor<=150){
						c=32000000;
					}else if(motor>150){
						c=70000000;
					}
					sum=sum+c;
				}
				cout<<"Banyak mobil : ";
				cin>>ml;
				for(int k=1;k<=mr;k++){
					cout<<"Mobil ke-"<<k<<" cc(1500/2500/>2500) = ";
					cin>>mobil;
					if (mobil<=1500){
						d=180000000;
					}else if(mobil<=2000){
						d=250000000;
					}else if(mobil>=2500){
						d=500000000;
					}
					jlh=jlh+d;
				}
				cout<<"Input Emas atau '0' (tidak ada) / gram : ";
				cin>>emas;
				cout<<"Input Perak atau '0' (tidak ada) / gram : ";
				cin>>perak;
				h=sum+jml+jlh+emaas(emas)+peraak(perak)+tanaah(tanah);
				t=(float) h/jumlahanak;
				cout<<endl;
				system("cls");
				if(jumlahanak==1){
					cout<<"Jumlah seluruh warisan \n";
					cout<<"Jumlah uang			: Rp. "<<uang<<endl;
					cout<<"Jumlah Rumah			: Rp. "<<jml<<endl;
					cout<<"Jumlah Tanah			: Rp. "<<tanaah(tanah)<<endl;
					cout<<"Jumlah Motor			: Rp. "<<sum<<endl;
					cout<<"Jumlah Mobil			: Rp. "<<jlh<<endl;
					cout<<"Jumlah Emas 			: Rp. "<<emaas(emas)<<endl;
					cout<<"Jumlah Perak 		: Rp. "<<peraak(perak)<<endl;
					cout<<"Jumlah Seluruh Harta : Rp. "<<h<<endl;
					cout<<endl;
					cout<<"Anak mendapatkan uang sejumlah Rp. "<<t<<endl;
				}else if(jumlahanak==2){
					cout<<"Jumlah seluruh warisan \n";
					cout<<"Jumlah uang			: Rp. "<<uang<<endl;
					cout<<"Jumlah Rumah			: Rp. "<<jml<<endl;
					cout<<"Jumlah Tanah			: Rp. "<<tanaah(tanah)<<endl;
					cout<<"Jumlah Motor			: Rp. "<<sum<<endl;
					cout<<"Jumlah Mobil			: Rp. "<<jlh<<endl;
					cout<<"Jumlah Emas 			: Rp. "<<emaas(emas)<<endl;
					cout<<"Jumlah Perak 		: Rp. "<<peraak(perak)<<endl;
					cout<<"Jumlah Seluruh Harta : Rp. "<<h<<endl;
					cout<<endl;
					cout<<"Anak pertama mendapatkan uang sejumlah Rp. "<<t<<endl;
					cout<<"Anak terakhir mendapatkan rumah dan harta sejumlah Rp."<<t<<endl;
				}else if(jumlahanak>2){
					cout<<"Jumlah seluruh warisan \n";
					cout<<"Jumlah uang			: Rp. "<<uang<<endl;
					cout<<"Jumlah Rumah			: Rp. "<<jml<<endl;
					cout<<"Jumlah Tanah			: Rp. "<<tanaah(tanah)<<endl;
					cout<<"Jumlah Motor			: Rp. "<<sum<<endl;
					cout<<"Jumlah Mobil			: Rp. "<<jlh<<endl;
					cout<<"Jumlah Emas 			: Rp. "<<emaas(emas)<<endl;
					cout<<"Jumlah Perak 		: Rp. "<<peraak(perak)<<endl;
					cout<<"Jumlah Seluruh Harta : Rp. "<<h<<endl;
					cout<<endl;
					cout<<"Anak pertama dan tengah mendapatkan uang sejumlah Rp."<<t<<endl;
					cout<<"Anak terakhir mendapatkan rumah dan harta sejumlah Rp."<<t<<endl;
				}
				break;
			case 3:
				cout<<"Laki-laki dan Perempuan\n";
				cout<<"\n";
				cout<<"Input jumlah anak laki-laki : ";
				cin>>jumlahanak;
				cout<<"\n";
				cout<"Harta dan Benda\n";
				cout<<"Jumlah uang : Rp. ";
				cin>>uang;
				cout<<"Jumlah rumah : ";
				cin>>rh;
				for(int j=1;j<=rh;j++){
					cout<<"Rumah ke-"<<j<<" berukuran (besar/sedang/kecil) = ";
					cin>>rumah;
					if (rumah=="besar"){
						a=1000000000;
					}else if(rumah=="sedang"){
						a=650000000;
					}else if(rumah=="kecil"){
						a=250000000;
					}
					jml=jml+a;
				}
				cout<<"Input Tanah (Ha) : ";
				cin>>tanah;
				cout<<"Jumlah motor : ";
				cin>>mr;
				for(int i=1;i<=mr;i++){
					cout<<"Motor ke-"<<i<<" cc (125/150/>150) = ";
					cin>>motor;
					if (motor<=125){
						c=16000000;
					}else if(motor<=150){
						c=32000000;
					}else if(motor>150){
						c=70000000;
					}
					sum=sum+c;
				}
				cout<<"Banyak mobil : ";
				cin>>ml;
				for(int k=1;k<=ml;k++){
					cout<<"Mobil ke-"<<k<<" cc(1500/2500/>2500) = ";
					cin>>mobil;
					if (mobil<=1500){
						d=180000000;
					}else if(mobil<=2000){
						d=250000000;
					}else if(mobil>=2500){
						d=500000000;
					}
					jlh=jlh+d;
				}
				cout<<"Input Emas atau '0' (tidak ada) /gram : ";
				cin>>emas;
				cout<<"Input Perak atau '0' (tidak ada) /gram : ";
				cin>>perak;
				h=sum+jml+jlh+emaas(emas)+peraak(perak)+tanaah(tanah);
				t=(float) h/jumlahanak;
				cout<<endl;
				system("cls");
				if(jumlahanak==1){
					cout<<"Jumlah seluruh warisan \n";
					cout<<"Jumlah uang			: Rp. "<<uang<<endl;
					cout<<"Jumlah Rumah			: Rp. "<<jml<<endl;
					cout<<"Jumlah Tanah			: Rp. "<<tanaah(tanah)<<endl;
					cout<<"Jumlah Motor			: Rp. "<<sum<<endl;
					cout<<"Jumlah Mobil			: Rp. "<<jlh<<endl;
					cout<<"Jumlah Emas 			: Rp. "<<emaas(emas)<<endl;
					cout<<"Jumlah Perak 		: Rp. "<<peraak(perak)<<endl;
					cout<<"Jumlah Seluruh Harta : Rp. "<<h<<endl;
					cout<<endl;
					cout<<"Anak mendapatkan rumah dan uang sejumlah Rp. "<<t<<endl;
				}else if(jumlahanak==2){
					cout<<"Jumlah seluruh warisan \n";
					cout<<"Jumlah uang			: Rp. "<<uang<<endl;
					cout<<"Jumlah Rumah			: Rp. "<<jml<<endl;
					cout<<"Jumlah Tanah			: Rp. "<<tanaah(tanah)<<endl;
					cout<<"Jumlah Motor			: Rp. "<<sum<<endl;
					cout<<"Jumlah Mobil			: Rp. "<<jlh<<endl;
					cout<<"Jumlah Emas 			: Rp. "<<emaas(emas)<<endl;
					cout<<"Jumlah Perak 		: Rp. "<<peraak(perak)<<endl;
					cout<<"Jumlah Seluruh Harta : Rp. "<<h<<endl;
					cout<<endl;
					cout<<"Anak pertama mendapatkan uang sejumlah Rp."<<t<<endl;
					cout<<"Anak terakhir mendapatkan rumah dan harta sejumlah Rp."<<t<<endl;
				}else if(jumlahanak>2){
					cout<<"Jumlah seluruh warisan \n";
					cout<<"Jumlah uang			: Rp. "<<uang<<endl; 
					cout<<"Jumlah Rumah			: Rp. "<<jml<<endl;
					cout<<"Jumlah Tanah			: Rp. "<<tanaah(tanah)<<endl;
					cout<<"Jumlah Motor			: Rp. "<<sum<<endl;
					cout<<"Jumlah Mobil			: Rp. "<<jlh<<endl;
					cout<<"Jumlah Emas 			: Rp. "<<emaas(emas)<<endl;
					cout<<"Jumlah Perak 		: Rp. "<<peraak(perak)<<endl;
					cout<<"Jumlah Seluruh Harta : Rp. "<<h<<endl;
					cout<<endl;
					cout<<"Anak pertama dan tengah mendapatkan uang sejumlah Rp. "<<t<<endl;
					cout<<"Anak terakhir mendapatkan rumah dan harta sejumlah Rp. "<<t<<endl;
				}
				break;
			}
			break;
		case 2:	
			cout<<"Suku Jawa\n";
			cout<<"\n";
			cout<<"Jenis Kelamin\n";
			cout<<"1. Laki-laki\n";
			cout<<"2. Perempuan\n";
			cout<<"3. Laki-laki & Perempuan\n";
			cout<<"\n";
			cout<<"Input : ";
			cin>>jeniskelamin;
			cout<<endl;
			system("cls");
			switch (jeniskelamin){
				case 1:
					cout<<"Laki-laki\n";
					cout<<"\n";
					cout<<"Input jumlah anak : ";
					cin>>jumlahanak;
					cout<<"\n";
					cout<<"Harta & Benda\n";
					cout<<"Jumlah uang : Rp. ";
					cin>>uang;
					cout<<"Jumlah rumah : ";
					cin>>rh;
					for(int j=1;j<=rh;j++){
						cout<<"Rumah ke-"<<j<<" berukuran (besar/sedang/kecil) = ";
						cin>>rumah;
						if (rumah=="besar"){
							a=1000000000;
						}else if(rumah=="sedang"){
							a=650000000;
						}else if(rumah=="kecil"){
							a=250000000;
						}
						jml=jml+a;
					}
					cout<<"Input Tanah (Ha) : ";
					cin>>tanah;
					cout<<"Jumlah motor : ";
					cin>>mr;
					for(int i=1;i<=mr;i++){
						cout<<"Motor ke-"<<i<<" cc (125/150/>150) = ";
						cin>>motor;
						if (motor<=125){
							c=16000000;
						}else if(motor<=150){
							c=32000000;
						}else if(motor>150){
							c=70000000;
						}
						sum=sum+c;
					}
					cout<<"Banyak mobil : ";
					cin>>ml;
					for(int k=1;k<=ml;k++){
						cout<<"Mobil ke-"<<k<<" cc(1500/2500/>2500) = ";
						cin>>mobil;
						if (mobil<=1500){
							d=180000000;
						}else if(mobil<=2000){
							d=250000000;
						}else if(mobil>=2500){
							d=500000000;
						}
						jlh=jlh+d;
					}
					cout<<"Input Emas atau '0' (tidak ada) / gram : ";
					cin>>emas;
					cout<<"Input Perak atau '0' (tidak ada) / gram : ";
					cin>>perak;
					h=sum+jml+jlh+emaas(emas)+peraak(perak)+tanaah(tanah);
					t=(float) h/jumlahanak;
					cout<<endl;
					system("cls");
					if(jumlahanak==1){
						cout<<"Jumlah seluruh warisan \n";
						cout<<"Jumlah uang			: Rp. "<<uang<<endl;
						cout<<"Jumlah Rumah			: Rp. "<<jml<<endl;
						cout<<"Jumlah Tanah			: Rp. "<<tanaah(tanah)<<endl;
						cout<<"Jumlah Motor			: Rp. "<<sum<<endl;
						cout<<"Jumlah Mobil			: Rp. "<<jlh<<endl;
						cout<<"Jumlah Emas 			: Rp. "<<emaas(emas)<<endl;
						cout<<"Jumlah Perak 		: Rp. "<<peraak(perak)<<endl;
						cout<<"Jumlah Seluruh Harta : Rp. "<<h<<endl;
						cout<<endl;
						cout<<"Anak mendapatkan uang sejumlah Rp. "<<t<<endl;
					}else if(jumlahanak>=2){
						cout<<"Jumlah seluruh warisan \n";
						cout<<"Jumlah uang			: Rp. "<<uang<<endl;
						cout<<"Jumlah Rumah			: Rp. "<<jml<<endl;
						cout<<"Jumlah Tanah			: Rp. "<<tanaah(tanah)<<endl;
						cout<<"Jumlah Motor			: Rp. "<<sum<<endl;
						cout<<"Jumlah Mobil			: Rp. "<<jlh<<endl;
						cout<<"Jumlah Emas 			: Rp. "<<emaas(emas)<<endl;
						cout<<"Jumlah Perak 		: Rp. "<<peraak(perak)<<endl;
						cout<<"Jumlah Seluruh Harta : Rp. "<<h<<endl;
						cout<<endl;
						cout<<"Setiap anak mendapatkan uang sejumlah Rp. "<<t<<endl;
					}
					break;
				case 2:
					cout<<"Perempuan\n";
					cout<<"\n";
					cout<<"Input jumlah anak : ";
					cin>>jumlahanak;
					cout<<"\n";
					cout<<"Harta & Benda\n";
					cout<<"Jumlah uang : Rp. ";
					cin>>uang;
					cout<<"Jumlah rumah : ";
					cin>>rh;
					for(int j=1;j<=rh;j++){
						cout<<"Rumah ke-"<<j<<" berukuran (besar/sedang/kecil) = ";
						cin>>rumah;
						if (rumah=="besar"){
							a=1000000000;
						}else if(rumah=="sedang"){
							a=650000000;
						}else if(rumah=="kecil"){
							a=250000000;
						}
						jml=jml+a;
					}
					cout<<"Input Tanah (Ha) : ";
					cin>>tanah;
					cout<<"Jumlah motor : ";
					cin>>mr;
					for(int i=1;i<=mr;i++){
						cout<<"Motor ke-"<<i<<" cc (125/150/>150) = ";
						cin>>motor;
						if (motor<=125){
							c=16000000;
						}else if(motor<=150){
							c=32000000;
						}else if(motor>150){
							c=70000000;
						}
						sum=sum+c;
					}
					cout<<"Banyak mobil : ";
					cin>>ml;
					for(int k=1;k<=ml;k++){
						cout<<"Mobil ke-"<<k<<" cc(1500/2500/>2500) = ";
						cin>>mobil;
						if (mobil<=1500){
							d=180000000;
						}else if(mobil<=2000){
							d=250000000;
						}else if(mobil>=2500){
							d=500000000;
						}
						jlh=jlh+d;
					}
					cout<<"Input Emas atau '0' (tidak ada) / gram : ";
					cin>>emas;
					cout<<"Input Perak atau '0' (tidak ada) / gram : ";
					cin>>perak;
					h=sum+jml+jlh+emaas(emas)+peraak(perak)+tanaah(tanah);
					t=(float) h/jumlahanak;
					cout<<endl;
					system("cls");
					if(jumlahanak==1){
						cout<<"Jumlah seluruh warisan \n";
						cout<<"Jumlah uang			: Rp. "<<uang<<endl;
						cout<<"Jumlah Rumah			: Rp. "<<jml<<endl;
						cout<<"Jumlah Tanah			: Rp. "<<tanaah(tanah)<<endl;
						cout<<"Jumlah Motor			: Rp. "<<sum<<endl;
						cout<<"Jumlah Mobil			: Rp. "<<jlh<<endl;
						cout<<"Jumlah Emas 			: Rp. "<<emaas(emas)<<endl;
						cout<<"Jumlah Perak 		: Rp. "<<peraak(perak)<<endl;
						cout<<"Jumlah Seluruh Harta : Rp. "<<h<<endl;
						cout<<endl;
						cout<<"Anak mendapatkan uang sejumah Rp. "<<t<<endl;
					}else if(jumlahanak>1){
						cout<<"Jumlah seluruh warisan \n";
						cout<<"Jumlah uang			: Rp. "<<uang<<endl;
						cout<<"Jumlah Rumah			: Rp. "<<jml<<endl;
						cout<<"Jumlah Tanah			: Rp. "<<tanaah(tanah)<<endl;
						cout<<"Jumlah Motor			: Rp. "<<sum<<endl;
						cout<<"Jumlah Mobil			: Rp. "<<jlh<<endl;
						cout<<"Jumlah Emas 			: Rp. "<<emaas(emas)<<endl;
						cout<<"Jumlah Perak 		: Rp. "<<peraak(perak)<<endl;
						cout<<"Jumlah Seluruh Harta : Rp. "<<h<<endl;
						cout<<endl;
						cout<<"Setiap anak mendapatkan uang sejumlah Rp. "<<t<<endl;	
					}
					break;
				case 3:
					cout<<"Laki-laki & Perempuan\n";
					cout<<"\n";
					cout<<"Input jumlah anak laki laki: ";
					cin>>jumlahanak;
					cout<<"Input jumlah anak perempuan : ";
					cin>>jlhanak;
					cout<<"\n";
					cout<<"Harta & Benda\n";
					cout<<"Jumlah uang : Rp. ";
					cin>>uang;
					cout<<"Jumlah rumah : ";
					cin>>rh;
					for(int j=1;j<=rh;j++){
						cout<<"Rumah ke-"<<j<<" berukuran (besar/sedang/kecil) = ";
						cin>>rumah;
						if (rumah=="besar"){
							a=1000000000;
						}else if(rumah=="sedang"){
							a=650000000;
						}else if(rumah=="kecil"){
							a=250000000;
						}
						jml=jml+a;
					}
					cout<<"Input Tanah (Ha) : ";
					cin>>tanah;
					cout<<"Jumlah motor : ";
					cin>>mr;
					for(int i=1;i<=mr;i++){
						cout<<"Motor ke-"<<i<<" cc (125/150/>150) = ";
						cin>>motor;
						if (motor<=125){
							c=16000000;
						}else if(motor<=150){
							c=32000000;
						}else if(motor>150){
							c=70000000;
						}
						sum=sum+c;
					}
					cout<<"Banyak mobil : ";
					cin>>ml;
					for(int k=1;k<=ml;k++){
						cout<<"Mobil ke-"<<k<<" cc(1500/2500/>2500) = ";
						cin>>mobil;
						if (mobil<=1500){
							d=180000000;
						}else if(mobil<=2000){
							d=250000000;
						}else if(mobil>=2500){
							d=500000000;
						}
						jlh=jlh+d;
					}
					cout<<"Input Emas atau '0' (tidak ada) / gram : ";
					cin>>emas;
					cout<<"Input Perak atau '0' (tidak ada) / gram : ";
					cin>>perak;
					h=sum+jml+jlh+emaas(emas)+peraak(perak)+tanaah(tanah);
					t=(float) h/jumlahanak;
					cout<<endl;
					system("cls");
					if(jumlahanak==1){
						cout<<"Jumlah seluruh warisan \n";
						cout<<"Jumlah uang			: Rp. "<<uang<<endl;
						cout<<"Jumlah Rumah			: Rp. "<<jml<<endl;
						cout<<"Jumlah Tanah			: Rp. "<<tanaah(tanah)<<endl;
						cout<<"Jumlah Motor			: Rp. "<<sum<<endl;
						cout<<"Jumlah Mobil			: Rp. "<<jlh<<endl;
						cout<<"Jumlah Emas 			: Rp. "<<emaas(emas)<<endl;
						cout<<"Jumlah Perak 		: Rp. "<<peraak(perak)<<endl;
						cout<<"Jumlah Seluruh Harta : Rp. "<<h<<endl;
						cout<<endl;
						cout<<"Anak mendapatkan uang sejumlah Rp. "<<t<<endl;
					}else if(jumlahanak>1){
						cout<<"Jumlah seluruh warisan \n";
						cout<<"Jumlah uang			: Rp. "<<uang<<endl;
						cout<<"Jumlah Rumah			: Rp. "<<jml<<endl;
						cout<<"Jumlah Tanah			: Rp. "<<tanaah(tanah)<<endl;
						cout<<"Jumlah Motor			: Rp. "<<sum<<endl;
						cout<<"Jumlah Mobil			: Rp. "<<jlh<<endl;
						cout<<"Jumlah Emas 			: Rp. "<<emaas(emas)<<endl;
						cout<<"Jumlah Perak 		: Rp. "<<peraak(perak)<<endl;
						cout<<"Jumlah Seluruh Harta : Rp. "<<h<<endl;
						cout<<endl;
						cout<<"Setiap anak mendapatkan uang sejumlah Rp. "<<t<<endl;
					}
					break;
			}
			break;
		case 3:
			cout<<"Suku Padang\n";
			cout<<"\n";
			cout<<"Jenis Kelamin\n";
			cout<<"1. Laki-laki\n";
			cout<<"2. Perempuan\n";
			cout<<"3. Laki-laki & Perempuan\n";
			cout<<"\n";
			cout<<"Input : ";
			cin>>jeniskelamin;
			cout<<endl;
			system("cls");
			switch (jeniskelamin){
				case 1:
					cout<<"Laki-laki\n";
					cout<<"\n";
					cout<<"Input jumlah anak : ";
					cin>>jumlahanak;
					cout<<"\n";
					cout<<"Harta & Benda\n";
					cout<<"Jumlah uang : Rp. ";
					cin>>uang;
					cout<<"Jumlah rumah : ";
					cin>>rh;
					for(int j=1;j<=rh;j++){
						cout<<"Rumah ke-"<<j<<" berukuran (besar/sedang/kecil) = ";
						cin>>rumah;
						if (rumah=="besar"){
							a=1000000000;
						}else if(rumah=="sedang"){
							a=650000000;
						}else if(rumah=="kecil"){
							a=250000000;
						}
						jml=jml+a;
					}
					cout<<"Input Tanah (Ha) : ";
					cin>>tanah;
					cout<<"Jumlah motor : ";
					cin>>mr;
					for(int i=1;i<=mr;i++){
						cout<<"Motor ke-"<<i<<" cc (125/150/>150) = ";
						cin>>motor;
						if (motor<=125){
							c=16000000;
						}else if(motor<=150){
							c=32000000;
						}else if(motor>150){
							c=70000000;
						}
						sum=sum+c;
					}
					cout<<"Banyak mobil : ";
					cin>>ml;
					for(int k=1;k<=ml;k++){
						cout<<"Mobil ke-"<<k<<" cc(1500/2500/>2500) = ";
						cin>>mobil;
						if (mobil<=1500){
							d=180000000;
						}else if(mobil<=2000){
							d=250000000;
						}else if(mobil>=2500){
							d=500000000;
						}
						jlh=jlh+d;
					}
					cout<<"Input Emas atau '0' (tidak ada) / gram : ";
					cin>>emas;
					cout<<"Input Perak atau '0' (tidak ada) / gram : ";
					cin>>perak;
					h=sum+jml+jlh+emaas(emas)+peraak(perak)+tanaah(tanah);
					t=(float) h/jumlahanak;
					cout<<endl;
					system("cls");
					if(jumlahanak==1){
						cout<<"Jumlah seluruh warisan \n";
						cout<<"Jumlah uang			: Rp. "<<uang<<endl;
						cout<<"Jumlah Rumah			: Rp. "<<jml<<endl;
						cout<<"Jumlah Tanah			: Rp. "<<tanaah(tanah)<<endl;
						cout<<"Jumlah Motor			: Rp. "<<sum<<endl;
						cout<<"Jumlah Mobil			: Rp. "<<jlh<<endl;
						cout<<"Jumlah Emas 			: Rp. "<<emaas(emas)<<endl;
						cout<<"Jumlah Perak 		: Rp. "<<peraak(perak)<<endl;
						cout<<"Jumlah Seluruh Harta : Rp. "<<h<<endl;
						cout<<endl;
						cout<<"Anak mendapatkan uang sejumlah Rp. "<<t<<endl;
					}else if(jumlahanak>1){
						cout<<"Jumlah seluruh warisan \n";
						cout<<"Jumlah uang			: Rp. "<<uang<<endl;
						cout<<"Jumlah Rumah			: Rp. "<<jml<<endl;
						cout<<"Jumlah Tanah			: Rp. "<<tanaah(tanah)<<endl;
						cout<<"Jumlah Motor			: Rp. "<<sum<<endl;
						cout<<"Jumlah Mobil			: Rp. "<<jlh<<endl;
						cout<<"Jumlah Emas 			: Rp. "<<emaas(emas)<<endl;
						cout<<"Jumlah Perak 		: Rp. "<<peraak(perak)<<endl;
						cout<<"Jumlah Seluruh Harta : Rp. "<<h<<endl;
						cout<<endl;
						cout<<"Setiap anak mendapatkan uang sejumlah Rp. "<<t<<endl;
					}
					break;
				case 2:
					cout<<"Perempuan\n";
					cout<<"\n";
					cout<<"Input jumlah anak : ";
					cin>>jumlahanak;
					cout<<"\n";
					cout<<"Harta & Benda\n";
					cout<<"Jumlah uang : Rp. ";
					cin>>uang;
					cout<<"Jumlah rumah : ";
					cin>>rh;
					for(int j=1;j<=rh;j++){
						cout<<"Rumah ke-"<<j<<" berukuran (besar/sedang/kecil) = ";
						cin>>rumah;
						if (rumah=="besar"){
							a=1000000000;
						}else if(rumah=="sedang"){
							a=650000000;
						}else if(rumah=="kecil"){
							a=250000000;
						}
						jml=jml+a;
					}
					cout<<"Input Tanah (Ha) : ";
					cin>>tanah;
					cout<<"Jumlah motor : ";
					cin>>mr;
					for(int i=1;i<=mr;i++){
						cout<<"Motor ke-"<<i<<" cc (125/150/>150) = ";
						cin>>motor;
						if (motor<=125){
							c=16000000;
						}else if(motor<=150){
							c=32000000;
						}else if(motor>150){
							c=70000000;
						}
						sum=sum+c;
					}
					cout<<"Banyak mobil : ";
					cin>>ml;
					for(int k=1;k<=ml;k++){
						cout<<"Mobil ke-"<<k<<" cc(1500/2500/>2500) = ";
						cin>>mobil;
						if (mobil<=1500){
							d=180000000;
						}else if(mobil<=2000){
							d=250000000;
						}else if(mobil>=2500){
							d=500000000;
						}
						jlh=jlh+d;
					}
					cout<<"Input Emas atau '0' (tidak ada) / gram : ";
					cin>>emas;
					cout<<"Input Perak atau '0' (tidak ada) / gram : ";
					cin>>perak;
					h=sum+jml+jlh+emaas(emas)+peraak(perak)+tanaah(tanah);
					t=(float) h/jumlahanak;
					cout<<endl;
					system("cls");
					if(jumlahanak==1){
						cout<<"Jumlah seluruh warisan \n";
						cout<<"Jumlah uang			: Rp. "<<uang<<endl;
						cout<<"Jumlah Rumah			: Rp. "<<jml<<endl;
						cout<<"Jumlah Tanah			: Rp. "<<tanaah(tanah)<<endl;
						cout<<"Jumlah Motor			: Rp. "<<sum<<endl;
						cout<<"Jumlah Mobil			: Rp. "<<jlh<<endl;
						cout<<"Jumlah Emas 			: Rp. "<<emaas(emas)<<endl;
						cout<<"Jumlah Perak 		: Rp. "<<peraak(perak)<<endl;
						cout<<"Jumlah Seluruh Harta : Rp. "<<h<<endl;
						cout<<endl;
						cout<<"Anak mendapatkan uang sejumah Rp. "<<t<<endl;
					}else if(jumlahanak>1){
						cout<<"Jumlah seluruh warisan \n";
						cout<<"Jumlah uang			: Rp. "<<uang<<endl;
						cout<<"Jumlah Rumah			: Rp. "<<jml<<endl;
						cout<<"Jumlah Tanah			: Rp. "<<tanaah(tanah)<<endl;
						cout<<"Jumlah Motor			: Rp. "<<sum<<endl;
						cout<<"Jumlah Mobil			: Rp. "<<jlh<<endl;
						cout<<"Jumlah Emas 			: Rp. "<<emaas(emas)<<endl;
						cout<<"Jumlah Perak 		: Rp. "<<peraak(perak)<<endl;
						cout<<"Jumlah Seluruh Harta : Rp. "<<h<<endl;
						cout<<endl;
						cout<<"Setiap anak mendapatkan uang sejumlah Rp. "<<t<<endl;	
					}
					break;
				case 3:
					cout<<"Laki-laki & Perempuan\n";
					cout<<"\n";
					cout<<"Input jumlah anak perempuan : ";
					cin>>jumlahanak;
					cout<<"\n";
					cout<<"Harta & Benda\n";
					cout<<"Jumlah uang : Rp. ";
					cin>>uang;
					cout<<"Jumlah rumah : ";
					cin>>rh;
					for(int j=1;j<=rh;j++){
						cout<<"Rumah ke-"<<j<<" berukuran (besar/sedang/kecil) = ";
						cin>>rumah;
						if (rumah=="besar"){
							a=1000000000;
						}else if(rumah=="sedang"){
							a=650000000;
						}else if(rumah=="kecil"){
							a=250000000;
						}
						jml=jml+a;
					}
					cout<<"Input Tanah (Ha) : ";
					cin>>tanah;
					cout<<"Jumlah motor : ";
					cin>>mr;
					for(int i=1;i<=mr;i++){
						cout<<"Motor ke-"<<i<<" cc (125/150/>150) = ";
						cin>>motor;
						if (motor<=125){
							c=16000000;
						}else if(motor<=150){
							c=32000000;
						}else if(motor>150){
							c=70000000;
						}
						sum=sum+c;
					}
					cout<<"Banyak mobil : ";
					cin>>ml;
					for(int k=1;k<=ml;k++){
						cout<<"Mobil ke-"<<k<<" cc(1500/2500/>2500) = ";
						cin>>mobil;
						if (mobil<=1500){
							d=180000000;
						}else if(mobil<=2000){
							d=250000000;
						}else if(mobil>=2500){
							d=500000000;
						}
						jlh=jlh+d;
					}
					cout<<"Input Emas atau '0' (tidak ada) / gram : ";
					cin>>emas;
					cout<<"Input Perak atau '0' (tidak ada) / gram : ";
					cin>>perak;
					h=sum+jml+jlh+emaas(emas)+peraak(perak)+tanaah(tanah);
					t=(float) h/jumlahanak;
					cout<<endl;
					system("cls");
					if(jumlahanak==1){
						cout<<"Jumlah seluruh warisan \n";
						cout<<"Jumlah uang			: Rp. "<<uang<<endl;
						cout<<"Jumlah Rumah			: Rp. "<<jml<<endl;
						cout<<"Jumlah Tanah			: Rp. "<<tanaah(tanah)<<endl;
						cout<<"Jumlah Motor			: Rp. "<<sum<<endl;
						cout<<"Jumlah Mobil			: Rp. "<<jlh<<endl;
						cout<<"Jumlah Emas 			: Rp. "<<emaas(emas)<<endl;
						cout<<"Jumlah Perak 		: Rp. "<<peraak(perak)<<endl;
						cout<<"Jumlah Seluruh Harta : Rp. "<<h<<endl;
						cout<<endl;
						cout<<"Anak mendapatkan uang sejumlah Rp. "<<t<<endl;
					}else if(jumlahanak>1){
						cout<<"Jumlah seluruh warisan \n";
						cout<<"Jumlah uang			: Rp. "<<uang<<endl;
						cout<<"Jumlah Rumah			: Rp. "<<jml<<endl;
						cout<<"Jumlah Tanah			: Rp. "<<tanaah(tanah)<<endl;
						cout<<"Jumlah Motor			: Rp. "<<sum<<endl;
						cout<<"Jumlah Mobil			: Rp. "<<jlh<<endl;
						cout<<"Jumlah Emas 			: Rp. "<<emaas(emas)<<endl;
						cout<<"Jumlah Perak 		: Rp. "<<peraak(perak)<<endl;
						cout<<"Jumlah Seluruh Harta : Rp. "<<h<<endl;
						cout<<endl;
						cout<<"Setiap anak mendapatkan uang sejumlah Rp. "<<t<<endl;
					}
					break;
				}
			break;			
		}
			cout<<endl;
			cout<<"Apakah anda ingin menyimpan (Y/N) : ";
			cin>>x;
			cout<<endl;
			if (x=='Y'||x=='y'){
				cout<<"=======================================================================================\n";
				cout<<"==================            File Anda Telah Tersimpan            ====================\n";
				cout<<"==================   Terima Kasih Telah Menggunakan Aplikasi Ini   ====================\n";
				cout<<"=======================================================================================\n";
				p.open("datawarisan.txt");
				p<<"============================================";
				p<<"============	HARTA WARISAN	============";
				p<<"============================================";
				p<<"Jumlah uang				= Rp. "<<uang<<endl;
				p<<"Rumah					= Rp. "<<jml<<endl;
				p<<"Tanah					= Rp. "<<tanaah(tanah)<<endl;
				p<<"Motor					= Rp. "<<sum<<endl;
				p<<"Mobil					= Rp. "<<jlh<<endl;
				p<<"Emas					= Rp. "<<emaas(emas)<<endl;
				p<<"Perak					= Rp. "<<peraak(perak)<<endl;
				p<<"Jumlah Seluruh Harta	= Rp. "<<h<<endl;
				p<<"============================================";
				p<<"============================================";
				p.close();
				p<<"==============================================================================================";
			}else if(x=='N' || x=='n'){
				cout<<"=====================================================================\n";
				cout<<"====================        Terima Kasih         ====================\n";
				cout<<"=====================================================================\n";
			}
	return 0;	
}		
