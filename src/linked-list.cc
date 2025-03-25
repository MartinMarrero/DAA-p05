#include "lib/linked-list.h"

template <class T>
LinkedList<T>::LinkedList() {
  head_ = nullptr;
  size_ = 0;
}

template <class T>
LinkedList<T>::~LinkedList() {
  Clear();
}

template <class T>
void LinkedList<T>::Insert(T element) {
  Node<T>* new_node = new Node<T>;
  new_node->element = element;
  new_node->next = head_;
  head_ = new_node;
  size_++;
}

template <class T>
void LinkedList<T>::Remove(T element) {
  Node<T>* current = head_;
  Node<T>* previous = nullptr;
  while (current != nullptr) {
    if (current->element == element) {
      if (previous == nullptr) {
        head_ = current->next;
      } else {
        previous->next = current->next;
      }
      delete current;
      size_--;
      return;
    }
    previous = current;
    current = current->next;
  }
}

template <class T>
void LinkedList<T>::Clear() {
  Node<T>* current = head_;
  while (current != nullptr) {
    Node<T>* next = current->next;
    delete current;
    current = next;
  }
  head_ = nullptr;
  size_ = 0;
}

template <class T>
bool LinkedList<T>::IsEmpty() {
  return size_ == 0;
}

template <class T>
T LinkedList<T>::Get(int index) {
  Node<T>* current = head_;
  for (int i = 0; i < index; i++) {
    current = current->next;
  }
  return current->element;
}

template <class T>
T LinkedList<T>::operator[](int index) {
  return Get(index);
}