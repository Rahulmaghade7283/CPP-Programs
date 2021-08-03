//Rahul M


#include <iostream>  
#include <string>
#include<cstring> 
 using namespace std; 
 class airlines 
 { 
          public: 
                            char flight_no[20]; 
                            char source[20]; 
                            char dest[20]; 
                            int fare; 
          public: 
                           airlines(const char* fl,const char* s,const char* d,int f) 
                      { 
                           strcpy(flight_no,fl); 
                           strcpy(source,s); 
                           strcpy(dest,d); 
                           fare=f; 
                      } 
                           void describe() 
                       { 
                            cout<<"\n" ; 
                            cout<<"Flight Number :"<<flight_no<<endl; 
                            cout<<"Source : "<<source<<endl; 
                            cout<<"Destination : "<<dest<<endl; 
                            cout<<"Fare : "<<fare<<endl; 
                       } 
 }; 
                 int main( ) 
           { 
                      airlines a1(" AI007", "Delhi", "Bombay" ,6000); 
                      airlines a2(" AI008", "Delhi", "Madras" ,8000); 
                      a1.describe(); 
                      a2.describe(); 
           }
