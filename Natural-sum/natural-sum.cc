/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Celeste González Díaz
 * @email alu0101648361@ull.edu.es
 * @date Oct 30 2023
 * @brief This program takes a number and calculates the sum of its digits 
 * 
 */

#include <iostream>

void PrintProgramPurpose() {
  std::cout << "This program takes a number and calculates the sum of its digits" << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "Este programa ha sido ejecutado con  el número equivocado de parámetros" << std::endl << std::endl;
    return false;
  }
  return true;
}

void SumDigits(int number);

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 1)) {
    return 345;
  }
  int numero{0};
  std::cin >> numero;
  SumDigits(numero);
	return 0;
}

void SumDigits(int number) {
	int resto{0}, aux{0}, suma{0};
	while (number%10 != 0) {
		resto = number%10;
		number = number/10;
		suma = resto + aux;
		aux = suma;
	}
	std::cout << suma << std::endl;
}
