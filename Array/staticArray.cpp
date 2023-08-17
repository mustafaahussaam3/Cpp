#include <iostream>
#include <array>

void staticArray();
void automaticArray();

const size_t array_size = 3 ;
int main(){

    std::cout << "First call to each function \n" ;
    
    staticArray();
    automaticArray();
    std::cout<<std::endl;

    std::cout << "Second call to each function \n" ;

    staticArray();
    automaticArray();

    std::cout<<std::endl;


    return 0;
}

void staticArray(){

 static std::array<int,array_size> array1;
    for (int i = 0; i < array1.size(); i++){
        std::cout << "array1[" << i << "]  " <<array1[i]<< " " ; 
    }
    std::cout<<std::endl;
    for (int j = 0; j < array1.size(); j++){
        std::cout << "array1[" << j << "]  " <<(array1[j]+=5 )<< " " ; 
    }
        std::cout<<std::endl;

}


void automaticArray(){
std::array<int, array_size> array2 = {1,2,3};
   for (int i = 0; i < array2.size(); i++){
        std::cout << "array2[" << i << "]  " <<array2[i]<< " " ; 
    }
        std::cout<<std::endl;


    for (int j = 0; j < array2.size(); j++){
        std::cout << "array2[" << j << "]  " <<( array2[j]+=5 )<< " " ; 
    }
        std::cout<<std::endl;


}