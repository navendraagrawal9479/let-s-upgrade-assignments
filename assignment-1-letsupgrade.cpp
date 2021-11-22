/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            
            if(i%2==1){
                if(j%2==1)cout<<1<<" ";
                else cout<<0<<" ";
            }
            else{
                if(j%2==0)cout<<1<<" ";
                else cout<<0<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}
