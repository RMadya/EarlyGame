#include <iostream>
using namespace std;

int main()
{

   //begin
    // numeric nJejari, nLuas
    // display 'Masukan jejari= '
    // accept nJejari
    // compiute nLuas = 3,14 * r * r
    // display 'Luasnya= ' + nLuas
   //end

    double nJejari, nLuas;
    cout << "Masukan jejari = ";
    cin >> nJejari;
    nLuas = 3.14 * nJejari * nJejari;
    cout << "Luasnya = " << nLuas << endl;

    system("pause");
}

