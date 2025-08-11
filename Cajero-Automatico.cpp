#include <iostream>
#include <string>
using namespace std;

class Cajero {
private:
    string usuario;   
    string clave;     
    double saldo;     

public:
    Cajero(string u, string c, double s = 0.0) {
        usuario = u;
        clave = c;
        saldo = s;
    }

    bool acceder() {
        string uIngresado, cIngresada;
        cout << "\nIngrese numero de cliente: ";
        cin >> uIngresado;
        cout << "Ingrese clave: ";
        cin >> cIngresada;

        if (uIngresado == usuario && cIngresada == clave) {
            cout << "\nAcceso concedido.\n";
            system("PAUSE");
            return true;
        } else {
            cout << "\nUsuario o clave incorrectos.\n";
            system("PAUSE");
            return false;
        }
    }
    
        void menu() {
        int opcion2;
        double monto;

        while (true) {
            system("CLS");
            cout << "***MENU CAJERO***\n\n";
            cout << "1. Depositar\n";
            cout << "2. Extraer\n";
            cout << "3. Ver Saldo\n";
            cout << "4. Fin\n\n";
            cout << "Ingrese opcion: ";
            cin >> opcion2;

            switch (opcion2) {
            case 1: // Depositar
                cout << "\nIngrese monto a depositar: $";
                cin >> monto;
                if (monto > 0) {
                    saldo += monto;
                    cout << "Deposito realizado con exito.\n";
                } else {
                    cout << "Monto invalido.\n";
                }
                system("PAUSE");
                break;

            case 2: 
                cout << "\nIngrese monto a extraer: $";
                cin >> monto;
                if (monto <= 0) {
                    cout << "Monto invalido.\n";
                } else if (static_cast<int>(monto) % 10 != 0) {
                    cout << "El cajero no entrega monedas. El monto debe terminar en 0.\n";
                } else if (monto > saldo) {
                    cout << "Saldo insuficiente.\n";
                } else {
                    saldo -= monto;
                    cout << "Extraccion realizada con exito.\n";
                }
                system("PAUSE");
                break;

            case 3: 
                cout << "\nSaldo actual: $" << saldo << "\n";
                system("PAUSE");
                break;

            case 4: 
                return;

            default:
                cout << "\nOpcion invalida.\n";
                system("PAUSE");
            }
        }
    }
};

int main() {
    Cajero cajero1("12345", "abc123", 1000.0);

    int opcion;
    while (true) {
        system("CLS");
        cout << "***INGRESO***\n\n";
        cout << "1. Acceder\n";
        cout << "2. Fin\n\n";
        cout << "Ingrese opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1: // Acceder
            if (cajero1.acceder()) {
                cajero1.menu();
            }
            break;

        case 2:
            return 0;

        default:
            cout << "\nOpcion invalida.\n";
            system("PAUSE");
        }
    }
}
