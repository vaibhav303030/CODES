// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std; 

int main() {
    int a[5]={2,3,4,5,6};
    int maxprofit=0;
    int bestbuy=a[0];
    for(int i=0;i<5;i++){
        if(a[i]>bestbuy){
            maxprofit=max(maxprofit,a[i]-bestbuy);
        }
        bestbuy=min(bestbuy,a[i]);
    }
cout<<maxprofit;
cout<<bestbuy;

    return 0;
}