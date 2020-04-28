#include<iostream>
using namespace std;

int comparacionB = 0;
int asignacionB = 0;
int memoria = 0;
int comparacionI = 0;
int asignacionI = 0;

void swap(int *xp, int *yp){  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;
    asignacionB +=3;  
}  
  
//Bubble sort  
void bubbleSort(int arr[], int n){  
    int i, j;  
    for (i = 0; i < n-1; i++){   
    asignacionB += 2;
    comparacionB = 1;  
    for (j = 0; j < n-i-1; j++)
    asignacionB += 2;
    comparacionB = 1;  
        if (arr[j] > arr[j+1]){
            swap(&arr[j], &arr[j+1]);  
            comparacionB ++;
        }
    }
}  

//Insertion sort
void insertionSort(int arr[], int n){  
    int i, key, j;  
    for (i = 1; i < n; i++){
        asignacionI += 2;
        comparacionI = 1; 
        key = arr[i]; 
        asignacionI ++; 
        j = i - 1; 
        asignacionI ++; 
        while (j >= 0 && arr[j] > key){ 
            comparacionI +=2; 
            arr[j + 1] = arr[j];
            asignacionI++;  
            j = j - 1;  
            asignacionI++;
        }  
        arr[j + 1] = key;  
        asignacionI++;
    }  
}  

int main(){  
    int arr[] = {64, 34, 25, 12, 22, 11, 90};  
    int n = sizeof(arr)/sizeof(arr[0]);
    memoria = 50+ n*10;

    bubbleSort(arr, n); 
    cout << comparacionB*2 << endl;
    cout << asignacionB*8 << endl; 

    insertionSort(arr,n);
    cout << comparacionI*2 << endl;
    cout << asignacionI*8 << endl; 

    cout << memoria << endl;  
    return 0;  
}  