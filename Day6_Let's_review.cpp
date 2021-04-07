#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int num;
    cin>>num;
    for(int i =0;i<num;i++)
    {
        string word ;
        string temp1,temp2;
        cin>>word;
        for(int j=0;j<word.length();j++)
        {
            if(j%2==0)
            {
                // for even place characters
                temp1 = temp1+word[j];
            }
            else
            {
                // for odd place characters
                temp2 = temp2+word[j];
            }
                       
            
        } 
        cout<<temp1<<" "<<temp2<<endl;
        
    }
    return 0;
}
