#include <iostream>
#include <conio.h>
using namespace std;
class Complex
{
private:
	double x_dei, y_mnim;
public:
	Complex()
	{
		x_dei = 0; y_mnim = 0;
	}
	Complex(double x, double y)
	{
		x_dei = x; y_mnim = y;
	}
	void set_x(double x)
	{
		x_dei = x;
	}
	void set_y(double y)
	{
		y_mnim = y;
	}
	double get_x()
	{
		return x_dei;
	}

	double get_y()
	{
		return y_mnim;
	}
	void Display() { cout << x_dei <<"+"<< y_mnim <<"i"<<endl; }

	Complex operator + (Complex& ob);
	Complex operator - (Complex& ob);
	Complex operator * (Complex& ob);
};
Complex Complex::operator+(Complex& ob) 
{
	return Complex(x_dei + ob.x_dei, y_mnim + ob.y_mnim);
}
Complex Complex::operator-(Complex& ob) 
{
	return Complex(x_dei - ob.x_dei, y_mnim - ob.y_mnim);
}

Complex Complex::operator*(Complex& ob) 
{
	return Complex(x_dei * ob.x_dei - y_mnim * ob.y_mnim, x_dei * ob.y_mnim + y_mnim * ob.x_dei);
}
int main()
{
	setlocale(LC_ALL, "Rus");
	double q, qi, c, ci;
	cout << "Введите дейсвительную часть первого числа ";
	cin >> q;
	cout << "Введите мнимую часть первого числа ";
	cin >> qi;
	cout << "Введите дейсвительную часть второго числа ";
	cin >> c;
	cout << "Введите мнимую часть второго числа ";
	cin >> ci;
	Complex a (q,qi), b(c,ci),s;
	a.Display();
	b.Display();
	int i = 0;
	cout << "1-сложение 2-умножение 3-вычитание"<<endl;
	cin >> i;
	switch(i)
	{
	case 1:
		s = a + b;
		s.Display();
		break;
	case 2:
		s = a * b;
		s.Display();
		break;
	case 3:
		s = a - b;
		s.Display();
		break;
	}
	

}