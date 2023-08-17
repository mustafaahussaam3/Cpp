/*
string exercise we used this functions in it 

lets initialize string with definition 

std::string s1("Mustafa");
 
1. To Know its length we use ==> s1.length() //Gives u 7
2. to assign it use ==> s1.assign(<enter here a name of string you want to assign s1 with >) or you can make s1 = <Name of String>
3. to get an index use ==> s1.at(<enter here Number of index you need>) //let's say you entered 0, you will Get M in Mustafa 
4. then we add New String (How are You ?)
5. we use substring Function to Substring From this string 
6 . s5.substr(4,8);  //the first input is the start index you need and the 2nd input is the number of characters you need to take from the string 
7. we will add new two strings and swap between them 
8. f1.swap(f2); swap what in f1 with f2 
9. Now we need to use find function to find char in string
10. str.find("<the word you need") ; // returns the first index in the word
11. std.rfind("<the word you need"); // returns from the end of the string the first index of the word you need 
12. str.erase(5); //erase from index 5 to the last of the string 
13. str.erase(0,5); //erase from indec 0 to index 5 and leave the string 
14. str.insert(0,"4"); //insert at index 0 number 4 


*/

#include<iostream>
#include<string>
int main()
{
    std::string firstName ;
    std::cout<<"Enter your Name " << std::endl ; 
    getline(std::cin,firstName) ; 
    std::cout<<"Your First Name is "<<firstName<<std::endl; 
    std::string s1("Mustafa") ;
    std::string s2,s3;
    s2 = s1 ; 
    s3.assign(s1);
    std::cout<<s2<<"     "<<s3<<std::endl; 
    std::cout<<s1.at(0)<<std::endl;
    std::cout<<s1.length()<<std::endl; 
    for (int i = 0 ;i < s1.length();i++){
        std::cout<<s1.at(i)<<std::endl;
    }
    std::string foo ; 

    foo.assign(firstName) ;
    std::cout<<"You Assigned Foo with "<<foo<<std::endl; 
    std::cout<<foo.at(0)<<foo.at(1)<<foo.at(2)<<foo.at(3)<<foo.at(4)<<foo.at(5)<<foo.at(6)<<std::endl;
    
    std::string s5("How Are You ?") ; 
    std::string substr = s5.substr(4,8); //start from 4 index and take 8 charachter
    std::cout<<substr<<std::endl ;

    std::string x ;

    x = firstName.substr(0,3) ;
    std::cout<< x << std::endl; 

     std::string f1("Apple ");
     std::string f2("orange ");
     std::cout<< f1<<f2<<std::endl;
     f1.swap(f2);
     std::cout<<f1<<f2<<std::endl; 


     std::string str="hello-world,hello world";
     std::cout<<str.find("world")<<std::endl;
     std::cout<<str.rfind("world")<<std::endl;

    std::string str2="0123466789";
	str2.erase(5);
	std::cout<<str2<<std::endl;
//	std::cout<<str<<std::endl;
	str2.insert(0,"4");
	std::cout<<str2<<std::endl;



    return 0;
}