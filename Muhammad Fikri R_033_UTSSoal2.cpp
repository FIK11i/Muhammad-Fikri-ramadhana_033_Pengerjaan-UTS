//penyelesaian sebuah masalah
#include <iostream>
#include <string>
using namespace std;

int main(){

    int fotokopi,harga;
    string xy;
     cout<<"Apakah Anda pelanggan (Y atau N) ? : ";
        cin>>xy;
        cout<<"Banyak fotokopi (lembar): ";
        cin>>fotokopi ;
        cout<<"/n";
        
    if (xy=="y")
    {
        harga=fotokopi*75;
    }
    else if(xy=="n"&&fotokopi<=100)
                {harga=fotokopi*150;}
    else if(xy=="n"&&fotokopi<=200&&fotokopi>100)
                {harga=fotokopi*100;}
    else if(xy=="n"&&fotokopi>200)
                {harga=fotokopi*100;}
                
                
    cout<<"Bayar= Rp. "<<harga;
    
}
