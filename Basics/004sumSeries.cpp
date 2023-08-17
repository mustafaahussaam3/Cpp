/*

this program getting the summation of a series 
1+1/2+1/3+...+1/n

*/

#include<iostream>


int main(){

    int num ;
    std::cout<<"Enter the Number that you need to reach \n" ; 
    std::cin >> num ;
    float sum = 0;
    for (int i = 1 ; i <= num ; i++){
            sum += 1/i ;
    }
    std::cout << "the sum is "<< sum << std::endl ;

    return 0;
}