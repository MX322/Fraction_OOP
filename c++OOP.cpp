#include <iostream>
using namespace std;


class Fraction
{
private:
	float numerator;
	float denominator;

public:
	Fraction(float _numerator, float _denominator):numerator(_numerator), denominator(_denominator) {}
	
	float Result()
	{
		return numerator / denominator;
	}
};


int main()
{
	Fraction MyFrac(5, 10);

	cout << MyFrac.Result() * 2;
}