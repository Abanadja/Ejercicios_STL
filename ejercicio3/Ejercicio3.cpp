//
// Created by alexa on 06/12/2024.
//

#include "Ejercicio3.h"

namespace Geometria {
    Circulo::Circulo(double r) : radio(r) {}

    double Circulo::calcularArea() {
        return 3.14 * radio * radio;
    }

    double Circulo::calcularPerimetro() {
        return 2 * 3.14 * radio;
    }
}
