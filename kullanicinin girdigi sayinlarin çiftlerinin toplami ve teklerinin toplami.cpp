/*
  Kullan�c�n�n girecegi say�lardan tek, cift,
  teklerin toplam� ve �iftlerin toplam�n� bulan program
*/
#include<iostream>

using namespace std;

int main()
{
    int sayac = 1, sayi;
    int tekAdet=0, ciftAdet=0; // tek v �ift say�lar�n adetleri
    int teklerinToplami = 0, ciftlerinToplam = 0;

    // 10 adet say� testi
    while(sayac<=10)
    {
        cout<<sayac<<". sayiyi giriniz:"; cin>>sayi;

        if(sayi%2 == 0)
        {
            // Cift sayilari gormek
            //cout<<sayi<<endl;
            //cift sayilarin toplami
            ciftlerinToplam = ciftlerinToplam + sayi;
            ciftAdet = ciftAdet + 1; // �ift say�lar�n adedi
        }
        else
        {
            // Tek sayilari gormek
            cout<<sayi<<endl;

