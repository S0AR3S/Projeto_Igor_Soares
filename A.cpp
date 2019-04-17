#include <iostream>

using namespace std;

class A{
	
	int A1;
	float A2;
	
	int getA1(){
		return A1;
	};
	
	float getA2(){
		return A2;
	};
	
	void MA1(){
		cout << "MA1" << endl;
	};
	
	void MA2(){
		cout << "MA2" << endl;
	};

	void MA3(){
		cout << "Alteração da Classe A a partir do Clone" << endl;
	}
};


