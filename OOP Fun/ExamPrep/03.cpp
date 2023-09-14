//Write a C++ Program that reads the integer n and prints a twin prime that has the maximum size among twin primes less than or equal to n.According t o wikipedia "A twin prime is a prime number that is either 2 less or 2 more than another prime number" for example, either member of the twin prime pair(41, 43). In other words, a twin prime is a prime that has a prime gap of two.""
#include<iostream>
#include<vector>
using namespace std;

class PAIRPRIME
{
    public:
    void sievePairPrime(int n);
};

void PAIRPRIME::sievePairPrime(int n)
{
//Sieve segment is here : 
    vector<bool>isPrime(n+1,true);
    for (int i = 2; i <= n; i++)
    {
        if(isPrime[i])
        {
            for (int j = i*i; j <= n; j+=i)
            {
                isPrime[j] = false;
            }
            
        }
    }
//Print Pair Prime :
    for (int i = n; i >= 2; i--)
    {
        if(isPrime[i] and isPrime[i-2])
        {
            cout << i-2 << " " << i << endl;
            break;
        }
    }
    

}






int main()
{
    int n;
    cin >> n;
    PAIRPRIME p;
    p.sievePairPrime(n);
;
}