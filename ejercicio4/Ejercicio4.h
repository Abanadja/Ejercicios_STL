//
// Created by alexa on 06/12/2024.
//

#ifndef FISICA_H
#define FISICA_H

namespace Ciencia {
    namespace Fisica {
        // Velocidad de la luz en el vacío (en metros por segundo)
        const double c = 299792458;

        // Función que calcula la energía según la fórmula E = m * c^2
        double calcularEnergia(double masa);
    }
}

#endif // FISICA_H
