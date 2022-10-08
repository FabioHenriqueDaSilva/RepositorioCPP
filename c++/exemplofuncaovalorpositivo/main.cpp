#include <iostream>

using namespace std;
int valorpo(void){
    int num;
cout << "fala um numero" << endl;
cin >> num;
 if (num >= 0 ){
 return num;
 }
 cout << "tornando o valor positivo" << endl;
 return -num;

 }



int main()
{
  cout << valorpo() << endl;
    return 0;
}
