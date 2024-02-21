#include <iostream>
using namespace std;
//-----------------------------------------------------------------------------------------------------------------
//Declaracion de función que recibira un número entero y cuentara la cantidad de dígitos que tiene. Utilizando un bucle do-while
int contarDigitos(int nume) {
	//Declaracion e inicializacion de variables
    int contador = 0;
    do {
    	//incrementacion de variable
        contador++;
        nume /= 10;
    } while (nume != 0);
    return contador;
}
//-----------------------------------------------------------------------------------------------------------------
//Declaracion de funcion main en la que se asignaran valor a la variable y se imprimira resultados
int main() {
	//Declaracion de variable
    int num;
    //Pidiendo al usuario ingresar un numero que se asignara en la variable declarada
    cout << "Ingrese un numero entero: ";
    cin >> num;
	//Imprimiendo el resultado
    cout << "Cantidad de digitos en " << num << ": " << contarDigitos(num) << endl;

    return 0;
}

