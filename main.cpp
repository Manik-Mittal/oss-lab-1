#include <iostream>

using namespace std;

int main()
{
    int n=30;
    int j=n-1;
    int k=1;
    while(j!=-1){
        for(int i=0;i<j;i++){
            cout<<" ";
        }
        for(int i=0;i<2*k;i++){
            cout<<"*";
        }
        k++;
        j--;
        cout<<endl;

    }
        k=0;
        while(n!=-1){
        for(int i=0;i<k;i++){
            cout<<" ";
        }
        for(int i=0;i<2*n;i++){
            cout<<"*";
        }
        k++;
        n--;
        cout<<endl;

    }

    return 0;
}
