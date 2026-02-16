#include <iostream>
#include <map>
using namespace std;

int main(){
    map<string,int> m{{"a",1},{"b",2}};
    for(auto& [k,v]:m)
        cout<<k<<" "<<v<<"\n";
}
