/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Diseño y Análisis de Algoritmos
 * Práctica 5: Algoritmos Voraces
 * 
 * @brief File for the TransportationVehicle class
 * @author Martín José Marrero Quintans
 * @since March 25th, 2025
 * @see ./documentation
 */

#ifndef TRANSPORTATION_VEHICLE_H
#define TRANSPORTATION_VEHICLE_H

 #include "vehicle.h"
 #include "transfer-station.h"
 
 class TransportationVehicle : public Vehicle {
  public:
   bool SyncWithCollectionVehicles(); // TODO
  private:
   Depot* depot_;
   int remaining_operative_time_;
 };
 
  #endif // TRANSPORTATION_VEHICLE_H