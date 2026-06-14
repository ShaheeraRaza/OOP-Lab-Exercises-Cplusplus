#include<iostream>
using namespace std;
class tollbooth{
	private:
		int cars;
		double amount;
	public:
		tollbooth(){
			cars=0;
			amount=0;
		}
	void payingcar(){
		cars++;
		amount+=0.50;
	}	
	void display(){
		cout<<"Total car passed:"<<cars<<endl;
		cout<<"Total cash:"<<amount<<endl;
	}
};
int main(){
	tollbooth t1;
	t1.payingcar();
	t1.payingcar();
	t1.payingcar();
	t1.payingcar();
	t1.payingcar();
	t1.payingcar();
	t1.display();
	
	return 0;
}
