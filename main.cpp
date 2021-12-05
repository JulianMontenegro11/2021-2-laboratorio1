#include <iostream>

using namespace std;

int main()
{
    bool continuar=true;
    char Con;

    while (continuar==true) {


        short a;
        int valor,tamanio;


        cout<<"Ingres el numero del problema que desea validar"<<endl;
        cout<<endl;
        cout<<"2,3,5,7,9,10,11,13,14 o 16"<<endl;


        cin>>a;
        switch (a) {

        case 2:
            int billete_50,billete_20,billete_10,billete_5,billete_2,billete_1,moneda_500,moneda_200,moneda_100,moneda_50,faltante;
            cout<<"Problema 2:"<<endl;
            cout<<endl;
            cout<<"Se necesita un programa que permita determinar la minima combinacion de billetes y monedas para "<<endl;
            cout<<"una cantidad de dinero determinada. Los billetes en circulacion son de 50.000, 20.000, 10.000, "<<endl;
            cout<<"5.000, 2.000 y 1.000, y las monedas son de 500, 200, 100 y 50. Hacer un programa que "<<endl;
            cout<<"entregue el numero de billetes y monedas de cada denominacion para completar la cantidad "<<endl;
            cout<<"deseada. Si por medio de los billetes y monedas disponibles no se puede lograr la cantidad deseada, "<<endl;
            cout<<"el sistema debera decir lo que resta para lograrla."<<endl;
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
            valor=valor-(moneda_50*50);
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
            cout<<endl;
            cout<<"¿Desea validar otro programa?, oprima la letra 'Y' si desea continuar, oprima la letra 'N' si desea salir :";
            cin>>Con;
            if (Con=='Y'|| Con=='y'){
                continuar=true;
            }
            else continuar=false;


        break;

        case 3:
            int mes,dia;

            cout<<"Problema 3"<<endl;
            cout<<endl;
            cout<<"Escriba un programa que debe leer un mes y un dia de dicho mes para luego decir si esa "<<endl;
            cout<<"combinacion de mes y día son validos. El caso mas especial es el 29 de febrero, en dicho caso "<<endl;
            cout<<"imprimir 'posible anio bisiesto'."<<endl;
            cout<<endl;
            cout<<"Por favor ingrese el mes : ";
            cin>>mes;
            while(mes<1||mes>12){
                cout<<"Mes invalido, por favor vuelva a intentarlo :";
                cin>>mes;
            }
            cout<<"Por favor ingrese el dia : ";
            cin>>dia;
            while(dia<1||dia>31){
                cout<<"Dia invalido, por favor vuelva a intentarlo : ";
                cin>>dia;
            }
            if(mes==2&&dia==29){ cout<<dia<<"/"<<mes<<" "<<"Es una fecha valida en anio bisiesto"<<endl; } //año bisiesto
            else if(mes==2&&dia>29) {cout<<dia<<"/"<<mes<<" "<<"Es una fecha invalida"<<endl; }  //mes de febrero
            else if(mes==4&&dia>30) {cout<<dia<<"/"<<mes<<" "<<"Es una fecha invalida"<<endl; }  //mes de abril
            else if(mes==6&&dia>30) {cout<<dia<<"/"<<mes<<" "<<"Es una fecha invalida"<<endl; } //mes de junio
            else if(mes==9&&dia>30) {cout<<dia<<"/"<<mes<<" "<<"Es una fecha invalida"<<endl; }  //mes de septiembre
            else if(mes==11&&dia>30){cout<<dia<<"/"<<mes<<" "<<"Es una fecha invalida"<<endl; }  //mes de Noviembre

            else {cout<<dia<<"/"<<mes<<" "<<"Es una fecha valida"<<endl;}

            cout<<endl;
            cout<<"¿Desea validar otro programa?, oprima la letra 'Y' si desea continuar, oprima la letra 'N' si desea salir :";
            cin>>Con;
            if (Con=='Y'|| Con=='y'){
                continuar=true;
            }
            else continuar=false;





        break;

        case 5:
            int inicio, espacio,espacio_inicio;
            cout<<"Problema 5 :"<<endl;
            cout<<endl;
            cout<<"Escriba un programa que muestre el siguiente patron en la pantalla:"<<endl;
            cout<<"   *"<<endl;
            cout<<"  ***"<<endl;
            cout<<" *****"<<endl;
            cout<<"*******"<<endl;
            cout<<" *****"<<endl;
            cout<<"  ***"<<endl;
            cout<<"   *"<<endl;
            cout<<"El tamanio del patron estara determinado un numero entero impar que ingrese el usuario. En el"<<endl;
            cout<<"ejemplo mostrado, el tamanio de la figura es 7."<<endl;
            cout<<endl;
            cout<<"Ingrese como numero entero el tamanio que desea para su estrella : ";
            cin>>tamanio;
            if(tamanio%2==0){
                inicio=2;
                espacio=((tamanio/2)-1);
                espacio_inicio=espacio;

            }
            else {
                inicio=1;
                espacio=((tamanio-1)/2);
                espacio_inicio=espacio;

            }

            for(int i=0;i<=espacio_inicio;i++){       //for para realizar la parte superior de la estrella



                for(int j=1;j<=espacio;j++){      //for para imprimir los primeros espacios
                    cout<<" ";
                }
                for(int k=1;k<=inicio;k++){       //for para imprimir los asteriscos
                    cout<<"*";

                }
                inicio=inicio+2;                   //se suma dos asteriscos a la siguiente fila
                for(int j=1;j<=espacio;j++){      //for para imprimir los segundos espacios
                    cout<<" ";
                                                  //se resta un espacio a la siguiente fila
                }
                cout<<endl;
                espacio=espacio-1;
            }

                espacio=espacio+2;
                inicio=inicio-4;
            for(int i=1;i<=espacio_inicio;i++){   //for para realizar la parte inferior de la estrella

                for(int j=1;j<=espacio;j++){     //for para imprimir los primeros espacios
                    cout<<" ";
                }
                for(int k=1;k<=inicio;k++){      //for para imprimir los asteriscos
                    cout<<"*";
                }
                inicio=inicio-2;
                for(int j=1;j<=espacio;j++){    // for para imprimir los segundos espacios
                    cout<<" ";
                }
                cout<<endl;
                espacio=espacio+1;

            }


            cout<<endl;
            cout<<"¿Desea validar otro programa?, oprima la letra 'Y' si desea continuar, oprima la letra 'N' si desea salir :";
            cin>>Con;
            if (Con=='Y'||Con=='y'){
                continuar=true;
            }
            else continuar=false;




        break;

        }

    }
    return 0;
}
