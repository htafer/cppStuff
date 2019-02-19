//
// Created by htafer on 10.02.19.
//

#ifndef NESTEDTEMPLATECLASS_RING3_H
#define NESTEDTEMPLATECLASS_RING3_H

#include <iostream>
using namespace std;

template<class T>
class ring3{
private:
    T *m_ring;
    int m_size;
    int m_pos;

public:
    class iterator;

public:

    ring3(int size): m_ring(NULL), m_size(size), m_pos(0){
        m_ring = new T[size];
    }
    void add(T obj){
        m_ring[m_pos] = obj;
        m_pos = (++m_pos) % m_size;
    }
    int size(){
        return m_size;
    }
    int pos(){
        return m_pos;
    }
    T &get(int i){
        int index = i % m_size;
        return  m_ring[index];
    }
    iterator begin(){
        return iterator(0, *this);
    }
    iterator end(){
        return iterator(m_size, *this);
    }

};

template <class T>
class ring3<T>::iterator{
private:
    ring3 &ring;
    int m_pos;
public:
    iterator(int pos, ring3 &aRing): m_pos(pos), ring(aRing){}
    iterator &operator++(int){
        m_pos++;
        return *this;
    }
    iterator &operator++(){
        m_pos++;
        return *this;
    }
    T &operator*(){
        return ring.get(m_pos);
    }
     bool operator!=(const iterator &other) const{
        return m_pos != other.m_pos;
    }

};
#endif //NESTEDTEMPLATECLASS_RING3_H
