/*
 *This program take number as an input and tell the user about the number 
   if it's even or odd 

 input:number 
 Algorithm: if mod number = 0 >> the number is even 
            if mod number != 0 >> the number is odd 
 output: print even or odd 
*/



#include <iostream>

int main (){

    
    std::cout<< "Enter Number to know whether it's Even or Odd \n" ;
    int number; 
    std::cin>> number ;

        if ( number % 2 == 0){
            std::cout<< "The Entered Number is Even ! \n" ;
        }
        else {
            std::cout<<"The Enterd Number is Odd ! \n" ;
        }

    return 0; 
}