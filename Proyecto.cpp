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
        cout << "2. Investigar un planeta alienígena\n";
        cout << "3. Enfrentar una nave enemiga\n";
        cout << "4. Descansar en la estación espacial\n";
        cout << "5. Terminar la aventura\n";
        cout << "Tu elección: ";
        cin >> opcionUsuario;

        switch (opcionUsuario) {
            case 1:
                cout << "Te adentras en un remolino estelar y encuentras una fuente de energía pura.\n";
                cout << "Tu energía aumenta en 20 puntos.\n";
                energia += 20;
                break;
            case 2:
                cout << "Aterrizas en un mundo alienígena y descubres una reliquia tecnológica.\n";
                cout << "Tu vida aumenta en 10 puntos y ganas conocimientos alienígenas.\n";
                vida += 10;
                break;
            case 3:
                cout << "Te enfrentas a una nave enemiga y libras una feroz batalla espacial.\n";
                cout << "Tu vida disminuye en 30 puntos, pero obtienes valioso botín.\n";
                vida -= 30;
                break;
            case 4:
                cout << "Te relajas y reabasteces en la estación espacial.\n";
                cout << "Recuperas 15 puntos de vida y 10 puntos de energía.\n";
                vida += 15;
                energia += 10;
                break;
            case 5:
                cout << "¡Tu aventura en el espacio ha terminado por ahora!\n";
                return 0;
            default:
                cout << "Opción inválida. Por favor, elige de nuevo.\n";
                break;
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
