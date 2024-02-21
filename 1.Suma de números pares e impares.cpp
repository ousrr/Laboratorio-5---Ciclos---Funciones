#include <iostream>
using namespace std;

//-----------------------------------------------------------------------------------------------------------------
//funcion donde se declaran instrucciones detro de un for un un if 
int sumaParImpar(int numero, bool sumaPares) {
    int suma = 0;
    //suma de impares
    for (int i = 1; i <= numero; i++) {
    	//suma de pares
        if ((i % 2 == 0 && sumaPares) || (i % 2 != 0 && !sumaPares)) {
            suma += i;
        }
    }
    return suma;
}

//-----------------------------------------------------------------------------------------------------------------
//Declaracion de funcion main en la que se asignaran valor a la variable y se imprimira resultados
int main() {
	//Declaracion de variable
    int num;
    //Pidiendo al usuario ingresar un numero que se declarara en la variable declarada
    cout << "Ingrese un numero: ";
    cin >> num;
	//Imprimiendo el resultado de las sumas
    cout << "Suma de numeros pares hasta " << num << ": " << sumaParImpar(num, true) << endl;
    cout << "Suma de numeros impares hasta " << num << ": " << sumaParImpar(num, false) << endl;

    return 0;
}

