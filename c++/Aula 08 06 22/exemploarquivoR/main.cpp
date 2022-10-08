#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{string rola;
ifstream arqleitura ("nomes.txt");
if (arqleitura.is_open()){
    while (!arqleitura.eof()){
            getline(arqleitura, rola);
    cout << rola << endl;
    }
    arqleitura.close();

} else {
cout << "end of morbin time" << endl;
}

    return 0;
}
