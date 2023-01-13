#include <iostream>
using namespace std;
void step(int n);
int m =5;
int main(int argc,char** argv){
    step(m);
    return 0;
}
void step(int n){
    if(n>=1){
            step(n-1);
            cout << m-n+1;
    }
}