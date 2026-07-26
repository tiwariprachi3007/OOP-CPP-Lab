#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int a[n];

    // input array elements
    for(int i=0;i<n;i++){
    cin>>a[i];
    }

    int maxSum=-1000000;

    // Check every strating index
    for(int i=0;i<n;i++){
        int sum=0;
        int len=1;
        int index=i;
    
    // Take groups of size 1,2,3,... 
    while(index+len <=n){

        //add current group
        for(int j= index;j<index+len;j++){
            sum+=a[j];
        }
        //move to next group
        index +=len;
        len++;
    }    
    //update maximum special sum
    if(sum >maxSum){
        maxSum=sum;
    }
}
//print answer
cout<< maxSum;
return 0;
}