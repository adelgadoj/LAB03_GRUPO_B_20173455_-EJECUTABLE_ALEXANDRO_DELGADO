#include <iostream>
using namespace std;
bool primo(int num)
{
    if (num == 0 || num == 1 || num == 4)
        return false;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cout<<"Hasta que numero desea ver primos? ";
    cin>>n;
    int x = 0;
    while (true && x <= n)
    {
        if (primo(x))
        {
            cout << x << " ";
            
        }
        x++;
    }
    return 0;
}