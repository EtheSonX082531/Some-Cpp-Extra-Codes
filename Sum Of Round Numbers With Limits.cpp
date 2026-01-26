#include<iostream>
using namespace std;

int sumOfRoundNumber(int a,int b) {
    int sum=0;
    while(true) {
        if(a%10==0) {
            for(int i=a; i<=b; i+=10) {
                sum=sum+i;
            }
            return sum;
        }
        else {
            a++;
            if(a>b) {
                return sum;
            }
        }
    }
}

int main()
{
    int a,b;
    cout<<"Enter the first limit: ";
    cin>>a;
    cout<<"Enter the last limit: ";
    cin>>b;
    cout<<"Sum of Round Numbers with Limits: "<<sumOfRoundNumber(a,b);
    return 0;
}
