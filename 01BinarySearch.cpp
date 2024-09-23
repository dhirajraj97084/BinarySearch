#include<iostream>
using namespace std;

// create function for binarySearch
int binarySearch(int arr[],int n,int key){
    int s=0; //starting array index
    int e=n-1; //endting array index
    int mid=(s+e)/2; //mid index of the array

    while(s<=e){
         if(arr[mid]==key){
            return mid;
         }
         else if (arr[mid]<key) //right sift
         {
           s=mid+1;
         }
         else{    //left sift
            e=mid-1;
         }
        mid=(s+e)/2;  //update mid index
    }
   return -1;

}

int main(){
    int arr[8]={2,3,4,5,6,7,8,12}; //monotonic function

    int index=binarySearch( arr, 8, 5);
    cout<<"your array index is:"<<index;
}
