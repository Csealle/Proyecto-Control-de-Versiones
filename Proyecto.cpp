#include <iostream>
#include <string>

using namespace std;

int main() {
    int opcionUsuario;
    int vida = 100; // Puntos de vida del usuario
    int energia = 50; // Energía del usuario

    while (true) {
        cout << "\n*** Bienvenido al Espacio ***\n";
        cout << "\n--- Menú Principal ---\n";
        cout << "1. Explorar la galaxia desconocida\n";
        cout << "2. Terminar la aventura\n";
        cout << "Tu elección: ";
        cin >> opcionUsuario;

        switch (opcionUsuario) {
            case 1:
                cout << "\n--- Explorar la Galaxia Desconocida ---\n";
                cout << "1. Investigar un campo de asteroides\n";
                cout << "2. Investigar un agujero de gusano\n";
                cout << "3. Explorar un planeta distante\n";
                cout << "4. Escanear una nave abandonada\n";
                cout << "5. Volver al menú principal\n";
                cout << "Tu elección: ";
                cin >> opcionUsuario;

                switch (opcionUsuario) {
                    case 1:
                        cout << "Encuentras valiosos minerales en los asteroides.\n";
                        cout << "Tu energía aumenta en 15 puntos.\n";
                        energia += 15;
                        break;
                    case 2:
                        cout << "Exploras el agujero de gusano y encuentras nuevas coordenadas.\n";
                        cout << "Tu vida aumenta en 10 puntos.\n";
                        vida += 10;
                        break;
                    case 3:
                        cout << "Descubres un ecosistema sorprendente en el planeta.\n";
                        cout << "Obtienes conocimiento sobre nuevas formas de vida.\n";
                        break;
                    case 4:
                        cout << "Encuentras tecnología útil en la nave abandonada.\n";
                        cout << "Tu energía aumenta en 20 puntos.\n";
                        energia += 20;
                        break;
                    case 5:
                        break; // Regresar al menú principal
                    default:
                        cout << "Has tomado una decisión peligrosa...\n";
                        cout << "¡Tu nave ha sido destruida! Fin del juego.\n";
                        return 0;
                }
                break;
            case 2:
                cout << "¡Gracias por jugar el juego!\n";
                return 0;
            default:
                cout << "Has elegido una opción inesperada...\n";
                cout << "¡Tu nave ha sido destruida! Fin del juego.\n";
                return 0;
        }

        if (vida <= 0 || energia <= 0) {
            cout << "¡Tu nave ha sido destruida! Fin del juego.\n";
            return 0;
        }

        // Muestra las estadísticas actuales del usuario
        cout << "Tu vida: " << vida << " puntos\n";
        cout << "Tu energía: " << energia << " unidades\n";
    }

    return 0;
}
