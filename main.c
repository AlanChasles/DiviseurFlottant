#include <iostream>
using namespace std;

int main(){
float f1,f2;

cout << "Veuillez saisir deux nombres : ";
cin >> f1;
while(f2 == 0){
cout << "Votre deuxième nombre est égal à 0, veuillez le resaisir : " << endl;
cin >> f2;
}
cout << "Le quotient de la division du nombre " << f1 << " par " << f2 << " est " << f1/f2 << endl;

return 0;
}
