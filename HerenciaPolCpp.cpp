// HerenciaPolCpp.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>

// Clase base Animal
class Animal {
public:
    // Constructor
    Animal(const std::string& nombre, const std::string& tipo) : nombre(nombre), tipo(tipo) {}

    // Método virtual puro para obtener la dieta
    virtual std::string obtenerDieta() const = 0;

    // Método para mostrar información del animal
    void mostrarInfo() const {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Tipo: " << tipo << std::endl;
        std::cout << "Dieta: " << obtenerDieta() << std::endl;
    }

protected:
    std::string nombre;
    std::string tipo;
};

// Clase derivada Ave
class Ave : public Animal {
public:
    Ave(const std::string& nombre) : Animal(nombre, "Ave") {}

    // Implementación del método obtenerDieta para Ave
    std::string obtenerDieta() const override {
        return "Gusanos";
    }
};

// Clase derivada Perro
class Perro : public Animal {
public:
    Perro(const std::string& nombre) : Animal(nombre, "Perro") {}

    // Implementación del método obtenerDieta para Perro
    std::string obtenerDieta() const override {
        return "Pellet";
    }
};

// Clase derivada Bovino
class Bovino : public Animal {
public:
    Bovino(const std::string& nombre) : Animal(nombre, "Bovino") {}

    // Implementación del método obtenerDieta para Bovino
    std::string obtenerDieta() const override {
        return "Pasto";
    }
};

// Clase derivada Felino
class Felino : public Animal {
public:
    Felino(const std::string& nombre) : Animal(nombre, "Felino") {}

    // Implementación del método obtenerDieta para Felino
    std::string obtenerDieta() const override {
        return "Carne";
    }
};

void mostrarMenu() {
    std::cout << "Selecciona un animal para ver su información:" << std::endl;
    std::cout << "1. Gallina" << std::endl;
    std::cout << "2. Perro" << std::endl;
    std::cout << "3. Vaca" << std::endl;
    std::cout << "4. León" << std::endl;
    std::cout << "5. Salir" << std::endl;
}

int main() {
    int opcion;
    bool salir = false;

    while (!salir) {
        mostrarMenu();
        std::cout << "Ingresa tu opción (1-5): ";
        std::cin >> opcion;
        std::cin.ignore();  // Limpiar el buffer de entrada

        switch (opcion) {
        case 1: {
            Ave gallina("Gallina");
            gallina.mostrarInfo();
            break;
        }
        case 2: {
            Perro perro("Perro");
            perro.mostrarInfo();
            break;
        }
        case 3: {
            Bovino vaca("Vaca");
            vaca.mostrarInfo();
            break;
        }
        case 4: {
            Felino leon("León");
            leon.mostrarInfo();
            break;
        }
        case 5:
            salir = true;
            std::cout << "Saliendo del programa..." << std::endl;
            break;
        default:
            std::cout << "Opción no válida. Por favor, elige una opción entre 1 y 5." << std::endl;
            break;
        }
        std::cout << std::endl;
    }

    return 0;
}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
