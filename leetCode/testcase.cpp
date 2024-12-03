#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> arr = {195593459,195593459,195593458,195593457,195593459};

    int max = 0;
    
    for (int i=0; i<arr.size(); i++) {
        int count = 0;
        for (int j=i; j<arr.size() ; j++) {
           if(abs(arr[i]-arr[j])<=1){
               count++;
            } else{
                break;
            }
        }
        if(count>max) max=count;
    }
    
    cout<< max;

}

