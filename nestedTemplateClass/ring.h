//
// Created by htafer on 10.02.19.
//

#ifndef NESTEDTEMPLATECLASS_RING_H
#define NESTEDTEMPLATECLASS_RING_H

#include <iostream>

using namespace std;
template<class T>
class ring {
private:
    int m_pos;
    int m_size;
    T *m_values;
public:
    class iterator;

public:
    ring(int size): m_pos(0), m_size(size), m_values(NULL){
        m_values = new T[size];
    }
    int size(){
        return m_size;
    }
    void add(T value){
        m_values[m_pos++] = value;
        if(m_pos == m_size){
            m_pos =0;
        }
    }
    T &get(int i){
        return m_values[i];
    }
    ~ring(){
        delete [] m_values;
    }

    iterator begin(){
        return iterator(0, *this);
    }
    iterator end(){
        return iterator(m_size, *this);
    }
};

template <class T>
class ring<T>::iterator{
private:
    int m_pos;
    ring &m_ring;
public:
    iterator(int pos, ring &aRing): m_pos(pos), m_ring(aRing){

    }
    void print(){
        cout << "Hello from iterator:" << endl;
    }
    iterator &operator++(int){
        m_pos++;
        return *this;
    }

    iterator &operator++(){
            m_pos++;
            return *this;
    }

    T &operator*(){
        return m_ring.get(m_pos);
    }

    bool operator!=(const iterator &other) const{
        return m_pos != other.m_pos;
    }
};
#endif //NESTEDTEMPLATECLASS_RING_H
