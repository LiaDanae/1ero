#include <iostream>

using namespace std;

int main()
{
    //Base del triangulo//
    float base,altura,area;
    cout <<"Ingresa la base del triangulo:";
    cin>>base;

    cout<< "Ingrese la altura:";
    cin>>altura;

    area= base*altura/2;
    cout<< "El area es "<<area<<endl;
    return 0;
}
