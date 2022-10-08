#include <iostream>
#include <cstring>
#define NALUNO 2
using namespace std;

int main()
{ struct estruturaaluno{
char nome [50];
char matricula [50];
int ano;
} straluno[NALUNO];
int i;

for (i=0; i <NALUNO; i++){
    cout << "fala teu nome: ";
    cin.getline(straluno[i].nome, 60);
    cout << "fala tua matricula: ";
    cin.getline(straluno[i].matricula, 10);
    cout << "fala teu ano de nasc: ";
    cin >> straluno[i].ano;
    cout << endl;
   getchar();
}
cout << "\n\n\n todos alunos cadastrados \n\n\n";
for (i=0; i < NALUNO; i++) {
    cout << "aluno: " << straluno[i].nome << endl;
    cout << "matricula: " << straluno[i].matricula << endl;
    cout << "ano: " << straluno[i].ano << endl;

}

    return 0;
}
