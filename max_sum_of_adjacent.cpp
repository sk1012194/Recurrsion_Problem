#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
void solvemax(vector<int>& arr,int i,int &maxi,int sum){
    if(i>=arr.size()){
        maxi=max(sum,maxi);
        return;
    }
    sum=sum+arr[i];
    solvemax(arr,i+2,maxi,sum);
    sum=sum-arr[i];
    solvemax(arr,i+1,maxi,sum);
}
int main(){
    vector<int>arr{2,1,4,9};
    int sum=0;
    int maxi=INT16_MIN;
    int i=0;
    solvemax(arr,i,maxi,sum);
    cout<<maxi;
}