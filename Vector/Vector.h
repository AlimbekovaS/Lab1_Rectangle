#pragma once
#include <iostream>
#include<iomanip>
#include "Rectangle.h"
using namespace std;
class Vector {
private:
	int cur_size;
	int buf_size;
	Rectangle *els;

public:
	//default constructor
	Vector() {
		cur_size = 0;
		buf_size = 0;
		els = nullptr;
	}
	//size constructor
	Vector(int size) {
		this->cur_size = size;
		this->buf_size = size;
		this->els = new Rectangle[buf_size];
	}
	//copy constructor
	Vector(const Vector& src) {
		this->cur_size = src.cur_size;
		this->buf_size = src.cur_size;
		this->els = new Rectangle[cur_size];
		for (int i = 0; i < cur_size; i++)
			els[i] = src.els[i];
	}


	void push_back(const Rectangle &e) {

		if (cur_size >= buf_size)

		{
			Rectangle *temp;
			buf_size *= 2;
			temp = new Rectangle[buf_size];
			for (int i = 0; i < cur_size; i++)
				temp[i] = els[i];
			delete[] els;
			els = temp;
		}
		els[cur_size++] = e;
	}


	void pop_back() {
		if (cur_size > 0)
			cur_size--;
	}

	Rectangle& at(int pos) {
		return els[pos - 1];
	}
	void print()
	{
		for (int i = 0; i < cur_size; i++)
			cout << left << setw(5) << els[i].area() << endl;

	}
	//destructor

	int size()
	{
		return cur_size;
	}

	~Vector() {
		delete[] els;
		els = nullptr;
	}
};