#include <iostream>
#include <string>

using namespace std;

int main() {
    int opcionUsuario;
    int vida = 100; // Puntos de vida del usuario
    int dinero = 0; // Dinero del usuario

    cout << "Bienvenido al Espacio!\n";
    cout << "Despiertas en un misterioso bosque...\n";

    while (true) {
        cout << "\n--- Menú Principal ---\n";
        cout << "1. Explorar el bosque\n";
        cout << "2. Buscar un tesoro\n";
        cout << "3. Seguir un camino\n";
        cout << "4. Descansar\n";
        cout << "5. Terminar la aventura\n";
        cout << "Tu elección: ";
        cin >> opcionUsuario;

        switch (opcionUsuario) {
            case 1:
                cout << "¡Encuentras una cueva oculta!\n";
                cout << "Dentro de la cueva, descubres una poción.\n";
                cout << "Tu vida aumenta en 20 puntos.\n";
                vida += 20;
                break;
            case 2:
                cout << "¡Excavas el suelo y encuentras un cofre lleno de monedas!\n";
                cout << "Ganas 50 monedas.\n";
                dinero += 50;
                break;
            case 3:
                cout << "Sigues el camino y te encuentras con un mercader.\n";
                cout << "Él te ofrece un amuleto mágico por 30 monedas.\n";
                cout << "1. Comprar el amuleto\n";
                cout << "2. Ignorar y continuar\n";
                cout << "Tu elección: ";
                cin >> opcionUsuario;
                if (opcionUsuario == 1 && dinero >= 30) {
                    cout << "Compraste el amuleto. ¡Te brinda protección extra!\n";
                    vida += 30;
                    dinero -= 30;
                } else {
                    cout << "Decidiste no comprar el amuleto o no tienes suficiente dinero.\n";
                }
                break;
            case 4:
                cout << "Descansas y recuperas algo de energía.\n";
                vida += 10;
                break;
            case 5:
                cout << "¡Gracias por jugar el juego!\n";
                return 0;
            default:
                cout << "Opción inválida. Por favor, elige de nuevo.\n";
                break;
        }

        if (vida <= 0) {
            cout << "¡Fin del juego! Tus puntos de vida se han agotado.\n";
            return 0;
        }

        // Muestra las estadísticas actuales del usuario
        cout << "Tu vida: " << vida << " puntos\n";
        cout << "Tu dinero: " << dinero << " monedas\n";
    }

    return 0;
}
