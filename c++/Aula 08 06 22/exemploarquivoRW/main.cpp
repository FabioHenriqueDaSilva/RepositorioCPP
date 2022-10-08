#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{ string piroca;
  fstream arq;

  arq.open("nomes.txt", ios::out |ios::app);
  if (arq.is_open()){
    arq << "morbius" << endl;
    arq << "arbgarbghuabrhu" << endl;
    arq.close()

    arq.open ("nomes.txt", ios::in);
    while (! arq.eof()){
        get.line(arq,piroca);
        cout << piroca << endl;
    }
    arq.close();
  } else {
  cout << "Erro: no more morbin" << endl;
  }


    return 0;
}
