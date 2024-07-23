/*

    Using Sieve of Eratosthenes Algorithm. 

    Explanation:
    In this we first initialize an array of length n with all the elements initialized as true conveying that the element is already
    prime. Then inside the loop we go in the if statement if the element is true and loop through the table of that number and
    mark each element inside the array as false until we reach n-1. By doing this we mark the non prime elements places as
    false conveying not prime numbers and when the loop resets the numbers which are still true can only go inside the if statement
    increasing the count by 1 and counting the prime numbers.

*/ 

#include<iostream>
using namespace std;

int countPrimes(int n)
{
    int count = 0;
    bool *prime = new bool[n];
    for (int i = 0; i < n; i++)
    {
        prime[i] = true;
    }

    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            count++;
            for (int j = 2 * i; j < n; j = j + i)
            {
                prime[j] = false;
            }
        }
    }
    delete[] prime;
    return count;
}

int main(){
    int n = 40;
    cout<<"The number of prime numbers in range "<<n<<" is: "<<countPrimes(n);
}