/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Diseño y Análisis de Algoritmos
 * Práctica 5: Algoritmos Voraces
 * 
 * @brief File for the CollectionZone class
 * @author Martín José Marrero Quintans
 * @since March 25th, 2025
 * @see ./documentation
 */

#ifndef COLLECTION_ZONE_H
#define COLLECTION_ZONE_H

#include <string>
#include "vehicle.h"

class CollectionZone {
public:
  CollectionZone(const std::string& id, const std::pair<int, int>& coordinates, int demand);
  ~CollectionZone();

  std::string GetId()                  const { return id_;          }
  std::pair<int, int> GetCoordinates() const { return coordinates_; }
  int GetDemand()                      const { return demand_;      }
  Vehicle* GetVehicle()                const { return vehicle_;     }

  void SetVehicle(Vehicle* vehicle)          { vehicle_ = vehicle;  }

 private:
  std::string id_;
  std::pair<int, int> coordinates_;
  int demand_;
  Vehicle* vehicle_;
};

#endif // COLLECTION_ZONE_H