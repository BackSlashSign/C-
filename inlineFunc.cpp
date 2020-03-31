/*
#include<iostream>
#define SQUARE(X)((X)*(X))	//자료형에 독립적이다

inline int Square(int x) {	//자료형에 독립적이지 못함
	return x * x;
}

int main(void) {
	std::cout << SQUARE(5) << std::endl;
	std::cout << Square(4) << std::endl;
	return 0;
}

*/