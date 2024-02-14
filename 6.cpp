#include <iostream>
using namespace std;

class BankAccount {
private:
    float balance;

public:
    BankAccount(float initialBalance)  
	{
		this->balance = initialBalance;
	}

    BankAccount operator+(BankAccount & other) const {
        float totalBalance = balance + other.balance;
        return BankAccount(totalBalance);
    }

    void display() const {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account1(18464.0); 
    BankAccount account2(20124.0); 

    cout << "Account 1: ";
    account1.display();
    cout << endl;
    cout << "Account 2: ";
    account2.display();
    cout << endl;

    BankAccount sum = account1 + account2;
    cout << "Sum of Account 1 and Account 2: ";
    sum.display();
    cout << endl;

    return 0;
}
