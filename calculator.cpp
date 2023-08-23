#include<iostream>
using namespace std;
float power(float a,int b){
    float goku=1;
    for(int i=1;i<=b;i++){
        
        goku=goku*a;
    }
return goku;
}
int main(){
    int input;
cout<<"Welcome to calculator"<<endl;
cout<<"press 1 for Addition "<<endl;
cout<<"press 2 for Subtraction "<<endl;
cout<<"press 3 for Multiplication"<<endl;
cout<<"press 4 for Division "<<endl;
cout<<"press 5 for Exponential "<<endl;
cout<<"press 6 for Sine"<<endl;
cout<<"press 7 for Cosine"<<endl;
cout<<"press 8 for Tan"<<endl;
cin>>input;
if(input==1){
    int num1,num2;
    cout<<"Enter your first number:";
    cin>>num1;
    cout<<"Enter your second number:";
    cin>>num2;
cout<<num1+num2<<endl;
}
else if(input==2){
    int num1,num2;
    cout<<"Enter your first number:";
    cin>>num1;
    cout<<"Enter your second number:";
    cin>>num2;
cout<<num1-num2<<endl;
}
else if(input==3){
    int num1,num2;
    cout<<"Enter your first number:";
    cin>>num1;
    cout<<"Enter your second number:";
    cin>>num2;
cout<<num1*num2<<endl;
}
else if(input==4){
    int num1,num2;
    cout<<"Enter your first number:";
    cin>>num1;
    cout<<"Enter your second number:";
    cin>>num2;
cout<<num1/num2<<endl;
}
else if(input==5){
    float a;
    int b;
   cout<< "Enter your base of Exponent Function (a) {NOTE TO CALCULATE a^b}:";
   cin>>a;
   cout<< "Enter your exponent(b):";
   cin>>b;
   float ans;
   ans=power(a,b);
    cout<<"Your answer is: "<<ans<<endl;
}
else if(input==6){
    float a;
    float ans;
    
    cout<<"Enter your angle{NOTE:in radians}:"<<endl;
    cin>>a;
    ans=((a)-(power(a,3)/6)+(power(a,5)/120)-(power(a,7)/5040)+(power(a,9)/362880));
    cout<<"Your answer is:"<<ans<<endl;
    
}
else if(input==7){
    float a;
    float ans;
    
    cout<<"Enter your angle{NOTE:in radians}:"<<endl;
    cin>>a;
    ans=(1-(power(a,2)/2)+(power(a,4)/24)-(power(a,6)/120)+(power(a,8)/40320));
    cout<<"Your answer is:"<<ans<<endl;
    
}
else if(input==8){
    float a;
    float ans;
    
    cout<<"Enter your angle{NOTE:in radians}:"<<endl;
    cin>>a;
    ans=(a+(power(a,3)/3)+(2*(power(a,5)))/15+(17*(power(a,7)))/315);
    cout<<"Your answer is:"<<ans<<endl;
    
}
cout<<"***AVOID USING CALCULATOR FOR SIMPLE CALCULATIONS***";
    return 0;
}

