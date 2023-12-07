#include <iostream>
#include <string>

int main() {
    int decision;
    int vida = 100;

    std::cout << "Bienvenido a la historia interactiva. Tienes " << vida << " puntos de vida.\n";

    for (int i = 0; i < 5; i++) {
        std::cout << "Estás en el punto de interacción " << i+1 << ". Elige una acción:\n";
        if (i == 0) {
            std::cout << "1. Realizar un salto hiperespacial\n";
            std::cout << "2. Escanear el sector para detectar naves enemigas\n";
            std::cout << "3. Reparar el escudo de la nave\n";
        } else if (i == 1) {
            std::cout << "1. Recoger minerales de un asteroide cercano\n";
            std::cout << "2. Investigar una señal desconocida\n";
            std::cout << "3. Realizar mantenimiento de rutina en la nave\n";
        } else if (i == 2) {
            std::cout << "1. Establecer contacto con una nave alienígena\n";
            std::cout << "2. Realizar un análisis detallado de un planeta cercano\n";
            std::cout << "3. Mejorar los sistemas de armas de la nave\n";
        } else if (i == 3) {
            std::cout << "1. Navegar a través de un campo de asteroides\n";
            std::cout << "2. Descansar y recuperar energía\n";
            std::cout << "3. Entrenar en el simulador de combate\n";
        } else if (i == 4) {
            std::cout << "1. Prepararse para la batalla final\n";
            std::cout << "2. Revisar todos los sistemas de la nave\n";
            std::cout << "3. Dar un discurso inspirador a la tripulación\n";
        }
        std::cout << "4. Consultar el estado de la nave\n";
        std::cout << "5. Salir del programa\n";
        std::cin >> decision;

        switch (decision) {
            case 1:
            case 2:
            case 3:
                std::cout << "Has elegido la acción " << decision << ".\n";
                // Aquí puedes agregar el código para cada acción
                break;
            case 4:
                std::cout << "El estado de la nave es: TODO BIEN.\n";
                i--; // Para repetir este punto de interacción
                break;
            case 5:
                std::cout << "Has elegido salir del programa. ¡Hasta la próxima aventura espacial!\n";
                return 0;
            default:
                std::cout << "Opción no válida. Por favor, elige una acción del 1 al 5.\n";
                i--; // Para repetir este punto de interacción
                break;
        }
    }

    std::cout << "Has llegado al final de la historia. ¡Gracias por jugar!\n";

    return 0;
}
