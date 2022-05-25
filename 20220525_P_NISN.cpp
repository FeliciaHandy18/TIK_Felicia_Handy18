#include <iostream>
using namespace std;

int main(){
	int n;
	string a[100];
	float b[100],c[100],d[100];
	cout<<"Jumlah Siswa :";cin>>n;
	cout<<endl;
	for(int i=1;i<=n;i++){
		printf("Siswa ke - %i\n",i);
		cout<<"Nama : ";cin>>a[i];
		cout<<"Nilai Tugas : ";cin>>b[i];
		cout<<"Nilai PTS : ";cin>>c[i];
		cout<<"Nilai PAS : ";cin>>d[i];
		cout<<endl;
	}
	cout<<endl;
	for(int i=1;i<=n;i++){
		printf("Siswa ke - %i\n",i);
		cout<<"Nama : "<<a[i]<<endl;
		printf("Nilai Akhir : %.2f\n",(b[i]+c[i]+d[i])/3);
		cout<<endl;
	}
	return 0;
}
