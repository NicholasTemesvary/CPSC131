#include <iostream>
#include "proto.hpp"
using namespace std;

int main() {
    vector131<int> vec;
    vec.push_back();
}

{
    private:        /*The Private initialization of the class for the vector131, this is where we initialize the integers we need, the size of the array, the biggest number of the array (which we initialize) and the array itself */
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
        delete[] arr;              /* Deletes our temporary array */
        arr = tempArr;
        initialize(numEr);
    }
    
    public:                          /* The public part of our class vector131 */
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
int main(){                          /* The part of our function that gets read and asks for imputs */
    IntArr arr;
    int size_array, size;
    cout << "Change the size of the array: " << endl;
    cin >> size_array;
    arr.add(size_array);
    
    for (size_t i = 0; i < arr.getNumEr();i++){
        cout << i << ": " << arr.getAt(i) << endl;
    }
    system("PAUSE");
    return 0;
} 
