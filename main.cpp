//
// Created by alexa on 06/12/2024.
//
#include <iostream>
#include <fstream>
#include "ejercicio1/Ejercicio1.h"
#include "ejercicio2/Circulo.h"
#include "ejercicio2/Triangulo.h"
#include "ejercicio3/Ejercicio3.h"
#include "ejercicio4/Ejercicio4.h"

int main() {

    // Variables
    int num1, num2;
    double base, altura, radio, masa;

    std::ofstream ficheroSalida("C:/Users/alexa/Documents/GitHub/Ejercicios_STL/resultados.txt");

    if (!ficheroSalida) {
        std::cerr << "No se pudo abrir el fichero para escribir." << std::endl;
        return 1;
    }

    // Matematicas
    ficheroSalida << "=== Operaciones Matemáticas ===";
    std::cout<< "=== Operaciones Matemáticas ==="<<std::endl;
    std::cout << "Introduce dos números para sumar y restar: "<<std::endl;
    std::cin >> num1 >> num2;
    ficheroSalida<< "Suma: " << Matematicas::suma(num1, num2);
   ficheroSalida << "Resta: " << Matematicas::resta(num1, num2);

    // Geometría: Área de un triángulo
    ficheroSalida << "\n=== Geometría: Área del Triángulo ===";
    std::cout << "\n=== Geometría: Área del Triángulo ==="<<std::endl;
    std::cout << "Introduce la base y la altura del triángulo: "<<std::endl;
    std::cin >> base >> altura;
    ficheroSalida << "Área del triángulo: " << Geometria::calcularAreaTriangulo(base, altura);

    // Geometría: Área del círculo
    ficheroSalida<< "\n=== Geometría: Área del Círculo ===";
    std::cout<< "\n=== Geometría: Área del Círculo ==="<<std::endl;
    std::cout << "Introduce el radio del círculo: "<<std::endl;
    std::cin >> radio;
    ficheroSalida << "Área del círculo: " << Geometria::calcularAreaCirculo(radio);

    // Geometría: Clase Circulo
    ficheroSalida << "\n=== Clase Círculo ===";
    std::cout << "\n=== Clase Círculo ==="<<std::endl;
    std::cout << "Introduce el radio del círculo (clase): "<<std::endl;
    std::cin >> radio;
    Geometria::Circulo c(radio);
    ficheroSalida << "Área del círculo (clase): " << c.calcularArea();
    ficheroSalida << "Perímetro del círculo: " << c.calcularPerimetro();

    // Física: Energía
    ficheroSalida << "\n=== Física: Energía Relativista ===";
    std::cout << "\n=== Física: Energía Relativista ==="<<std::endl;
    std::cout << "Introduce la masa en kilogramos: "<<std::endl;
    std::cin >> masa;
    ficheroSalida << "Energía (E = m * c^2): " << Ciencia::Fisica::calcularEnergia(masa) << " joules";

    ficheroSalida.close();
    return 0;
}
