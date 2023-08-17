#include <iostream>
int main(){

    int w ; 
    std::cin>>w;

    if (w <= 2 || w > 100){
        return 1;
    }

        if ( (w % 2) == 0 && w != 2) {
            std::cout<<"Yes"<<std::endl;
        }else {
            std::cout<<"No"<<std::endl;

        }


return 0 ; 
}