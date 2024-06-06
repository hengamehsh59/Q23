#include<iostream>
using namespace std;
int main()
{
    float grade;
    cout<<"Enter Grade:";
    cin>>grade;
   if(grade>=17){
       cout<<"A level";
   }
   if(grade>=14&&grade<17){
       cout<<"B level";
   }
   if(grade>=10&&grade<14){
       cout<<"c level";
   }
   if(grade<10){
       cout<<"D level";
   }
   if(grade<12){
       cout<<"Mashroot!";
   }
        return 0;
    }
     