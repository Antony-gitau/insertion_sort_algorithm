#include<iostream>
using namespace std;

void insertion_sort(int arry[],int arrysize){ //insertion function
    for (int i=1; i< arrysize-1;i++){ // loop through the the values from index 1 (not index 0)
        int arrayvalues = arry[i]; //the value of the array  
        int hole = i;          // the index of the array value

        // confirm the index exists and whether the value ahead  is greater 
        while (hole >0 && arry[hole -1] >arrayvalues){
            arry[hole] = arry[hole-1]; //if while is true, assign the previous value to current index
            hole  = hole -1 ; // update the index 
        }
        //if assign the hole as the new value
    arry[hole] = arrayvalues; // 
    }
}

int main(){

    int ary[] = {9, 12, 8,5,6, 19,22,4, 13, 21, 24, 80};
    insertion_sort(ary, 12); //apply the insertion function to the array

    // print the values 
    for ( int k =0; k<12 ;k++){
         cout<< ary[k]<<" ";
    }
   

}
