// Constant Variables and Pointers.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>

#define PRINT(var) printer(#var, (var))

using namespace std;

void printer(const char *varName, int value)
{
    printf("Var name:'%s'\tvalue: %d\n", varName, value);
}


int main()
{
    int value = 8;
    int* pValue = &value;
    cout << "The value: " << value << endl;
    cout << "The reference &value: " << &value << endl;
    cout << "The pointer pValue: " << pValue << endl;
    cout << "The reference of the pointer pValue: " << &pValue << endl;
    cout << "The pointer derreferenced *pValue: " << *pValue << endl;
   
    cout << "================" << endl;

    int number = 11;
    const int* pValue1 = &value;
    cout << "pValue1: " << pValue1 << endl;
    cout << "*pValue1: " << *pValue1 << endl;
    cout << "&pValue: " << &pValue << endl;
    pValue1 = &number;
    cout << "CHANGE pValue1 = &number; APPLIED." << endl;
    cout << "pValue1: " << pValue1 << endl;
    cout << "*pValue1: " << *pValue1 << endl;
    cout << "&pValue1: " << &pValue1 << endl;
    int* const pValue2 = &value;
    cout << "pValue2: " << pValue2 << endl;
    cout << "*pValue2: " << *pValue2 << endl;
    cout << "&pValue2: " << &pValue2 << endl;
    *pValue2 = 12;
    cout << "CHANGE *pValue2 = 12; APPLIED." << endl;
    cout << "pValue2: " << pValue2 << endl;
    cout << "*pValue2: " << *pValue2 << endl;
    cout << "&pValue2: " << &pValue2 << endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
