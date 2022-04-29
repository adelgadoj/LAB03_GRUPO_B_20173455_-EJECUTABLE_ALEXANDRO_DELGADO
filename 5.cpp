#include <iostream>
using namespace std;
bool numerovalido(int num){
if(num>=0 && num <=100 && num%2 == 0){
    return true;
}
else{
    return false;
}
}
int main()
{
    int n;
    cout << "Ingresa numero ";
    cin >> n;
    
    while (true)
    {
        int sum = 0;
        if(numerovalido(n)){
            for(int i=0 ; i<n ; i++){
                if(i % 2 !=0){
                    sum=sum+i;
                }
            }
            cout<<"Numero entre 0 & 100"<<endl;
            cout<<"Numero par"<<endl;
            cout<<"La suma de los impares hasta "<<n<<" es "<<sum<<endl;
            break;
        }
        else{
            cout<<"Ingrese Numero valido"<<endl;
            cin>>n;
        }
    }
    return 0;
}