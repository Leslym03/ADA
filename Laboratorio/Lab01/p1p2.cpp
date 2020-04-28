#include <iostream>
using namespace std;

int main(){
    //Cambie el size segun al tamaño

    int size =1000000;
    int arr[size];
    for(int i=0; i<size; i++)
        arr[i] = i+1;
    return 0;

    /*
    Tiempo:
    10: 
        real    0m0,003s
        user    0m0,003s
        sys     0m0,000s
    1 000: 
        real    0m0,003s
        user    0m0,003s
        sys     0m0,000s
    100 000:
        real    0m0,004s
        user    0m0,000s
        sys     0m0,003s
    1 000 000:
        real    0m0,009s
        user    0m0,009s
        sys     0m0,000s
    */

}