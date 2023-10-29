/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Celeste González Díaz
 * @email alu0101648361@ull.edu.es
 * @date Oct 30 2023
 * @brief This program takes a decimal number and changes it to binary without using vectors, strings or arrays.
 */

#include <iostream>

void PrintProgramPurpose() {
  std::cout << "Este programa toma un número decimal y lo cambia a binario sin usar std::vector std::array o std::string" << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "Este programa ha sido ejecutado con el número de parámetros incorrecto" << std::endl << std::endl;
    std::cout << "Este programa se debería llamar" << argv[0] << std::endl;
    return false;
  }
  return true;
}

void DecimalToBinary(int decimal);

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 1)) {
    return 345;
  }
  std::cout << "Todo parece correcto. Continuemos con su ejecucción..." << argc << std::endl;
  std::cout << "Ingrese un número decimal: ";
  int number(0); 
  std::cin >> number;
  DecimalToBinary(number); 
  return 0;
}

void DecimalToBinary(int decimal) {
  int binary{0}, aux{1};
    while (decimal > 0) {
       	int resto = decimal%2;
	decimal = decimal/2;
	binary = resto*aux + binary;
	aux = aux*10;
  }
  std::cout << "El número correspondiente en binario es: " << binary << std::endl;
}

