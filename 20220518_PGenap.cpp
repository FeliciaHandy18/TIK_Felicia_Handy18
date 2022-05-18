#include<iostream>
using namespace std;

int main(){
    int a[10];
    int x,y,d,e,hasil;
    char aritmatika;
    
    cout<<"Masukan nilai 1=";
    cin>>x;
    
    cout<<"Pilih operator(+,-,*,/) = ";
    cin>>aritmatika;
    
    cout<<"Masukkan nilai 2=";
    cin>>y;
    
    cout<<"hasil=";
    cout<<x<<aritmatika<<y;
    
    if(aritmatika == '+'){
        hasil = x+y;
    }
    else if (aritmatika == '-'){
         hasil = x-y;
     }
     else if (aritmatika == '/'){
         hasil = x/y;
     }
    else if ( aritmatika == '*'){
        hasil = x*y;
    }
    else{
        cout<<"error"<<endl;
    }
    cout<<"="<<hasil<<endl;
    
    for(d=0;hasil>0; d++){
        a[d] = hasil%2;
        hasil = hasil/2;
    }
    cout << "Angka binernya =";
    
    for(d=d-1;d>=0;d--){
        cout<<a[d];
    }
    cout<<endl;
    return 0;
}
