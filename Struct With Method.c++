#include <iostream>
using namespace std;

struct Point{
    int x,y;
    void print(){ cout<<x<<" "<<y; }
};

int main(){
    Point p{3,4};
    p.print();
}
