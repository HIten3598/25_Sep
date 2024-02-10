#include <iostream>

// Base class
class Base {
private:
    int privateMember;    // Private member
protected:
    int protectedMember;  // Protected member
public:
    int publicMember;     // Public member

    // Member function to access private member
    void accessPrivate() {
        privateMember = 1;
        std::cout << "Accessing private member from Base class: " << privateMember << std::endl;
    }

    // Member function to access protected member
    void accessProtected() {
        protectedMember = 2;
        std::cout << "Accessing protected member from Base class: " << protectedMember << std::endl;
    }

    // Member function to access public member
    void accessPublic() {
        publicMember = 3;
        std::cout << "Accessing public member from Base class: " << publicMember << std::endl;
    }
};

// Derived class
class Derived : public Base {
public:
    // Member function to access members from Base class
    void accessBaseMembers() {
        // Accessing private member from Base class (not allowed in derived class)
        // privateMember = 4;  // Uncommenting this line will result in a compilation error

        // Accessing protected member from Base class (allowed in derived class)
        protectedMember = 5;
        std::cout << "Accessing protected member from Derived class: " << protectedMember << std::endl;

        // Accessing public member from Base class (allowed in derived class)
        publicMember = 6;
        std::cout << "Accessing public member from Derived class: " << publicMember << std::endl;
    }
};

int main() {
    Base baseObject;

    // Accessing members from Base class using Base object
    baseObject.accessPrivate();
    baseObject.accessProtected();
    baseObject.accessPublic();

    std::cout << "\n";

    Derived derivedObject;

    // Accessing members from Base class using Derived object
    derivedObject.accessPrivate();    // Not allowed (private member)
    derivedObject.accessProtected();  // Allowed (protected member)
    derivedObject.accessPublic();     // Allowed (public member)

    // Accessing members from Derived class
    derivedObject.accessBaseMembers();
}