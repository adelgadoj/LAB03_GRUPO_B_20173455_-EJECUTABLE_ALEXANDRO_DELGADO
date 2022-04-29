//Nombre: Alexandro Delgado Justo-CUI: 20173455
#include <iostream>
using namespace std;
int potencia(int num, int exp){
    int res=num;
    if(exp==0) return 1;
    else if(exp==1) return num;
    else{
        for (int i = 2; i <= exp; i++)
        {
            res = res * num;
        }
        return res;
    }
}
int main(){
    int n,x;
    cout<<"Numero: ";
    cin>>n;
    cout<<"Exponente: ";
    cin>>x;
    cout<<"Potencia: "<<potencia(n,x);
    return 0;
}