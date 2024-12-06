//
// Created by alexa on 06/12/2024.
//
#include <iostream>
#include "ejercicio1/Ejercicio1.h"
#include "ejercicio2/Circulo.h"
#include "ejercicio2/Triangulo.h"


int main() {
    std::cout << "Suma: " << Matematicas::suma(5, 3) << std::endl;
    std::cout << "Resta: " << Matematicas::resta(5, 3) << std::endl;

    std::cout << "Area del triangulo: " << Geometria::calcularAreaTriangulo(5, 3) << std::endl;
    std::cout << "Area del circulo: " << Geometria::calcularAreaCirculo(3) << std::endl;
    return 0;
}