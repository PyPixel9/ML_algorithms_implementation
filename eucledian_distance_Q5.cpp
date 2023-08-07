#include<iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std  ;
int main(){
    int x = 37 , y = 142;
    int arr1[]={25 , 35 , 45 , 20 , 35 , 52 , 23 , 40 , 60 , 48 , 33};
    int arr2[]={40 , 60 , 80 , 20 , 120 , 18 , 95 , 62 , 100 , 220 , 150};
    vector<float> nums ;
    for(int i = 0 ; i<11 ; i++){
        nums.push_back(sqrt((arr1[i]-x)*(arr1[i]-x) + (arr2[i]-y)*(arr2[i]-y)));
    }
    sort(nums.begin() , nums.end());
    for(float i: nums)cout<<i<<endl;
    return 0;