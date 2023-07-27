#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

// Función para mostrar la tabla
void mostrarTabla(const vector<vector<string>>& tabla) {
    // Verificar si la tabla está vacía
    if (tabla.empty()) {
        cout << "La tabla está vacía." << endl;
        return;
    }

    // Obtener el número de filas y columnas de la tabla
    int filas = tabla.size();
    int columnas = tabla[0].size();

    // Mostrar los datos de la tabla en una forma cuadriculada
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << setw(10) << tabla[i][j];
        }
        cout << endl;
    }
}

int main() {
    int filas, columnas;

    // Solicitar el número de filas y columnas
    cout << "Ingrese el número de filas: ";
    cin >> filas;
    cout << "Ingrese el número de columnas: ";
    cin >> columnas;

    // Crear la tabla con tamaño filas x columnas
    vector<vector<string>> tabla(filas, vector<string>(columnas));

    // Solicitar los datos para cada celda de la tabla
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Ingrese el dato para la celda (" << i << ", " << j << "): ";
            cin >> tabla[i][j];
        }
    }

    // Mostrar la tabla
    cout << "Tabla:" << endl;
    mostrarTabla(tabla);

    return 0;
}
