#include <iostream>

using namespace std;
int amongus (int n)
{
    return n*n;
}
int main()
{ int x, c, v;
cout << "fala 3 numero" << endl;
cin >> x >> c >> v;
if (x> 0 && c>0 && v>0 &&(
    amongus(x) + amongus(c) == amongus(v) ||
    amongus(x) + amongus(v) == amongus(c) ||
    amongus(v) + amongus(c) == amongus(x) )){
        cout<< " " << x << " " << c << " " << v << endl;
        cout << "tem como fazer triangulo reto" << endl;
    } else {
     cout<< " " << x << " " << c << " " << v << endl;
    cout << " nao tem como fazer triangulo reto" << endl;
    }

    return 0;
}
