//
// Created by alexa on 06/12/2024.
//
#include <iostream>
#include "ejercicio1/Ejercicio1.h"
#include "ejercicio2/Circulo.h"
#include "ejercicio2/Triangulo.h"
#include "ejercicio3/Ejercicio3.h"
#include "ejercicio4/Ejercicio4.h"
#include "ejercicio5/Ejercicio5.h"


int main() {
    Ejercicio5();

    std::cout << "Suma: " << Matematicas::suma(5, 3) << std::endl;
    std::cout << "Resta: " << Matematicas::resta(5, 3) << std::endl;

    std::cout << "Area del triangulo: " << Geometria::calcularAreaTriangulo(5, 3) << std::endl;
    std::cout << "Area del circulo: " << Geometria::calcularAreaCirculo(3) << std::endl;

    Geometria::Circulo c(5);
    std::cout << "Area: " << c.calcularArea() << std::endl;
    std::cout << "Perimetro: " << c.calcularPerimetro() << std::endl;

    std::cout << "Energia: " << Ciencia::Fisica::calcularEnergia(10) << std::endl;

    return 0;
}