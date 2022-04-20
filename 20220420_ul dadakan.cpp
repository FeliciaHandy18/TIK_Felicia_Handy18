#include <iostream>
using namespace std;

/* nilai akhir + 30% nilai tugas + 30% nilai uts + 40% nilai uas
nilai tidak boleh >100 dan <0 keterangan dluar jangkauan
*/

int main (){
    int tugas;
    int uts;
    int uas;
  
  cout<<"Masukan Nilai Tugas = ";cin>>tugas;
   if (tugas>100){
      cout<<"Tidak bisa lebih dari 100"; return 0;
  }
  cout<<"Masukan Nilai UTS = ";cin>>uts;
   if (uts>100){
      cout<<"Tidak bisa lebih dari  100"; return 0;
  }
  cout<<"Masukan Nilai UAS = ";cin>>uas;
   if (uas>100){
      cout<<"Tidak bisa lebih dari 100"; return 0;
  }
  
}
  
