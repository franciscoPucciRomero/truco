//ejercicio:
//autor:
//fecha:
//comentaro:
/*
1=espada
2=basto
3=oro
4=copa

*/
#include<iostream>
#include<cstdlib>
using namespace std;
void repartir(int *c1,int *c2,int *c3, int *c4, int *c5, int *c6)
{

}
void turno1()
{
    int eleccion;
    if(mano==0)
    {
        cout<<"precione 1 para embido, 2 para truco, 3 para pasar";
        cin>>eleccion;
    }
    else
        {
            if(pedirtantos)
            {

            }


        }



}
void enunciarMano()
{

}
int pedirtantos()
{

}
int tantos()
{
}
int main()
{
    int cartaJ1[2];
    int cartaJ2[2];
    int cartaJ3[2];
    //
    int cartaPC1[2];
    int cartaPC2[2];
    int cartaPC3[2];
    int mano=0;
    int puntosPC=0;
    int puntosJ=0;
    //

    while(puntosJ<30 || puntosPC<30)
    {
        repartir( &cartaJ1 , &cartaJ2 , &cartaJ3 , &cartaPC1 , &cartaPC2 , &cartaPC3 );

        enunciarMano();

        turno1();



    }








return 0;
}
