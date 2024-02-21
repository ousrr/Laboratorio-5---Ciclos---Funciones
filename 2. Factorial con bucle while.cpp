#include <iostream>
using namespace std;
//-----------------------------------------------------------------------------------------------------------------
//Declaracion de funcion que realiza el procedimiento atravez de un ciclo while
float factorial(int n) {
	//inicializacion de variables
    float fact = 1;
    int i = 1;
    //ciclo while en el que se procede a sacar el factorial de un número entero positivo que nos da como resultado el producto de todos los números naturales anteriores o iguales a él.
    while (i <= n) {
        fact *= i;
        i++;
    }
    return fact;
}

//-----------------------------------------------------------------------------------------------------------------
//Declaracion de funcion main en la que se asignaran valor a la variable y se imprimira resultados
int main() {
	//Declaracion de variable
    int num;
    //Pidiendo al usuario ingresar un numero que se declarara en la variable declarada
    cout << "Ingrese un numero entero positivo: ";
    cin >> num;
	//Imprimiendo el resultado
    cout << "Factorial de " << num << ": " << factorial(num) << endl;

    return 0;
}

