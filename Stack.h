#include<iostream>
#include <deque>
#include <vector>
#include <set>
using namespace std ;
#ifndef BUILDING_STACK_H
#define BUILDING_STACK_H
class Stack {
private:
    deque < int > passengers ;
public:
    set <int> UniqueFloors(vector < int > v){
        set < int > st ;
        for(int i = 0 ; i < v.size() ; ++i) {
            st.insert(v[i]) ;
        }
        return st ;
    }
    void push (vector < int > v) {
        for(auto floor : UniqueFloors(v)) {
            passengers.push_front(floor);
        }
    }
    void pop() {
       passengers.pop_back() ;
    }
};


#endif //BUILDING_STACK_H
