/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Diseño y Análisis de Algoritmos
 * Práctica 5: Algoritmos Voraces
 * 
 * @brief File that contains several auxiliar function definitions
 * @author Martín José Marrero Quintans
 * @since March 25th, 2025
 * @see ./documentation
 */

#include "lib/tools.h"

/**
 * @brief Check if the parameters are correct
 * @param argc Number of arguments
 * @param argv Arguments
 * @return True if the parameters are correct, false otherwise
 */
bool CheckCorrectParameters(int argc, char* argv[]) {
  return true; // This will be changed
}

/**
 * @brief Print the usage of the program
 */
void PrintUsage() {
  std::cout << "Usage: ./VRPT" << std::endl; // This will be changed
}

/**
 * @brief Print an error message
 * @param message Message to print
 */
void PrintError(const std::string& message) {
  std::cerr << "Error: " << message << std::endl;
}