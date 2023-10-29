/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * @author Celeste González Díaz
 * @email alu0101648361@ull.edu.es
 * @date Oct 30 2023
 * @brief indicates whether a year is a leap year or not
 */

#include <iostream>

void PrintProgramPurpose() {
  std::cout << "Este programa te dice si un año es biciesto o no" << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "Este programa ha sido ejecutado con el número de parámetros incorrecto" << std::endl << std::endl;
    std::cout << "Este programa se debería llamar" << argv[0] << std::endl;
    return false;
  }
  return true;
}

void AñoBisiesto(int año);

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 1)) {
    return 345;
}
  std::cout << "Todo parece correcto. Continuemos con su ejecucción..." << argc << std::endl;
  int año;
  std::cout << "Ingrese un año: ";
  std::cin >> año;
  AñoBisiesto(año);
  return 0;
}

void AñoBisiesto(int año) {
  bool esBisiesto = false;
    if ((año % 4 == 0 && año % 100 != 0) || año % 400 == 0) {
        esBisiesto = true;
}
    if (esBisiesto) {
        std::cout << año << " es un año bisiesto." << std::endl;
}
    else {
        std::cout << año << " no es un año bisiesto." << std::endl;
  }
}
