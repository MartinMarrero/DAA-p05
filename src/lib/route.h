/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Diseño y Análisis de Algoritmos
 * Práctica 5: Algoritmos Voraces
 * 
 * @brief File for the Route class
 * @author Martín José Marrero Quintans
 * @since March 25th, 2025
 * @see ./documentation
 */

#ifndef ROUTE_H
#define ROUTE_H

#include "linked-list.h"
#include "vehicle.h"

template <class T>
class Route {
 public:
  Route();
  ~Route();
  int CalculateCost();
  void AddStop(T stop);
  void RemoveStop(T stop);
  void SetVehicle(Vehicle* vehicle);
  Vehicle* GetVehicle();
  int GetTotalDistance();
  LinkedList<T> GetStops();
  void PrintRoute();
 private:
  LinkedList<T> stops_;
  Vehicle* vehicle_;
  int total_distance_;
};

#endif // ROUTE_H