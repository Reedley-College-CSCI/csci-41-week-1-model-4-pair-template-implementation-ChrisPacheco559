// Pair.cpp
// Your names
// Implement member functions here
#define PAIR_H

template <typename T>
Pair <T>::Pair(T f, T s) {
	first = f;
	second = s; 
}

template <typename T> 
T Pair <T>::getFirst() const {
	return first;
}

template <typename T> 
T Pair <T>::getSecond() const {
	return second;
}

template <typename T> 
void Pair <T>::setFirst(T f) {
	
}

