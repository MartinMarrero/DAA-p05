/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Diseño y Análisis de Algoritmos
 * Práctica 5: Algoritmos Voraces
 * 
 * @brief File for the Vehicle class implementation
 * @author Martín José Marrero Quintans
 * @since March 25th, 2025
 * @see ./documentation
 */

#include "lib/vehicle.h"

Vehicle::Vehicle(std::string id, int capacity) {
  id_ = id;
  capacity_ = capacity;
  current_load_ = 0;
  route_ = nullptr;
}

Vehicle::~Vehicle() {
  delete route_;
}