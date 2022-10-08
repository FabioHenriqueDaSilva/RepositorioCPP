#include <iostream>
#include <locale>
using namespace std;

int achemiaor (int a, int b, int c)
{
    int maior;
    if (b > maior){
        maior = b;
    }
    if (c > maior){
        maior = c;

    }
return maior;
}

int main()
{ int a, b, c, x , y, z, maior1, maior2;
cout << "fala 3 numero do conjunto 1" << endl;
cin >> a >> b >> c;

maior1 = achemiaor(a,b,c);

cout << "fala 3 numero do conjunto 2" << endl;
cin >> x >> y >> z;

maior2 = achemiaor(x,y,z);

cout << maior1 << " + " << maior2 << " = " << maior1 + maior2 << endl;



    return 0;
}
