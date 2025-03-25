/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Diseño y Análisis de Algoritmos
 * Práctica 5: Algoritmos Voraces
 * 
 * @brief File for the CollectionVehicle class
 * @author Martín José Marrero Quintans
 * @since March 25th, 2025
 * @see ./documentation
 */

#ifndef COLLECTION_VEHICLE_H
#define COLLECTION_VEHICLE_H

#include "vehicle.h"
#include "transfer-station.h"

class CollectionVehicle : public Vehicle {
 public:
  TransferStation* GetNearestTransferStation(); // TODO
 private:
  Depot* depot_;
  int remaining_operative_time_;
};

#endif // COLLECTION_VEHICLE_H