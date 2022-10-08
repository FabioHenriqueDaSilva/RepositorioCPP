#include <iostream>
#include <fstream>
using namespace std;

int main()
{ ofstream arquivo;
arquivo.open("arquivoFOR.txt");
for (int i=0; i<=100;i++)
arquivo << " it's morbin time " << i << endl;
arquivo.close();

    return 0;
}
