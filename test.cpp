/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
     // Write C++ code here
   int sum=1;
   int p ;
   int q;
    int arr[5]={123,563,654,126,114};
    int arr1[5]={};
    for(int i=0;i<5;i++){
       while(arr[i]!=0){
          p=arr[i]%10;
          sum=sum*p;
          arr[i]=arr[i]/10;
          
       }
       
       int q=sum;
       arr1[i]=q;
       sum=1;
       
    }
    
    for(int i=0;i<5;i++){
        cout<<arr1[i] << " ";
    }

    
    return 0;
}
