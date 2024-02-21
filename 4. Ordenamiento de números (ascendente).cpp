#include <iostream>
using namespace std;
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Se declara un procedimiento que no retorna un valor, El bucle se repitira hasta que ninguna de las condiciones sea verdadera, lo que significa que a <= b <= c.
void ordenarNumeros(int& a, int& b, int& c) {
    int temp;
    do {
        if (a > b) {
            temp = a;
            a = b;
            b = temp;
        }
        if (b > c) {
            temp = b;
            b = c;
            c = temp;
        }
    //Esta línea while (a > b || b > c) asegura que el bucle do-while continúe ejecutándose mientras al menos uno de los pares de números no esté en orden ascendente.
    } while (a > b || b > c);
}
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Declaracion de funcion main en la que se asignaran valor a la variable y se imprimira resultados
int main() {
	//Declaracion de variables 
    int x, y, z;
	//Se le Pide al usuario ingresar numeros que se asignaran en las variables declaradas
    cout << "Ingrese tres numeros enteros: ";
    cin >> x >> y >> z;
	// Se imprimen los resultados
    cout << "Antes de ordenar: " << x << " " << y << " " << z << endl;
    ordenarNumeros(x, y, z);
    cout << "Despues de ordenar: " << x << " " << y << " " << z << endl;

    return 0;
}

