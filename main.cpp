#include "Vectors.hpp"
using namespace std;

int main() {
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    Vectors<int> vec(a);
    vector<int> b = vec.getVec();
    for(int i = 0; i < b.size(); i++) {
        cout << b[i];
    }
}
