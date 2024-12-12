#include<iostream>
using namespace std;

template<typename T>
void selection_sort(T arr[],int size){
    for(int i=0; i<size-1; ++i){
        int minterm=i;
        for(int j=i+1; j<size; ++j){
            if(arr[j]<arr[minterm]){
                minterm=j;
            }
        }
        T temp= arr[i];
        arr[i]= arr[minterm];
        arr[minterm]= temp;
    }
}

template<typename T>
void getdata(T arr[], int size){
    cout<<"Enter the "<<size<<" Elements:\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    
}

template<typename T>
void printdata(T arr[], int size) const{
    cout<<"the elements are:";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int intarr[5];
    cout<<"input for integer array:"<<endl;
    getdata(intarr,5);
    selection_sort(intarr,5);
    cout<<"sorted int array:"<<endl;
    printdata(intarr,5);
    cout<<""<<endl;
    
    float floatarr[5];
    cout<<"input for float array:"<<endl;
    getdata(floatarr,5);
    selection_sort(floatarr,5);
    cout<<"sorted float array:"<<endl;
    printdata(floatarr,5);
    
    return 0;
}
