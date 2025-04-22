class Shape {
public:
	virtual double area() = 0;
};

class Rectangle : public Shape {
public:
	int width, height;
public:
	Rectangle(int w, int h) :width(w), height(h){}
	double area() {
		return width * height;
	}
};

class Square : public Shape {
protected:
	int side;
public:
	Square(int s):side(s){}
	double area() {
		return side * side;
	}
};

void printArea(Shape& shape) {
	cout<<shape.area();
}
 
int main() {
	Square sq(5);
	Rectangle rct(3, 4);
	printArea(rct);
}
