# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @email alu0101648361@ull.edu.es
# @author Celeste González Díaz
# @date 30 Oct 2023
# @brief A Makefile

CXX = g++						           # The C++ compiler command
CXXFLAGS = -std=c++17 -Wall	 	 # The C++ compiler options (C++14, preserve debug symbols and warn all)

all: binary-to-decimal

binary-to-decimal: binary-to-decimal.o 
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

.PHONY: all clean

	$(CXX) $(CXXFLAGS) -c $<

clean :
	rm -f *.o binary-to-decimal doc

