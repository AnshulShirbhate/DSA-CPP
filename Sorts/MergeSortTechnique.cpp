#include<iostream>
using namespace std;

void merge(int *arr, int s, int e) {

    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    int mainArrayIndex = s;
    for(int i=0; i<len1; i++) {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid+1;
    for(int i=0; i<len2; i++) {
        second[i] = arr[mainArrayIndex++];
    }

    //merge 2 sorted arrays     
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1 < len1 && index2 < len2) {
        if(first[index1] < second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }   

    while(index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < len2 ) {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete []first;
    delete []second;

}

void mergeSort(int *arr, int s, int e) {

    //base case
    if(s >= e) {
        return;
    }
    
    int mid = (s+e)/2;

    //left part sort karna h 
    mergeSort(arr, s, mid);
    
    //right part sort karna h 
    mergeSort(arr, mid+1, e);

    //merge
    merge(arr, s, e);

}

int main() {

    int arr[15] = {3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
    int n = 15;

    mergeSort(arr, 0, n-1);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } cout << endl;

    return 0;
}



//Code with harry's

//Merge Procedure using 3 arrays

void merge(arr1[], arr2[], arr3[], m, n){
    int i=j=k=0;

    while(i<m && j<n){
        if (arr1[i]<arr2[j]){
            arr3[k] = arr1[i];
            i++;
            k++;
        }else{
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }

    while(j<n){
        arr3[k] = arr2[j];
        j++;
        k++;
    }

    while(i<m){
        arr3[k] = arr1[i];
        k++;
        i++;
    }
}


//Merge proccedure using 2 arrays
void merge(int arr[], l, mid, h){
    int i,j,k;
    int arr2[h+1];
    i = l, j=mid+1, k=l;
    while(i<mid && j<h){
        if(arr[i]<arr[j]){
            arr2[k] = arr[i];
            i++;
            k++;
        }else{
            arr2[2] = arr[j];
            j++;
            k++;
        }
    }

    while(i<=m){
        arr2[k] = arr[i];
        i++;
        k++;
    }

    while(j<h){
        arr2[k] = arr[j];
        i++;
        k++;
    }

    for(i=l;i<h;i++){
        arr1[i] = arr2[i];
    }
}



//Recursive merge sort

void mergesort(int arr[], int l, int h){
    if(l<h){
        mid = (l+h)/2;
        mergesort(arr, l, m);
        mergesort(arr, mid+1, h);
        merge(arr, l, mid, h)
    }
}

