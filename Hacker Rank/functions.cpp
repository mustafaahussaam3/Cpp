/*
    Input Format

    Input will contain four integers -  , one per line.

    Output Format

    Return the greatest of the four integers.
    PS: I/O will be automatically handled.
*/

#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four (int a,int b, int c , int d){
    
    int temp ;
    int arr[4] = {a,b,c,d} ;
    cout <<arr[0]<<arr[1]<<arr[2]<<arr[3]<<endl;

    for (int i = 0; i < 4 ; i++){
        if(arr[i]<arr[i+1]){ 
           temp = arr[i] ;
           arr[i] = arr[i+1];
           arr[i+1] = temp;   
        }

        
    }
    return arr[0];
}
    


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    cout<<endl;
    
    return 0;
}