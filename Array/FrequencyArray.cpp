/*
    One of the used algorithms with arrays is frequency array which used to knowing the frequency of numbers in an array and here we ill declared an 
    example use it 


*/

#include <iostream>

int main(){

    int Frequency [100] = {0} ;
    int numbers [8] = {1, 2, 3, 2, 5, 6, 1, 1} ;
    
    for (int i = 0; i < 8 ; i++){
        Frequency[numbers[i]]++ ;
    }

    for (int i = 0 ; i <=8 ; i++ ){

        std::cout<< i << "  :   " << Frequency[i] <<std::endl ;
    }


    return 0;

}
