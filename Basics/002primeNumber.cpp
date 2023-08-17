/*
this program check if the number that the user enters is odd or even number 
description: 
    * it first check if the number is not 2 or 3 or 5 because the algorithm will see them as prime number 
    * next it see the modulus of the number by 2, 3 and 5 and if 
        *any of the result is 0 that means that this number can by divisible by a number instead of 1 and it self 

*/

// #include <iostream>


// int main(){

//     std::cout<< "Enter a Number to check if it's Prime or Not \n" ;
//     int num ; 
//     std::cin >> num ;
//     float checkValue ;
//     if (num / num == 1 && num / 1 == num ) {
//             if (num == 2 || num == 3 || num == 5 ) {
//                 std::cout << "Prime Number !\n" ; 
//             }
//             else{
//                 for (int i = 2 ; i <= 5 ; i++){
//                     checkValue *= (num % i) ;
//                 }   
//                     if (checkValue == 0) std::cout << "Not Prime Number !\n" ; 
//                     else std::cout << "Prime Number! \n";
//             }
        
//     } 


//     return 0 ; 
// }


#include <iostream>


int main(){

    int number ; 
    std:: cout << "Enter Number " << std::endl ;
    std:: cin >> number ; 

    bool prime = true ; 

    for (int i = 2 ; i <= number /2 ; i++){
        if (number % i == 0){
            prime = false ;
            break ; 
        }
    }

    if (prime){
        std::cout << "the Number is Prime \n" ; 
    }
    else {
        std::cout << "Number is not prime \n" ; 
    }
    return 0 ;
}