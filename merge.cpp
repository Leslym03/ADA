#include<iostream>
#include <math.h> 
#include <ctime> 
#include <cstdlib>
using namespace std;

float t0, t1;

void intercala(int A[], int p, int q, int r){
	int B[r+1];
	for (int i=p; i<= q; i++)
		B[i] = A[i];
	for (int j=q+1; j<= r; j++)
		B[r+q+1-j] = A[j];
	int i=p;
	int j=r;
	for (int k=p; k<=r; k++){
		if(B[i]<= B[j]){
			A[k]=B[i];
			i=i+1;
		}
		else{
			A[k]=B[j];
			j=j-1;
		}
	}
}


void mergeSort(int A[],int p,int r){
	if(p<r){
		int q = floor ((p+r)/2);
		mergeSort(A,p,q-1);
		mergeSort(A,q+1,r);
		intercala(A,p,q,r);
	}
}

int main(){
    //100000
	int size =1000;
    int arr[size];
    for(int i=0; i<size; i++)
        arr[i] = rand();        
	
	mergeSort(arr,0,size-1);
	
	t0=clock();
	t1 = clock();
	 
	double time = (double(t1-t0)/CLOCKS_PER_SEC);
	cout << "Execution Time: " << time << endl;
	
	return 0;
}
