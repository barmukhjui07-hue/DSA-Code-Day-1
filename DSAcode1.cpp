// a) Calculate "Simple Interest" from Principal(P), Rate(R), Time(T)
#include<iostream>
using namespace std;

int main(){
    float P,R,T, result;
    cout<<"Enter Principal value: ";
    cin>>P;
    cout<<"Enter Rate: ";
    cin>>R;
    cout<<"Enter Time Period: ";
    cin>>T;
    result = (P*R*T)/100.0;
    cout<<"Simple Interest for given values are: "<<result<<endl;
    return 0;
}
// b) Max of 2 numbers
#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter 1st no: ";
    cin>>a;
    cout<<"Enter 2nd no: ";
    cin>>b;
    if (a > b){
        cout << "Max is: " << a << endl;
    }
    else{
        cout << "Max is: " << b << endl;
    }
    return 0;
}
// c) Factorial of N
#include <iostream>
using namespace std;

int main() {
    int n;
    long long factorial = 1;

    cout << "Enter a non-negative integer: ";
    cin >> n;

    if (n == 0) {
        cout << "Factorial of 0 = 1" << endl;
    } else {
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial << endl;
    }

    return 0;
}