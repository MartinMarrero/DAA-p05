/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Diseño y Análisis de Algoritmos
 * Práctica 5: Algoritmos Voraces
 * 
 * @brief File for the Vehicle class
 * @author Martín José Marrero Quintans
 * @since March 25th, 2025
 * @see ./documentation
 */

#include <string>
#include "route.h"

struct Depot {
  int x_coordinate;
  int y_coordinate;
};

class Vehicle {
 public:
  Vehicle(std::string id, int capacity);
  ~Vehicle();
  std::string get_id()                     { return id_; }
  int get_capacity()                       { return capacity_; }
  int get_current_load()                   { return current_load_; }
  Route* get_route()                       { return route_; }
  void set_route(Route* route)             { route_ = route; }
  void set_current_load(int current_load)  { current_load_ = current_load; }
  void add_load(int load)                  { current_load_ += load; }
  void remove_load(int load)               { current_load_ -= load; }
  // void print();
  
 private: 
  std::string id_;
  int capacity_;
  int current_load_;
  Route* route_;
};