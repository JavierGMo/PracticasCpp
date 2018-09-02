#include <iostream>
#include <cstdlib>
#include <cmath>

 using namespace std;

 int main(){

     int i=0,j=1,aux=0,fi,n,m=0;
     /*Para introducir datos
     int intro;
     cout<<"Hasta que numero: ";
     cin>>intro;
     Sustituir en el 10
     */
     cout<<i<<" "<<j<<" ";
     for(n = 0; n<10;n++){


            aux = i + j;
            cout<<aux<<" ";
            i = j;
            j = aux;
            //aux = i + j;


     }





 }

