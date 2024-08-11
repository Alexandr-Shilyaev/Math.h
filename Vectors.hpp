#ifndef Vectors_hpp
#define Vectors_hpp

#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

template<typename T>
class Vectors
{
    private:
        int vec_size;
        vector<T> vec;
     public:
    Vectors(vector<T> my_vec) {
        vec = my_vec;
        vec_size = vec.size();
    }
    int getVecSize() {return vec_size; }
    vector<T> getVec() { return vec; }
};


#endif
