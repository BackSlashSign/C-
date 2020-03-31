#include <iostream>
using namespace std;

namespace BestCom {
	void SimpleFunc(void);
}
namespace WorstCom {
	void SimpleFunc(void);
}
namespace Parent {
	namespace Child {

	}
}

namespace AAA {
	namespace BBB {
		namespace CCC {
			int num1;
			int num2;
		}
	}
}

int val = 100;

int main(void) {

	AAA::BBB::CCC::num1 = 20;
	AAA::BBB::CCC::num2 = 30;

	namespace ABC = AAA::BBB::CCC;

	cout<< ABC::num1 + ABC::num2<<endl;

	BestCom::SimpleFunc();
	WorstCom::SimpleFunc();

	int val = 10;
	val += 10;
	::val += 100;
	cout << val + ::val << endl;

	return 0;
}
void BestCom:: SimpleFunc(void) {
	std::cout << "BestCom의 함수" << std::endl;

}
void WorstCom::SimpleFunc(void) {
	std::cout << "WorstCom의 함수" << std::endl;
}

