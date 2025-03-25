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


template <class T>
struct Node {
  T element;
  Node* next;
};

template <class T>
class LinkedList {
 public:
  LinkedList();
  ~LinkedList();
  void Insert(T element);
  void Remove(T element);
  void Clear();
  bool IsEmpty();
  int Size() { return size_; }
  T Get(int index);
  T operator[](int index);
 private:
  Node<T>* head_;
  int size_;
};