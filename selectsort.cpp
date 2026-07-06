#include <iostream>
#include <vector>
using namespace std;

void selsort(vector<int>&arr){
    for(int i=0 ; i<arr.size()-1;i++){
           int minIndex = i;

           for(int j=i+1 ; j<arr.size();j++){
            if(arr[j] < arr[minIndex])
              minIndex = j;
            
           }
    
    swap(arr[minIndex] , arr[i]);
        }
}

int main(){

   vector<int>arr = {64,25,12,22};

   selsort(arr);

   cout <<  " " << endl;
   for(int i=0 ;i<arr.size() ;i++){
    cout << arr[i] << " ";
   }
    return 0;
}
