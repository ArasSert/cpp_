/*
  Kullanýcýnýn girecegi sayýlardan tek, cift,
  teklerin toplamý ve çiftlerin toplamýný bulan program
*/
#include<iostream>

using namespace std;

int main()
{
    int sayac = 1, sayi;
    int tekAdet=0, ciftAdet=0; // tek v çift sayýlarýn adetleri
    int teklerinToplami = 0, ciftlerinToplam = 0;

    // 10 adet sayý testi
    while(sayac<=10)
    {
        cout<<sayac<<". sayiyi giriniz:"; cin>>sayi;

        if(sayi%2 == 0)
        {
            // Cift sayilari gormek
            //cout<<sayi<<endl;
            //cift sayilarin toplami
            ciftlerinToplam = ciftlerinToplam + sayi;
            ciftAdet = ciftAdet + 1; // çift sayýlarýn adedi
        }
        else
        {
            // Tek sayilari gormek
            cout<<sayi<<endl;

