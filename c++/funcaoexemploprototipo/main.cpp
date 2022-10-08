#include <iostream>

using namespace std;

float cap (float,float,float);
int main()
{float comp, larg, alt;
cout << "Programa para calcular a capacidade de água de uma piscina: " << endl << endl;
cout << "fala o comprimento" << endl;
cin >> comp;
cout << "fala a largura" << endl;
cin >> larg;
cout << "fala a altura" << endl;
cin >> alt;
cout << " a piscina possui: " << cap (comp, larg, alt) << "metros cubicos.";
    return 0;
}
float cap (float comp, float larg, float alt){
float resultado;
resultado = comp * larg* alt;
return resultado;
}
