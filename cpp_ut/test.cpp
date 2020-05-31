#include <iostream>
#include <gtest.h>
using namespace std;

class MyClass {
	int baseValue;
	public:
		//MyClass(int _bv) : baseValue(_bv) {}
		void Increment(int byValue) {
			baseValue += byValue;
		}
		int getValue(){ return baseValue; }
		void setLength(int value){
			baseValue = value;
		}
};

struct MyClassTest : public testing::Test {
	MyClass *mc;
	void SetUp() {
		mc = new MyClass; 
		mc->setLength(100);
		cout<< "class is constructed and its length is " << mc -> getValue() << endl;
			}
	
	void TearDown() { 
		delete mc; 
		cout<< "class is deleted" << endl;
			} 
};


TEST_F(MyClassTest, Increment_by_5){

	//ACT
	mc->Increment(5);

	//ASSERT
	ASSERT_EQ(mc->getValue(), 105);

}


int main(int argc, char **argv){

	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
} 
