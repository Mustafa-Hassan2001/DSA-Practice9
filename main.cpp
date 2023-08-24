#include <iostream>
#include <math.h>

using namespace std;

//#include <bits/stdc++.h>
//int fp(vector<int> &arr, int n, int k) { 
//    int start = 0;
//    int end = n-1;
//    int ans = -1;
//    int mid = start+(end-start)/2;
//
//    while(start<=end){
//        if(arr[mid]==k){
//            ans = mid;
//            end = mid - 1;
//        }
//        if(arr[mid]<k){
//            start = mid + 1;
//        }
//        if(arr[mid]>k){
//            end = mid - 1;
//        }
//        mid = start + (end-start)/2;
//    } 
//    return ans;
//}
//int lp(vector<int> &arr, int n, int k) { 
//    int start = 0;
//    int end = n-1;
//    int ans = -1;
//    int mid = start+(end-start)/2;
//
//    while(start<=end){
//        if(arr[mid]==k){
//            ans = mid;
//            start = mid + 1;
//        }
//        if(arr[mid]<k){
//            start = mid + 1;
//        }
//        if(arr[mid]>k){
//            end = mid - 1;
//        }
//        mid = start + (end-start)/2;
//    } 
//    return ans;
//}
//pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
//{
//  pair<int,int> p;
//  p.first = fp(arr, n,  k);
//  p.second = lp(arr,  n,  k);
//  return p;
//}


//int binarysearch(int arr[], int size, int key){
//	int start = 0, c=0; 
//	int end = size-1;
//	
//	int mid = start + ((end-start)/2);
//	
//	while(start<=end){
//		if(arr[mid]==key){
////			return mid;
//			c++;
//		}
//		if(arr[mid]>key){
//			end = mid-1;
//		}
//		if(arr[mid]<key){
//			start = mid+1;
//		}
//		mid = start + ((end-start)/2);
//	}
//	return c;
//}
//
//int main(){
//
//int arr1[6] = {2,4,8,12,18,20};
//int arr2[6] = {3,7,11,17,19,23};
//int arr[7] = {1,2,3,3,3,3,5};
//
//int indexeven1 = binarysearch(arr1, 6, 20);
//int indexeven2 = binarysearch(arr1, 6, 30);
//
//int indexodd1 = binarysearch(arr2, 6, 3);
//int indexodd2 = binarysearch(arr2, 6, 11);
//
////cout<<indexodd1;
////cout<<indexodd2;
//
//cout<<binarysearch(arr, 7, 3);
//
//	return 0;
//}



int fp(int arr[], int n, int k) { 
    int start = 0;
    int end = n-1;
    int ans = -1;
    int mid = start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==k){
            ans = mid;
            end = mid - 1;
        }
        if(arr[mid]<k){
            start = mid + 1;
        }
        if(arr[mid]>k){
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    } 
    return ans;
}
int lp(int arr[], int n, int k) { 
    int start = 0;
    int end = n-1;
    int ans = -1;
    int mid = start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==k){
            ans = mid;
            start = mid + 1;
        }
        if(arr[mid]<k){
            start = mid + 1;
        }
        if(arr[mid]>k){
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    } 
    return ans;
}

int main(){
   int arr[8] = {1,2,3,3,3,3,5, 5};
   int first = fp(arr, 8,  5);
   int last = lp(arr,  8,  5);
   int total = (last-first)+1;
   cout<<total;
  return 0;
  
}
