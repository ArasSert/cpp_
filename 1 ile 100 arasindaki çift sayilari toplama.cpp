/*
  1 den 100 e kadar olan sayýlardan çift olanlarýn toplamý
*/
#include<iostream>

using namespace std;

int main()
{
    int sayac = 1, toplam = 0;

    while(sayac<100)
    {
        if(sayac%2 == 0)
        {
            // Cift sayilari gormek
            cout<<sayac<<endl;
            //cift sayilarin toplami
            toplam = toplam + sayac;
        }
        sayac = sayac+1;
    }
    cout<<"Toplam:"<<toplam<<endl;


    return 0;
}
