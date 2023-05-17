#include <iostream>
using namespace std;

// 9. Dadas dos cadenas de igual longitud, desarrollar una función recursiva para verificar si una es la
//    reversa de la otra. Ejemplo: ‘PIZZA’ y ‘AZZIP’

void verificaCadenaAlReverso(char a[],char b[],int n,int cont)  // n = nro de elementos y lo inici en -1, cont= lo arranco en 0
{
    int coincidencia = 0 ;                                       //3    // 0
    if (n >= 0){ // 3,2,1,0
        if (a[cont] == b[n]){  // 0,1,2,3
            verificaCadenaAlReverso(a,b,n-1,cont+1); //
        }                          //0  //3
        else{
            cout << "nooooo La palabra A y B no son iguales al revez " << endl;
        }
    }
    else
        cout << "Claro !!! La palabra A y B son iguales al revez !!!" << endl;

}




//8. Desarrollar una función recursiva que devuelva la cantidad de veces que se encontró un
//   determinado valor en un arreglo de enteros.

int nro=0;
int cantidadValorEnArreglo (int v[],int n, int valor)
{
    if ( n >0){
        if (valor == v[n-1]){
            nro++;
        }
        return cantidadValorEnArreglo(v,n-1,valor);
    }
    else
        return nro;
}


/*

//5. Realice una función recursiva que devuelva el mayor valor de un arreglo de enteros.

int devulvoMayorDelVector (int vec[],int cant,int mayor)
{

    if ( cant >=0){
        if ( vec[cant] > mayor ){
            mayor = vec[cant];
            devulvoMayorDelVector(vec,cant -1,mayor);
        }
        else
           devulvoMayorDelVector(vec,cant -1,mayor);
    }
    else
        return mayor;
}





//4. Realice una función que acepte como parámetro un número natural (N), si N es par imprima los N primeros pares sino los N primeros impares.
// Ejemplo: N=4 imprime 2,4,6,8 N=3 imprime 1,3,5

void imprimeNrosParEimpar(int n)
{
    if ( n%2 == 0){
        if ( n > 1){
            imprimeNrosParEimpar(n-2);
            cout << n << "-";
        }
        else
            cout << "N es un numero par ! \nLos primeros numeros pares son: ";
    }
    else{
        if ( n > 0){
            imprimeNrosParEimpar(n-2);
            cout << n << "-";
        }
        else
            cout << "N es un numero impar ! \nLos primeros numeros impares son : ";
    }
}

//3. Realice una función que acepte como parámetro un número natural (N), e imprima las N primeras letras del alfabeto (1 <= N <= 26).

char pal= 'A';
void letras (int n)
{
    if ( n > 0){
        letras(n-1);
        cout << pal++ <<"-";
    }
}

//2. Realice una función que acepte como parámetro un número natural (N), e imprima la suma de los primeros N números naturales

int suma=0;
int sumaNumerosNaturales (int n)
{
    if ( n == 0 ){
        return suma;
    }
    else{
        sumaNumerosNaturales(n-1);
        cout << n << "<>";
        suma+=n;
    }
}

int sumaNumerosNaturalesB (int n)
{
    if ( n > 0 ){
        sumaNumerosNaturalesB(n-1);
        cout << n << "<>";
        suma+=n;
    }
    else{
        cout << n << "<>";
    }
}

//1. Realice una función que acepte como parámetro un número natural (N), e imprima los primeros N números naturales
void naturalAscendente (int n)
{
    if ( n > 0) {
        naturalAscendente(n-1);
        cout << n << "-";
    }
    else{
        cout << n << "-";;
    }
}

void naturalDescendente (int n)
{
    if ( n > 0) {
        cout << n << "-";
        naturalDescendente(n-1);
    }
    else{
        cout << n << "-";;
    }
}
*/
