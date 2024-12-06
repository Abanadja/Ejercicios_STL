//
// Created by alexa on 06/12/2024.
//
#ifndef EJERCICIO3_H
#define EJERCICIO3_H

namespace Geometria {
    class Circulo {
    private:
        double radio; // Radio del círculo
    public:
        // Constructor que inicializa el radio
        Circulo(double r);

        // Método para calcular el área del círculo
        double calcularArea();

        // Método para calcular el perímetro del círculo
        double calcularPerimetro();
    };
}

#endif // EJERCICIO3_H
