/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Celeste González Díaz
 * @email alu0101648361ull.edu.es
 * @date Oct 30 2023
 * @brief this program takes a binary number and changes it to decimal without using vectors, strings or arrays.
 */

#include <iostream>
#include <cmath>

void PrintProgramPurpose() {
  std::cout << "Este programa toma un número binario y lo cambia a decimal sin usar std::vector std::array o std::string" << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "Este programa se ha ejecutado con el número de parámetros incorrecto" << std::endl << std::endl;
    std::cout << "Este programa se debería llamar" << argv[0] << std::endl;
    return false;
  }
  return true;
}

void BinaryToDecimal(int binario);

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 1)) {
    return 345;
  }
  std::cout << "Todo parece correcto. Continuemos con su ejecucción..." << argc << std::endl;
  int number{0};
  std::cout << "Introduzca el número binario: ";
  std::cin >> number;
  if (number%10 !=0 && number%10 !=1) {
      std::cout << "El número debe ser binario" << std::endl;
      return 0;
  }
  BinaryToDecimal(number);
  return 0;
}

void BinaryToDecimal(int binario) {
  int decimal{0}, aux{0}, count{0};
  while (binario > 0) {
    int resto = binario%10;
    binario = binario/10;
    int numero = resto * pow(2, count);
    decimal = numero + aux;
    aux = decimal;
    ++count;
  }
  std::cout << "El número decimal correspondiente es: " << decimal << std::endl;
}

