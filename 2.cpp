// Nombre: Alexandro Delgado Justo-CUI: 20173455
#include <iostream>
using namespace std;
bool bisiesto(int a)
{
    if(a%4 == 0 && a%100 != 0 || a%400 == 0)
        return true;
    return false;
}
int main()
{
    int anio;
    cout<<"Ingrese Anio: ";
    cin>>anio;
    if(bisiesto(anio)){
        cout<<"Es bisiesto!";
    }
    else{
        cout<<"No es bisiesto!"<<endl;
    }
    return 0;
}