#include <iostream>
using namespace std;

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Se declara una funcion con un ciclo while en la función sumaDigitos se encarga de sumar cada dígito de un número entero, uno por uno, hasta que no queden más dígitos por sumar. 
int sumaDigitos(int numero) {
    int suma = 0;
    while (numero != 0) {
        suma += numero % 10;
        numero /= 10;
    }
    return suma;
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Declaracion de funcion main en la que se asignaran valor a la variable y se imprimira resultados
int main() {
	//Declaracion de variable
    int num;
    //Pidiendo al usuario ingresar un numero que se asignara en la variable declarada
    cout << "Ingrese un numero entero: ";
    cin >> num;
	//Imprimiendo resultados
    cout << "Suma de digitos de " << num << ": " << sumaDigitos(num) << endl;

    return 0;
}

