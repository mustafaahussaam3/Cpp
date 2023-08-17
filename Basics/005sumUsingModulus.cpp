/*
  This program is taking number from user and get the sum of it 
  ex: input 562 
      algorithm 5+6+2
      output 13 

*/


#include<iostream> 


int main(){

std::cout << "Enter the Number that u need to get the sum of it's Number \n" ;
int num ; 
std::cin >> num; 
int sum = 0 ;
while (num != 0){

    sum += (num %10) ;

    num /= 10 ;
    
}

std::cout << "The sum of Numbers = " << sum << std::endl ;
return 0; 

}