/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Diseño y Análisis de Algoritmos
 * Práctica 5: Algoritmos Voraces
 * 
 * @brief File for the CollectionZone class implementations
 * @author Martín José Marrero Quintans
 * @since March 25th, 2025
 * @see ./documentation
 */

#include "collection-zone.h"

CollectionZone::CollectionZone(const std::string& id, const std::pair<int, int>& coordinates, int demand) {
  id_ = id;
  coordinates_ = coordinates;
  demand_ = demand;
  vehicle_ = nullptr;
}

CollectionZone::~CollectionZone() {
  delete vehicle_;
}