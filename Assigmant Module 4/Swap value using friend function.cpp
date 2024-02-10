#include<iostream>
using namespace std;

class NumberSwapper
{
	private:
	    int num1, num2;
	
	public:
	    NumberSwapper(int a, int b) : num1(a), num2(b) {}
	
	    // Declaration of friend function
	    friend void swapNumbers(NumberSwapper&);
	
	    void displayNumbers() 
		{
	        cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << std::endl;
    	}
};

// Definition of friend function
void swapNumbers(NumberSwapper& ns)
{
    ns.num1 = ns.num1 + ns.num2;
    ns.num2 = ns.num1 - ns.num2;
    ns.num1 = ns.num1 - ns.num2;
}

int main() 
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    NumberSwapper ns(a, b);

    cout << "Before swapping: num1 = " << a << ", num2 = " << b << std::endl;

    // Call the friend function to swap numbers
    swapNumbers(ns);

    // Display the swapped numbers
    ns.displayNumbers();
}
