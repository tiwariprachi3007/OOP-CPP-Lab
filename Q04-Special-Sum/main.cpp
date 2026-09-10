#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int maxSum=0;
    for(int i=0;i<n;i++){
        int sum=0;
        int index=i;
        int step=1;
 
        while (index < n)
        {
            for (int j = 0; j < step && index < n; j++)
            {
                sum += a[index];
                index++;
            }

            step++;
        }

        if (sum > maxSum)
            maxSum = sum;
    }

    cout << maxSum << endl;

    return 0;
}
