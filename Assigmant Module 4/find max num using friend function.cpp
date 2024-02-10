#include <iostream>
using namespace std;

class MaxFinder 
{
	private:
	    int num1, num2;
	
	public:
	    MaxFinder(int a, int b) : num1(a), num2(b) {}
	
	    // Declaration of friend function
	    friend int findMax(MaxFinder&);
	
	    void displayMax() 
		{
	        cout << "The maximum number is: " << findMax(*this) << std::endl;
	    }
};

// Definition of friend function
int findMax(MaxFinder& mf)
{
    return (mf.num1 > mf.num2) ? mf.num1 : mf.num2;
}

int main() 
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    MaxFinder mf(a, b);

    // Display the maximum number using the friend function
    mf.displayMax();
}
