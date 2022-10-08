#include <iostream>

using namespace std;

int main()
{ struct strmorb{
int nota;
char filme [7];
int vezes;
char gostou[4];
char recomend [4];
int conta;
}morb[1];
cout << "digite um filme (uma palavra apenas)" << endl;
cin >> morb[0].filme;

cout << "digite a quantidades de vezes que voce viu ele" << endl;
cin >> morb[0].vezes;

cout << "digite a nota dele" << endl;
cin >> morb[0].nota;

cout << "voce gostou dele? (sim ou nao)" << endl;
cin >> morb[0].gostou;

cout << "recomendaria pra alguem?" << endl;
cin >> morb[0].recomend;

cout << "para finalizar, resolva a conta 9+10" << endl;
cin >> morb[0].conta;


cout<< "voce digitou " << morb[0].filme << endl;
cout << "voce viu ele " << morb[0].vezes << " vezes" << endl;
cout << "voce deu nota " << morb[0].nota << endl;
cout << "voce gostou dele: " << morb[0].gostou << endl;
cout << "voce recomendou: " << morb[0].recomend << endl;
cout << "voce disse que 9+10 e : " << morb[0].conta << endl;


    return 0;
}
