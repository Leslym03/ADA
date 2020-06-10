#include <bits/stdc++.h> 
#include <ctime> 
#include <cstdlib>
using namespace std; 

float t0, t1;

int main(){
    //100000
	int size =1000;
    int arr[size];
    for(int i=0; i<size; i++)
        arr[i] = rand();        
	
	sort(arr,arr+size);
	
	t0=clock();
	t1 = clock();
	 
	double time = (double(t1-t0)/CLOCKS_PER_SEC);
	cout << "Execution Time: " << time << endl;
	
	return 0;
}
