#include <iostream>
using namespace std;
 void function(int*ptr){
cout<<ptr<<endl;
}
//problem 1

// int main() {
//      const int size = 10 ;
//      float *ptr,arr[size];
//      ptr=&arr[0];
//      for(int i = 0 ; i < size ; i++) {
//          cin>>*ptr;
//          ptr++;
//      }
//
//      for (--ptr;ptr>=&arr[0];ptr--) {
//          cout<<*ptr<<" " ;
//      }
//


//problem 2
int main() {
     int n, count =0 ;
     cin>>n;
     int *ptr ,arr[n];
     for(int i=0;i<n;i++) {
         cin>>arr[i];
         ptr++;
         if (*ptr%2==1){
             count++;

     }

 }

cout<<count<<endl;

     return 0;
 }


