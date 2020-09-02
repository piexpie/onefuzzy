#include <iostream>
#include <cmath>

using namespace std;

float get_partial_truth(int a, int b, int c);

float get_partial_truth(int a, int b, int c)
{
    float result = float(a)/float(b) * float(c);
    float rc = ceil(result);
    return result/rc; 
}

int main()
{
    // One Fuzzy Library
    // Sample usage:
    
    float rain;

    rain = get_partial_truth(1,2,3);

    cout<<rain;
}