#include <iostream>
#include "proto.hpp"
using namespace std;

int main() {
    vector131<int> vec;
    vec.push_back();
}

{
    private:
    int siz;                
    int numEr;             
    int *arr;               
    
    void initialize(int from){
        for (size_t i = from; i < siz; i++){
            arr[i] = 0;
        }
    }
    void expand(){
        siz *= 2;
        int *tempArr = new int [siz];
        for (size_t i = 0; i <numEr; i++){
            tempArr[i] = arr[i];
        }
        delete[] arr;
        arr = tempArr;
        initialize(numEr);
    }
    
    public:
    IntArr(){
        siz=10;
        numEr = 0;
        arr = new int [siz];
    }
    ~IntArr(){
        delete[]arr;        
    }
    void add(int e1){
        if (numEr >= siz){
            expand();
        }
        arr[numEr++] = e1;
    }
    int getAt(int index){
        if(index <0 || index >= numEr){
             throw("Error");
        }
        return arr[index];
    }
    void popBack(){
        if (numEr > 0){
            if (numEr){
                arr[--numEr] = 0; 
            }
            else{
                throw("Error");
            }
            
        }
    }   
    int numEr(){
        return numEr; 
    }
};
int main(){
    IntArr arr;
    int size_array, size;
    cout << "Enter the size of the array: " << endl;
    cin >> size_array;
    arr.add(size_array);
    
    for (size_t i = 0; i < arr.getNumEr();i++){
        cout << i << ": " << arr.getAt(i) << endl;
    }
    system("PAUSE");
    return 0;
} 
