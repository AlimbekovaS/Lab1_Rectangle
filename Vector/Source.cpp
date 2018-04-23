#include "Vector.h"
#include "Rectangle.h"
#include <fstream>

int main() {
	setlocale(LC_ALL, "ru");
	ifstream in;
	ofstream out;
	out.open("write.txt");
	in.open("read.txt");
	double xa, ya, xb, yb, xc, yc, xd, yd;
	double xCenter, yCenter, sideA, sideB;
	Rectangle *p;
	p = new Rectangle[5];
	
	int i = 0; 
	if (!in) 
	{
		cerr << "file open error" << endl;	
	}
	else
	{
		while (!in.eof()) 
		{
			//in >> xa >> ya>>xb>> yb>>xc>>yc>>xd>>yd;
			in >> xCenter >> yCenter >> sideA >> sideB;
			Rectangle R(xCenter, yCenter, sideA, sideB);
			p[i++] = R;
		}
	}
	unsigned short int z;
	cout << "1-перемещения прямоугольника вдоль осей\n"
		<< "2-изменения размера прямоугольника\n"
		<< "3-определения площади, периметра прямоугольника\n"
		<< "4-метод для проверки на равенство  двух прямоугольников\n"
		<< "5-вывод на экран информации об объекте\n"
		<< "6-для копирования объектов\n"
		<< "7-остальные методы на усмотрение разработчика(методы set и get)" << endl;

	cout << "\nКакое задание?\n";
	cin >> z;
	if (z == 1)
	{
		cout << "1-перемещения прямоугольника вдоль осей\n";
		for (int k = 0; k < i; k++)
		{
			p[k].move('x', 10);

			out << p[k].getXA() << "\t" << p[k].getYA() << "\t" <<
				p[k].getXB() << "\t" << p[k].getYB() << "\t" <<
				p[k].getXC() << "\t" << p[k].getYC() << "\t" <<
				p[k].getXD() << "\t" << p[k].getYD() << endl;
		}
	}
	if (z == 2)
	{
		cout << "2-изменения размера прямоугольника\n";
		for (int k = 0; k < i; k++)
		{
			p[k].resize(2, 10);
			out << p[k].getXA() << "\t" << p[k].getYA() << "\t" <<
				p[k].getXB() << "\t" << p[k].getYB() << "\t" <<
				p[k].getXC() << "\t" << p[k].getYC() << "\t" <<
				p[k].getXD() << "\t" << p[k].getYD() << endl;
		}
	}
	if (z == 3)
	{
		cout << "3-определения площади, периметра прямоугольника\n";
		for (int k = 0; k < i; k++)
		{
			cout<<"Площадь"<<p[k].area();
			cout << endl;
			cout << "Периметр: " << p[k].perimetr();
			cout << endl;
		}
	}
	if (z == 4)
	{
		cout << "4-метод для проверки на равенство  двух прямоугольников\n";
		for (int k = 0; k < i; k++)
		{
			
		}
	}


	out.close();
	system("pause");
	return 0;

}