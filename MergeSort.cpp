#include <iostream>
using namespace std;

int arr[20], B[20]; // Array utama dan array bantu
int n; 

    void mergersort(int low,int high)
    {

        if (low >= high)
        {
            //step 1
            return; //step 1a
        }
        int mid = (low + high) / 2; //step 2

        mergesort(low, mid); //step 3a
        mergesort(mid + 1, high);// step 3b

        int i = low; //step 4a
        int j,k;
        j = mid + 1; // step 4b
        k = low; // step 4c
        
        while (i <= mid  && j <= high) // step 4d
        {
            if(arr[i] <= arr[j]){ //step 4.d.i
                b[k] = arr[i]; // step 4.d.i.1

            }
        }


    }
}