class Bird {
public:
	virtual bool canfly() = 0;
};

class FlyingBird {
public:
	bool canfly() {
		return true;
	}
	virtual void fly() = 0;
};


class Crow : public FlyingBird {
public:
	void fly() {
		cout << "Crow can fly" << endl;
	}
};

class Penguin : public Bird {
public:
	bool canfly() {
		return false;
	}
};

void makeBirdFly(FlyingBird& bird) {
	bird.fly();
}


int main() {
	
	
	Crow obj;
	makeBirdFly(obj);
	

}
