// Nombre: Alexandro Delgado Justo-CUI: 20173455
#include <iostream>
using namespace std;
void funcion_Edad(int anioAct, int mesAct, int fechAct, int anioNac, int mesNac, int fechNac)
{
    int dias, meses;
    if (fechAct < fechNac){                                 
        fechAct = fechAct + 30;       
        mesAct = mesAct - 1;          
        dias = fechAct - fechNac; 
    }
    else                              
        dias = fechAct - fechNac; 

    if (mesAct < mesNac){                              
        mesAct = mesAct + 12;      
        anioAct = anioAct - 1;   
        meses = mesAct - mesNac;
    }
    else                          
        meses = mesAct - mesNac; 

    cout << "Tienes "<< anioAct - anioNac << " anios con "<< meses << " meses y " << dias << " dias " << endl;        
}
int main()
{
    int anioAct, mesAct ,fechAct, anioNac, mesNac, fechNac;
    cout << "Ingrese Anio Actual: ";cin >> anioAct;
    cout << "Ingrese Mes Actual: ";cin >> mesAct;
    cout << "Ingrese Fecha Actual: ";cin >> fechAct;
    cout << endl;
    cout << "Ingrese Anio Nacimiento: ";cin >> anioNac;
    cout << "Ingrese Mes de Nacimiento: ";cin >> mesNac;
    cout << "Ingrese Fecha de Nacimiento: ";cin >> fechNac;
    funcion_Edad(anioAct, mesAct, fechAct, anioNac, mesNac, fechNac);
    return 0;
}

