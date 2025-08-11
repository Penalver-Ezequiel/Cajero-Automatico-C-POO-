# Cajero-Automatico-C++-POO-
================================================================================
Proyecto Escolar: Simulador de Cajero Automático en C++
================================================================================

📌 Descripción
--------------
Este programa es un proyecto escolar desarrollado en C++ que simula un cajero 
automático básico. Está pensado para aplicar y demostrar los conocimientos 
adquiridos en el instituto sobre programación estructurada y orientada a objetos.

📋 Objetivos
------------
- Implementar el uso de clases y encapsulamiento.
- Utilizar estructuras de control (if, switch, while).
- Aplicar validaciones de entrada de usuario.
- Mantener datos persistentes durante la ejecución (saldo).
- Simular el flujo básico de un cajero real.

📂 Funcionalidad
----------------
Menú inicial:
1) Acceder → Solicita número de cliente y clave. Si son correctos, pasa al menú del cajero.
2) Fin → Cierra el programa.

Menú del cajero:
1) Depositar → Permite aumentar el saldo ingresando un monto válido.
2) Extraer → Permite retirar dinero validando:
   - Que el saldo sea suficiente.
   - Que el monto sea positivo.
   - Que el monto termine en 0 (el cajero no entrega monedas).
3) Ver Saldo → Muestra el saldo actual del cliente.
4) Fin → Regresa al menú inicial.

🔄 Funcionamiento
-----------------
- El saldo se mantiene al volver al menú inicial.
- Si se ingresa una opción inválida, el sistema lo indica y vuelve a pedir la opción.
- El cajero está configurado con un cliente de prueba:
    Usuario: 12345
    Clave: abc123
    Saldo inicial: $1000.00

💻 Requisitos
-------------
- Compilador C++ (G++ recomendado).
- Sistema operativo que soporte `system("CLS")` y `system("PAUSE")` (Windows).
- Consola o terminal para la ejecución.

▶️ Instrucciones de uso
-----------------------
1. Compilar el programa:
   g++ cajero.cpp -o cajero
2. Ejecutar:
   cajero
3. Ingresar la opción deseada según el menú.
4. En "Acceder", usar las credenciales del cliente de prueba.

👨‍💻 Autor
----------
Proyecto escolar realizado en el IRSO para la materia Estructura de datos. 
[Estructura de Datos / Programación en C++].

Versión: 1.0
Fecha: 10/11/2023
================================================================================
