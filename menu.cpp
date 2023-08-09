#include <iostream>
#include <conio.h>

#define ANSI_COLOR_CYAN "\x1b[94m"
#define ANSI_COLOR_RESET "\x1b[0m"

#define ANSI_BACKGROUND_BLUE "\x1b[44m"
#define ANSI_BACKGROUND_RESET "\x1b[49m"


using namespace std;

void regresarMenu() {
    while (true) {
        if (_kbhit()) {
            int tecla = _getch();
            if (tecla == 27) {
                break;
            }
        }
    }
}

void mostrarMenu(int opcionActual) {
    cout << "\t\t\t=== MENU ===" <<  endl;
    for (int i = 1; i <= 6; i++) {
        if (i == opcionActual) {
            cout << "\t> " << ANSI_COLOR_CYAN;
        }
        else {
            cout << "  ";
        }
        switch (i) {
            case 1:
                cout << "Registrar Nueva Persona" << ANSI_COLOR_RESET << endl;
                break;
            case 2:
                cout << "Buscar Registro de Persona" << ANSI_COLOR_RESET << endl;
                break;
            case 3:
                cout << "Editar Registro de Persona" << ANSI_COLOR_RESET << endl;
                break;
            case 4:
                cout << "Eliminar Registro de Persona" << ANSI_COLOR_RESET << endl;
                break;
            case 5:
                cout << "Imprimir Todos los Registros" << ANSI_COLOR_RESET << endl;
                break;
            case 6:
                cout << "Salir" << ANSI_COLOR_RESET << endl;
                break;
        }
    }
}

int operarMenu() {
	
int opcionActual = 1;
    while (true) {
        system("cls");

        mostrarMenu(opcionActual);

        char tecla = _getch();

        switch (tecla) {
            case 72:
                opcionActual = (opcionActual > 1) ? opcionActual - 1 : 6;
                break;
            case 80:
                opcionActual = (opcionActual < 6) ? opcionActual + 1 : 1;
                break;
            case 13:
                system("cls");
                switch (opcionActual) {
                    case 1:
                        cout << "\t === Registrar Nueva Persona ===" << endl;
                         //Ingresar funciones
                        break;
                    case 2:
                        cout << "\t === Buscar Registro de Persona Por Cedula===" << endl;
                        break;
	                case 3:
                      	cout << "\t === Editar Registro de Persona ===" << endl;
                      	break;
                    case 4:
                        cout << "\t === Eliminar Registro de Persona ===" << endl;
                        break;
                    case 5:
                        cout << "\t === Imprimir Todos los Registros ===" << endl;
                        break;
                    case 6:
                        cout << "Saliendo del programa..." << endl;
                        return 0;
                }
                _getch();
                regresarMenu();
                break;
        }
    }
    return 0;
}


int main() {
	operarMenu();
	return 0;
}