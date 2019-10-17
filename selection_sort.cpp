#include<iostream>
#include<vector>

using namespace std;

void selection_sort(vector <int> &A,int N){
    int min, temp;
    for(int i=0;i<N;i++){
        min = i;
        for(int j=i+1;j<N;j++){
            if(A[j]<A[min]){
                min = j;
            }
        }
        temp = A[min];
        A[min] = A[i];
        A[i] = temp;
    }
}

int main(){
    int N;
    cout<<"Enter list size: ";
    cin>>N;

    vector <int> A(N);
    cout<<"Enter the elements (space separated): ";
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    selection_sort(A,N);
    cout<<"Sorted list: ";
    for(int i=0;i<N;i++){
        cout<<A[i]<<"  ";
    }
}
