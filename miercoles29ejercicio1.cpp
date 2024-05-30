#include <iostream>

using namespace std;

int main(){

int numero = 0;
int indicopar = 0;
int pares[100]= {};
int impares[100]= {};

do
{
   

cout<<"ingrese un numero: (digite 0 para salir)";
cin>>numero;
if((numero % 2 == 0)&& numero !=0)
{
    pares[indicopar]=numero;
    indicopar++;

}
else if (numero % 2 == 1)
{
    impares[indicopar]= numero;
    indicopar++;
}

}while (numero!=0);


cout<<"resultado:"<<endl;
cout<<"cantidad de pares:"<<indicopar<<endl;
cout<<"cantidad de impares:"<<indicopar<<endl;
for(int i=0; i<indicopar;i++){
    cout<<pares[i]<<"";
}
cout <<endl;
for(int j = 0; j < indicopar; j++)
cout<<impares[j]<<"";
}







