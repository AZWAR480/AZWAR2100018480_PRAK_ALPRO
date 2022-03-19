//NAMA = AZWAR
//NIM  = 2100018480
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

    float a, b;
    char c;
    int operasi;
    
void tambah(float a, float b)
{ 
    cout<<"hasil dari "<<a<<" + "<<b<<" = "<<a+b<<endl;
 }
void kurang(float a, float b)
{ 
cout<<"hasil dari"<<a<<" - "<<b<<" ="<<a-b<<endl;
}
 void kali(float a, float b)
{ 
cout<<"hasil dari"<<a<<" x "<<b<<" = "<<a*b<<endl;
}
void bagi(float a, float b)
{ 
cout<<"hasil dari"<<a<<" / "<<b<<" = "<<a/b<<endl;
}
void pangkat(float a, float b)
{ 
cout<<"hasil dari"<<a<<" pangkat "<<b<<" = "<<pow(a,b)<<endl;
}
void akar(float a)
{ 
cout<<"hasil dari akar"<<a<<" = "<<sqrt(a)<<endl;
}

int masukanBilanganPertamaKedua(){
	cout<<"\nmasukan bilangan pertama = ";
    cin>>a;
    cout<<"\nmasukan bilangan kedua   = ";
    cin>>b;
    return a,b;
}



int main()
{
    
    
 
    menu:
    cout<<"=================================\n";
    cout<<"         KALKULATOR\n";
    cout<<"=================================\n";
    operasi:
	cout<<"=================================\n";
    cout<<"         PILIH OPERASI\n";
    cout<<"=================================\n";
    cout<<"1.Operasi Penambahan\n";
    cout<<"2.Operasi Pengurangan\n";
    cout<<"3.Operasi Perkalian\n";
    cout<<"4.Operasi Pembagian\n";
    cout<<"5.Operasi perpangkatan\n";
    cout<<"6.Operasi akar pangkat\n\n";
    cout<<"Operasi: ";
    cin>>operasi;
    cout<<endl;
    
		   
    
    if(operasi==1)
	{
	    cout<<"======Operasi Penambahan======";
	    /*cout<<"\nmasukan bilangan pertama = ";
        cin>>a;
        cout<<"\nmasukan bilangan kedua   = ";
        cin>>b;*/
        
        masukanBilanganPertamaKedua();
	    tambah(a,b);
	}
    else if(operasi==2)
	{
		cout<<"======Operasi Pengurangan======"<<endl;
		cout<<"\nmasukan bilangan pertama = ";
        cin>>a;
        cout<<"\nmasukan bilangan kedua   = ";
        cin>>b;
        kurang(a,b);
	}
    else if (operasi==3)
	{
		cout<<"======Operasi Perkalian======"<<endl;
		cout<<"\nmasukan bilangan pertama = ";
        cin>>a;
        cout<<"\nmasukan bilangan kedua   = ";
        cin>>b;
        kali(a,b);
	}
    else if (operasi==4){
    	cout<<"======Operasi Pembagian======"<<endl;
    	cout<<"\nmasukan bilangan pertama = ";
        cin>>a;
        cout<<"\nmasukan bilangan kedua   = ";
        cin>>b;
        bagi(a,b);
	}
	else if (operasi==5){
    	cout<<"======Operasi perpangkatan======"<<endl;
    	cout<<"\nmasukan bilangan pertama = ";
        cin>>a;
        cout<<"\nmasukan bilangan kedua   = ";
        cin>>b;
        pangkat(a,b);
	}
	else if (operasi==6){
    	cout<<"======Operasi akar pangkat======"<<endl;
    	cout<<"\nmasukan bilangan  = ";
        cin>>a;
        akar(a);
	}
	else{     
    	cout<<"Masukan anda salah!"<<endl;
    	cout<<"Silahkan masukan lagi!"<<endl;
    goto operasi;
        }
        
	
    
    
 
    cout<<"Apakah anda mau mencoba lagi ? (y/t)";
    cin>>c;
    
    if(c=='Y'||c=='y')
    {
    	system("cls");
        goto menu;
    }
    
    if(c=='T'||c=='t')
    {
        goto akhir;
    }
    
    
akhir :
    cout<<"anda keluar dari program\n\n";


 }


