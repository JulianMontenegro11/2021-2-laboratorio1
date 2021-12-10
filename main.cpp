#include <iostream>

using namespace std;

int main()
{

    cout<<"Informatica 2  //  Julian Montenegro"<<endl;
    cout<<endl;
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

        case 2:{
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
            else continuar=false;} //final caso 2


        break;

        case 3:{
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
            else continuar=false;} // final caso 3





        break;

        case 5:{
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

                espacio=espacio+2;               // Se acomodan valores para iniciar a imprimir la parte inferior
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
            else continuar=false;}//final caso 5




        break;


        case 7:{
            cout<<"Problema 7"<<endl;
            cout<<endl;
            cout<<"En la serie de Fibonacci, cada número es la suma de los 2 anteriores e inicia con 1 y"<<endl;
            cout<<"1. Ej: 1, 1, 2, 3, 5, 8, ...."<<endl;
            cout<<"Escriba un programa que reciba un numero n y halle la suma de todos los numeros pares en la serie"<<endl;
            cout<<"de Fibonacci menores a n."<<endl;
            cout<<endl;
            cout<<"Ingrese un numero"<<endl;
            cin>>valor;

            int nuevo=0,anterior_1=1,anterior_2=0,total=0;
            while(nuevo<=valor){
                if(anterior_2==0){
                    nuevo=anterior_1+anterior_1;
                    anterior_2=anterior_1;
                }else{
                    anterior_2=anterior_1;
                    anterior_1=nuevo;
                    nuevo=anterior_1+anterior_2;
                }
                if(nuevo%2==0){
                    total=total+nuevo;
                }

            }
            cout<<"El resultado de la suma es = "<<total<<endl;
            cout<<endl;

            cout<<endl;
            cout<<"¿Desea validar otro programa?, oprima la letra 'Y' si desea continuar, oprima la letra 'N' si desea salir :";
            cin>>Con;
            if (Con=='Y'||Con=='y'){
                continuar=true;
            }
            else continuar=false;} // final caso 7




        break;
        case 9:{
            cout<<"Problema 9"<<endl;
            cout<<endl;
            cout<<"Escriba un programa que pida un numero entero N e imprima el resultado de la suma"<<endl;
            cout<<"de todos sus digitos elevados a si mismos."<<endl;
            cout<<endl;
            cout<<"ingrese el numero : ";
            cin>>valor;
            cout<<endl;
            int multiplicar,total=0,digito;
            while(valor!=0){
                digito=valor%10;
                valor=valor/10;

                for(int i=1;i<digito;i++){
                    if(i==1){
                    multiplicar=digito*digito;}
                    else{
                        multiplicar=multiplicar*digito;
                    }
                }
                if(digito==1){
                    multiplicar=1;
                }
                total=total+multiplicar;

                if(valor%10==0 && valor/10==0){

                    cout<<"El resultado de la suma es ="<<total<<endl;
                    break;
                }

            }

            cout<<endl;
            cout<<"¿Desea validar otro programa?, oprima la letra 'Y' si desea continuar, oprima la letra 'N' si desea salir :";
            cin>>Con;
            if (Con=='Y'||Con=='y'){
                continuar=true;
            }
            else continuar=false;


        } //final caso nueve

            break;

        case 10:{
            cout<<"Problema 10"<<endl;
            cout<<endl;
            cout<<"Escriba un programa que reciba un numero n e imprima el enesimo numero primo."<<endl;
            cout<<endl;
            cout<<"Ingrese el valor de n: ";
            cin>>valor;
            int contador_1=0,contador_2=0,numero;

            for(int j=1;contador_2<valor;){
            contador_1=0;
            for(int i=1;i<=j;i++){
                if(j%i==0){
                    contador_1++;
                }
                if(i==j){
                if(contador_1==2){
                    contador_2++;
                    contador_1=0;
                }
                        } //final if i=j
            }
            j++;
            if(contador_2==valor) numero=j-1;

            } // fina del for principal
            cout<<"El enesimo numero primo es: "<<numero<<endl;

            cout<<endl;

            cout<<endl;
            cout<<"¿Desea validar otro programa?, oprima la letra 'Y' si desea continuar, oprima la letra 'N' si desea salir :";
            cin>>Con;
            if (Con=='Y'||Con=='y'){
                continuar=true;
            }
            else continuar=false;

        } // Final del caso 10

            break;





        }   // final del switch

    }  // final del bucle del menu
    return 0;
}
