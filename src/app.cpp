#include <iostream>
using namespace std;

bool isPrime(int x) {
    if (x <= 1) return false;
    for (int i = 2; i < x; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int closestPrime(int x) {
    if (isPrime(x)) {
        return x;
    }
    return closestPrime(x+1);
}
/****

int main()
{  
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (isPrime(a)) {
        cout << a << " is prime. ";
    } else {
        cout << a << " is not prime. Closest prime is " << closestPrime(a) << ". ";
    }

    if (isPrime(b)) {
        cout << b << " is prime.";
    } else {
        cout << b << " is not prime. Closest prime is " << closestPrime(b) << ".";
    }

    return 0;          
}
****/