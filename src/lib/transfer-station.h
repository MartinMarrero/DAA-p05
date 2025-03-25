/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Diseño y Análisis de Algoritmos
 * Práctica 5: Algoritmos Voraces
 * 
 * @brief File for the TransferStation class
 * @author Martín José Marrero Quintans
 * @since March 25th, 2025
 * @see ./documentation
*/

#ifndef TRANSFER_STATION_H
#define TRANSFER_STATION_H

#include <string>
#include <queue>
#include "collection-vehicle.h"

class TransferStation {
 private:
  std::string id_;
  std::pair<int, int> coordinates_;
  std::queue<CollectionVehicle*> collection_vehicles_;
};

#endif // TRANSFER_STATION_H