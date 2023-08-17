/*
    Reverse String  
    we need to reverse the elements of a given string arr[10] = {1,2,3,4,5,6,7,8,9,10} 
*/


#include <iostream>

int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    for (int i = 0 ; i < 6 ; i++ ){
        int temp = arr[i] ;
        arr[i] = arr[9 - i];
        arr[9-i] = temp ; 
        // if (temp == 5){break;}
    }

    for (int i = 0 ; i < 10 ; i++ ){
       std::cout << arr[i] << " ";
    }
    return 0;
}