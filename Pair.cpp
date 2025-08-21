// Pair.cpp
// Christopher Pacheco
// Implement member functions here

#include "Pair.h"

// The constructor sets default to 0 
template <typename T>
Pair<T>::Pair() {
	first = 0;
	second = 0;
}

// The constructor with the parameter sets to data field
template <typename T>
Pair<T>::Pair(T f, T s) {
	first = f;
	second = s; 
}

// Getters returns the data field 
template <typename T>
T Pair<T>::getFirst() const {
	return first;
}

template <typename T>
T Pair<T>::getSecond() const {
	return second;
}

// Setters initialize with the parameter
template <typename T>
void Pair<T>::setFirst(T f) {
	first = f;
}

template <typename T>
void Pair<T>::setSecond(T s) {
	second = s;
}


