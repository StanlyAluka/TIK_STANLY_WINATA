#include <iostream>
using namespace std;

int main(){
    /*
    jika nilai = 100 SANGAT GG
    jika nilai >= 90 Lulus sangat Memuaskan
    jika nilai >= 80 Cukup Memuaskan
    jika nilai >= 75 Cukup
    tidak boleh < 0 
    tidak boleh > 100
    <= 75 tidak lulus
    */
    int nilai;
    cout<<"Masukkan Nilai = "; cin>>nilai;
    if (nilai > 100 || nilai <0) {
        cout <<"Kelebihan";
    }
    else if (nilai = 100) {
        cout<<"SANGAT GG";
    }
    else if (nilai >= 90) {
        cout<<"Lulus Sangat Memuaskan";
    }
    else if (nilai >= 80) {
        cout<<"Lulus Memuaskan";
    }
    else if (nilai >= 75) {
        cout<<"Cukup";
    }
    else {
        cout <<"tidak lulus";
    }
    

    

    
    
    
    return 0;
}//end of main function
