class Account {
public:
	virtual void deposit(double balance) = 0;
	virtual void withdraw(double amount) = 0;
	virtual int getBalance() = 0;
	virtual int serviceCharge() = 0;
};


class SavingAccount : public Account{
private:
	int balance, amount;
public:
	void deposit(double money) {
		balance = money;
	}
	
	void withdraw(double amt) {
		amount = amt;
	}

	int getBalance() {
		return balance-amount;
	}

	int serviceCharge() {
		return 10;
	}
};

class FixedAccount : public Account {
private:
	int balance, amount;
public:
	void deposit(double money) {
		balance = money;
	}

	void withdraw(double amt) {
		amount = amt;
	}

	int getBalance() {
		return balance-amount;
	}

	int serviceCharge() {
		return 15;
	}
};


	


int main() {
	
	SavingAccount* acct = new SavingAccount();
	acct->deposit(45);
	acct->withdraw(34);
	cout<<acct->getBalance()<<endl;
	cout<<acct->serviceCharge()<<endl;

	FixedAccount* acct1 = new FixedAccount();
	acct1->deposit(450);
	acct1->withdraw(50);
	cout << acct1->getBalance() << endl;
	cout << acct1->serviceCharge() << endl;

