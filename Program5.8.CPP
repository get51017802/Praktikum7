#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void main()
{
	char nama[20],kelas[8], abs[10];
	int data[5];
   int i, total, rata, tmp;
clrscr();
	 cout<<"Aplikasi Nilai Hitung Rata2"<<endl;
    cout<<"==================================="<<endl;
    cout<<"Masukan Nama : ";cin>>nama;
    cout<<"==================================="<<endl;
    cout<<"Masukan Nilai Ulangan Mahasiswa"<<endl;
    total=0;
    	for (i=0; i<5; i++)
      {
      cout<<"Masukan Nilai Ke-"<<(i+1)<<" : " ; cin>>data[i];
      total = total+data[i];
      }
      cout<<endl;
      cout<<"==================================="<<endl;
      cout<<" Mahasiswa dengan " <<  nama << " Punya Nilai Sebagai Berikut : \n"<<endl;
      	rata = total / 5;
         cout<<"Total : "<<total<<endl;
         cout<<"Rata - rata : "<<rata<<endl;
getch();
}

