#include <iostream>

using namespace std;
void troca (int &a, int &b){
int temp;
temp = a;
a = b;
b = temp;
}


int main()
{int a,b;
 cout << "fala 2 numeros" << endl;
 cin >> a >> b;
 cout << "tu botou " << a << " e " << b << endl;
 troca(a,b);
 cout << "trocando fica " << a << " e " << b << endl;
    return 0;
}
