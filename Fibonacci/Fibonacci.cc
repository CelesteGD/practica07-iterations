/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * @author Celeste González Díaz
 * @email alu0101648361@ull.edu.es
 * @date Oct 30
 * @brief this program prints on the screen the figures of the Fibonacci series that you want
 * 
 */

#include <iostream>

void PrintProgramPurpose() {
  std::cout << "Este programa imprime en pantalla las cifras de la serie de Fibonacci que desee" << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "Este programa ha sido ejecutado con el número incorrecto de parámetros" << std::endl << std::endl;
    std::cout << "Este programa debería llamarse" << argv[0] << std::endl;
    return false;
  }
  return true;
}

void DigitosDeFibonacci(int numero); 

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 1)) {
    return 345;
}
  std::cout << "¡Todo está perfecto! Vamos a continuar con la ejecucción..." << argc << std::endl;  
  int numero;
  std::cout << "Ingrese la cantidad de términos de la Serie de Fibonacci que desea imprimir: ";
  std::cin >> numero;
  DigitosDeFibonacci(numero);
  std::cout << std::endl; 
    return 0;
}

void DigitosDeFibonacci(int numero) {
  int primero(0);
  int segundo(1);

    if (numero >= 1) {
        std::cout << "Los primeros " << numero << " términos de la Serie de Fibonacci son:" << std::endl;
        std::cout << primero << " ";
}

    if (numero >= 2) {
        std::cout << segundo << " ";
}

    for (int i(3); i <= numero; i++) {
        int siguiente = primero + segundo;
        std::cout << siguiente << " ";

        primero = segundo;
        segundo = siguiente;
  }
}

