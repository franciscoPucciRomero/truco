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

int main()
{
    int cartaJ1[2]= {11 , 1};
    int cartaJ2[2]= {2 , 1};
    int cartaJ3[2]= {10 , 3};
    int acumuladorTantos=0;

    //cout<<cartaJ1[0];
    // tantos
    if(cartaJ1[1]==cartaJ2[1] || cartaJ1[1]==cartaJ3[1] ||cartaJ3[1]==cartaJ2[1])//hay tantos
    {
        acumuladorTantos=20;
        //determinar mayor de tres
        if(cartaJ1[1]==cartaJ2[1] && cartaJ1[1]==cartaJ3[1])
        {
            if(cartaJ1[0]<cartaJ2[0] && cartaJ1[0]<cartaJ3[0])
            {

                if(cartaJ3[0]<8)
                {
                    acumuladorTantos+=cartaJ3[0];
                }
                if(cartaJ2[0]<8)
                {
                    acumuladorTantos+=cartaJ2[0];
                }
            }
            else{
                if(cartaJ2[0]<cartaJ1[0] && cartaJ2[0]<cartaJ3[0])
                {

                        if(cartaJ1[0]<8)
                        {
                            acumuladorTantos+=cartaJ1[0];
                        }
                        if(cartaJ3[0]<8)
                        {
                            acumuladorTantos+=cartaJ3[0];
                        }
                }
                else{

                        if(cartaJ1[0]<8)
                        {
                            acumuladorTantos+=cartaJ1[0];
                        }
                        if(cartaJ2[0]<8)
                        {
                            acumuladorTantos+=cartaJ2[0];
                        }
                }
            }
        }
        //solo dos cartas
        else{
            if(cartaJ1[1]==cartaJ2[1])
            {

                if(cartaJ1[0]<8)
                {
                    acumuladorTantos+=cartaJ1[0];
                }
                if(cartaJ2[0]<8)
                {
                    acumuladorTantos+=cartaJ2[0];
                }
            }
            else
                {
                    if(cartaJ1[1]==cartaJ3[1])
                    {

                        if(cartaJ1[0]<8)
                        {
                            acumuladorTantos+=cartaJ1[0];
                        }
                        if(cartaJ3[0]<8)
                        {
                            acumuladorTantos+=cartaJ3[0];
                        }
                    }
                    else
                        {
                                if(cartaJ3[1]==cartaJ2[1])
                                {

                                    if(cartaJ3[0]<8)
                                    {
                                        acumuladorTantos+=cartaJ3[0];
                                    }
                                    if(cartaJ2[0]<8)
                                    {
                                        acumuladorTantos+=cartaJ2[0];
                                    }
                                }
                        }
                }
            }
    }
    //mayor carta unica
    else{
        if( cartaJ1[0]>cartaJ2[0] && cartaJ1[0]>cartaJ3[0] )
        {
            acumuladorTantos=cartaJ1[0];
        }
        else{
            if(cartaJ2[0]>cartaJ3[0])
            {
                acumuladorTantos=cartaJ2[0];
            }
            else{
                acumuladorTantos=cartaJ3[0];
            }
        }
    }
    cout<<acumuladorTantos;





return 0;
}
