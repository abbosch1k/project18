#include <iostream>
#include <set>
#include <random>
using namespace std;

int main(){
    set<int> s;
    mt19937 gen(random_device{}());
    uniform_int_distribution<> d(1,10);

    while(s.size()<5)
        s.insert(d(gen));

    for(int x:s) cout<<x<<" ";
}
