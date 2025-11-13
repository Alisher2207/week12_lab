#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void function(int*ptr){
cout<<ptr<<endl;
}



//_________________________________________________
bool is_mirrored(const int* a, const int* b, int size) {

     b = b + size - 1;

     for (int i = 0; i < size; i++) {

         if (a[i] != *b) {
             return false;
         }
         b--;
     }

     return true;
 }
//______________________________________________________
void sumArrays(const double* arr1, const double* arr2, double* sum, int size) {
    for (int i = 0; i < size; i++) {
        sum[i] = arr1[i] + arr2[i];
    }
}

void swap(int* arr1, int* arr2, int size) {
    for (int i = 0; i < size; i++) {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}

bool is_in(const int* arr1, const int* arr2, int size1, int size2) {
    const int *p1 = arr1;
    const int *p2 = arr2;
//________________________________________________________
    for (p1 = arr1; p1 < arr1 + size1; p1++) {
        bool found = false;
        for (p2 = arr2; p2 < arr2 + size2; p2++) {
            if (*p1 == *p2) {
                found = true;
                break;
            }
        }
        if (!found) {
            return false;
        }
    }
    return true;
}



// ______________________________________
void power(double* n, const int* p) {
    double result = 1.0;
    int exponent = *p;

    for (int i = 0; i < exponent; i++) {
        result *= *n;
    }

    *n = result;
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



//problem 2
// int main() {
//      int n, count =0 ;
//      cin>>n;
//      int *ptr ,arr[n];
//      for(int i=0;i<n;i++) {
//          cin>>arr[i];
//          ptr++;
//          if (*ptr%2==1){
//              count++;
//
//      }
//
//  }
//
// cout<<count<<endl;

//problem 3
// int main() {
//      int a1[] = {1, 2, 3, 4, 5};
//      int b1[] = {5, 4, 3, 2, 1};
//      cout << is_mirrored(a1, b1, 5) << endl;
//
//      int a2[] = {1, 2, 3, 6};
//      int b2[] = {6, 3, 3, 1};
//      cout << is_mirrored(a2, b2, 4) << endl;
//
//
//      return 0;
//  }
//

//problem4
//int main() {

//     double arr1[] = {1, 2, 3};
//     double arr2[] = {1, 2, 3};
//     double result[3];
//
//     sumArrays(arr1, arr2, result, 3);
//     cout << "Sum array: ";
//     for (int i = 0; i < 3; i++) {
//         cout << result[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }
//

//problem5
//     int arr3[] = {1, 2, 3, 4, 5};
//     int arr4[] = {6, 7, 8, 9, 10};
//
//     swap(arr3, arr4, 5);
//
//     cout << " ";
//     for (int i = 0; i < 5; i++) {
//         cout << arr3[i] << " ";
//     }
//     cout << endl;
//
//     cout << " ";
//     for (int i = 0; i < 5; i++) {
//         cout << arr4[i] << " ";
//     }
//     cout << endl;
//
//     return 0;
// }
// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;
//
// int main() {
//     int n;
//     cin >> n;
//
//     vector<vector<int > > a(n,vector<int>(n));
//
//
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cin >> a[i][j];
//         }
//     }
//
//     int minBorder = INT_MAX;
//
//
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//
//             if (i == 0||  j == 0 ||  i == n - 1 || j == n - 1) {
//                 minBorder = min(minBorder, a[i][j]);
//             }
//         }
//     }
//
//     cout << minBorder << endl;
//     return 0;
// }


//problem6
// int main() {
//     // 6-masala test
//     int arr1_1[] = {4, 2, 1};
//     int arr2_1[] = {7, 4, 2, 2, 1};
//     cout << " 1-test ni javobi" << is_in(arr1_1, arr2_1, 3, 5) << endl;
//
//     int arr1_2[] = {6, 10, 2};
//     int arr2_2[] = {5, 6, 1, 0, 0, 1, 6};
//     cout << " test 2ning javobi: " << is_in(arr1_2, arr2_2, 3, 7) << endl;
//
//     return 0;
// }

//problem 7
// int main() {
// double num1 = 5;
// int exp1 = 3;
// power(&num1, &exp1);
// cout << "1- output : " << num1 << endl;
//
// double num2 = 2;
// int exp2 = 5;
// power(&num2, &exp2);
// cout << "2- output : " << num2 << endl;
//
// return 0;
// }

//problem 8



vector < int> addOne(vector<int> &v) {
    int n = v.size();
    int carry = 1;  // Start with carry = 1 since we're adding one

    // Process digits from right to left (least significant to most significant)
    for (int i = n - 1; i >= 0; i--) {
        int sum = v[i] + carry;
        v[i] = sum % 10;  // Current digit
        carry = sum / 10; // Carry for next digit

        // If no carry, we can stop early
        if (carry == 0) {
            break;
        }
    }

    // If there's still a carry after processing all digits
    // we need to add a new digit at the beginning
    if (carry > 0) {
        v.insert(v.begin(), carry);
    }

    return v;
}
