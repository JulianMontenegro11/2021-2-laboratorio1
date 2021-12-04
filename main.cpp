#include <iostream>

using namespace std;

int main()
{
    short a;
    int valor,auxiliar;


    cout<<"Ingres el numero del problema que desea validar"<<endl;
    cout<<endl;
    cout<<"2,3,5,7,9,10,11,13,14 o 16"<<endl;


    cin>>a;
    switch (a) {

    case 2:
        int billete_50,billete_20,billete_10,billete_5,billete_2,billete_1,moneda_500,moneda_200,moneda_100,moneda_50,faltante;
        cout<<"Ejercicio 2:"<<endl;
        cout<<endl;
        cout<<"Se necesita un programa que permita determinar la mínima combinación de billetes"<<endl;
        cout<<"y monedas para una cantidad de dinero determinada. Los billetes en circulación son de $50.000,"<<endl;
        cout<<"$20.000, $10.000, $5.000, $2.000 y $1.000, y las monedas son de $500, $200, $100 y $50."<<endl;
        cout<<"Hacer un programa que entregue el número de billetes y monedas de cada denominación para completar"<<endl;
        cout<<"la cantidad deseada. Si por medio de los billetes y monedas disponibles no se puede lograr la"<<endl;
        cout<<"cantidad deseada, el sistema deberá decir lo que resta para lograrla."<<endl;
        cout<<endl;
        cout<<"Ingrese el valor a procesar: "<<endl;
        cin>>valor;

        billete_50=valor/50000;
        valor=valor-(billete_50*50000);
        billete_20=valor/20000;
        valor=valor-(billete_20*20000);
        billete_10=valor/10000;
        valor=valor-(billete_10*10000);
        billete_5=valor/5000;
        valor=valor-(billete_5*5000);
        billete_2=valor/2000;
        valor=valor-(billete_2*2000);
        billete_1=valor/1000;
        valor=valor-(billete_1*1000);
        moneda_500=valor/500;
        valor=valor-(moneda_500*500);
        moneda_200=valor/200;
        valor=valor-(moneda_200*200);
        moneda_100=valor/100;
        valor=valor-(moneda_100*100);
        moneda_50=valor/50;
        valor=valor-(moneda_50*500);
        faltante=valor;

        cout<<"Cantidad de billetes de 50.000 = "<<billete_50<<endl;
        cout<<"Cantidad de billetes de 20.000 = "<<billete_20<<endl;
        cout<<"Cantidad de billetes de 10.000 = "<<billete_10<<endl;
        cout<<"Cantidad de billetes de 5.000 = "<<billete_5<<endl;
        cout<<"Cantidad de billetes de 2.000 = "<<billete_2<<endl;
        cout<<"Cantidad de billetes de 1.000 = "<<billete_1<<endl;
        cout<<"Cantidad de monedas de 500 = "<<moneda_500<<endl;
        cout<<"Cantidad de monedas de 200 = "<<moneda_200<<endl;
        cout<<"Cantidad de monedas de 100 = "<<moneda_100<<endl;
        cout<<"Cantidad de monedas de 50 = "<<moneda_50<<endl;
        cout<<"Faltante = "<<faltante<<endl;


    break;

    }
    return 0;
}
