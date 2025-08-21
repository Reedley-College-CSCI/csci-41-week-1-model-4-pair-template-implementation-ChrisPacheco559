// Pair.h
// Christopher Pacheco
#ifndef PAIR_H
#define PAIR_H

template <typename T>
class Pair {
private:
    T first;
    T second;
public:
    Pair();
    Pair(T f, T s);
    T getFirst() const;
    T getSecond() const;
    void setFirst(T f);
    void setSecond(T s);
};
#endif