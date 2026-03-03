//library
#include<iostream>
using namespace std;
//deklarasi global
    float p,l;

//implementasi prosedur & fungsi
void input ()
{
    cout << "masukkan panjang : ";
    cin >> p;
    cout << "masukkan lebar : ";
    cin >> l;
}

float luaspersegi(float x, float y)
{
    return x*y;
}

int jumlah(int a, int b, int c)
{
    return a*b*c;
}

void output (){
    cout << "hasilnya = " << luaspersegi(p,l) << endl;
}
//program utama
int main()
{//star
    input();
    output();
    cout << "hasil penjumlahan = " << jumlah(5,6,9);

}//selesai



