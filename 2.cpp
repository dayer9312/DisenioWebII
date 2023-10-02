#include <iostream>

using namespace std;
int vec [10];

void llenado (int x) {
    
    cin>>vec[x];
}
void mostrar (int y) {
    cout<<y+1<<") "<<"posicion:"<<y<<" Elemento:"<<vec[y]<<endl;;
}

int main()
{
    cout<<"introduzca 10 elementos";
    
    for (int i=0; i<=9; i++)
    {
        llenado(i);
    }
    for (int j=0; j<=9; j++)
    {
        mostrar(j);
    }
    
}