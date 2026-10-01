// Práctica 4: Calculadora básica
// Traduce la receta de RECETA.md a C++, paso por paso.
// Deja el comentario "// Paso N" sobre cada bloque de código.

// ¿Recuerdas qué hace iostream?
#include <iostream>

// ¿Qué funciones trae ahora utilerias.h? ¿Qué devuelve cada una?
#include "utilerias.h"


    // Variables (siempre inicializadas)
    // TODO: opcion, a, b, resultado y simbolo.
    //       ¿De qué tipo es cada una? Revisa la sección 2 de tu README.
    //       ¿Con qué valor empieza un char?
  int main() {
    // Variables (siempre inicializadas)
    int opcion = 0;
    double a = 0.0;
    double b = 0.0;
    double resultado = 0.0;
    char simbolo = ' ';

    // Pasos 1 y 2: título y menú
    std::cout << "Calculadora basica\n";
    std::cout << "1) Suma\n2) Resta\n3) Multiplicacion\n4) Division\n";
    // TODO

    // Paso 3: leer la opción con leerEntero y repetir si no está entre 1 y 4
    // TODO: ¿qué ciclo usaste en la Práctica 3 para volver a pedir un dato?
   do {
    opcion = leerEntero("Elige una opcion (1-4): ");
    if (opcion < 1 || opcion > 4) {
        std::cout << "Opcion no valida, elige un numero del 1 al 4\n";
    }
} while (opcion < 1 || opcion > 4);

    // Pasos 4 y 5: leer los dos números con leerDecimal
    // TODO
    a = leerDecimal("Primer numero: ");
b = leerDecimal("Segundo numero: ");

    // Paso 6: SOLO si la opción es división, ¿qué haces si b es 0?
    // TODO

    // Paso 7: decisión múltiple
    // TODO: switch (opcion) { case 1: ... break; ... default: ... }
    //       ¿Qué pasa si olvidas un break? (Experimento A)
    switch (opcion) {
    case 1:
        resultado = a + b;
        simbolo = '+';
        break;
    case 2:
        resultado = a - b;
        simbolo = '-';
        break;
    case 3:
        resultado = a * b;
        simbolo = '*';
        break;
    case 4:
        resultado = a / b;
        simbolo = '/';
        break;
    default:
        std::cout << "Opcion inesperada\n";
        break;
}

    // Paso 8: salida -> a simbolo b = resultado
    // TODO
    std::cout << a << " " << simbolo << " " << b << " = " << resultado << "\n";

    // ¿Qué significa return 0;?
    return 0;
}