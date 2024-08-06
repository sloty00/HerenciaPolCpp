# Proyecto de Herencia y Polimorfismo en C++

Este proyecto demuestra el uso de herencia y polimorfismo en C++ mediante la implementación de un sistema que clasifica y gestiona diferentes tipos de animales. El programa incluye un menú interactivo que permite al usuario seleccionar un animal y mostrar información sobre su tipo y dieta.

## Estructura del Proyecto

### Clases

1. **Animal**: Clase base que define la interfaz común para todos los animales. Contiene métodos virtuales puros para obtener la dieta y el tipo del animal.
   
2. **Ave**: Clase derivada de `Animal`, representa un ave. Contiene una implementación específica de la dieta.
   
3. **Perro**: Clase derivada de `Animal`, representa a un perro. Contiene una implementación específica de la dieta.
   
4. **Bovino**: Clase derivada de `Animal`, representa un bovino. Contiene una implementación específica de la dieta.
   
5. **Felino**: Clase derivada de `Animal`, representa a un felino. Contiene una implementación específica de la dieta.

6. **Gallina**: Clase derivada de `Ave`, representa una gallina. Específicamente, un tipo de ave que come gusanos.

7. **Vaca**: Clase derivada de `Bovino`, representa una vaca. Específicamente, un tipo de bovino que come pasto.

8. **León**: Clase derivada de `Felino`, representa un león. Específicamente, un tipo de felino que come carne.

### Funcionalidades

- **Menú Interactivo**: Permite al usuario seleccionar un animal de una lista y muestra la información sobre su tipo y dieta.
  - **1. Gallina**: Muestra que es un ave y que come gusanos.
  - **2. Perro**: Muestra que es un perro y que come pellets.
  - **3. Vaca**: Muestra que es un bovino y que come pasto.
  - **4. León**: Muestra que es un felino y que come carne.

## Requisitos

- **Compilador**: Visual Studio Professional (o cualquier otro compilador de C++ compatible con C++11 o superior).
- **Sistema Operativo**: Compatible con Windows, ya que el proyecto está diseñado para ejecutarse en Visual Studio Professional.
- **Conocimientos Previos**: Conocimiento básico de C++, herencia y polimorfismo.
- **Software Necesario**: El proyecto debe ser abierto y compilado en Visual Studio Professional. Asegúrate de tener Visual Studio Professional instalado en tu sistema.
