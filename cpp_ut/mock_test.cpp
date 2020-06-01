#include <iostream>
#include <vector>
#include <gtest.h>
#include <gmock/gmock.h>
//#include "gmock/gmock.h"

using namespace std;
using ::testing::AtLeast;
using ::testing::Return;
using ::testing::_;

//#if 0
class DataBaseConnect {
public:
	virtual bool login(string username, string password)
	{ return true; }
	virtual bool login2(string username, string password)
	{ return true; }
	virtual bool logout(string username) 
	{ return true; }
	virtual int fetchRecord() {return -1; }
};

class MockDB : public DataBaseConnect {
public: 
	MOCK_METHOD0(fetchRecord, int());
	MOCK_METHOD1(logout, bool(string username));
	MOCK_METHOD2(login, bool(string username, string password));
	MOCK_METHOD2(login2, bool(string username, string password));
};


class MyDatabase{
	DataBaseConnect & dbC;
	public:
		MyDatabase(DataBaseConnect & _dbC) : dbC(_dbC) {}
	/*	void setDB(DataBaseConnect & _dbC){
			dbC = _dbC;
		}*/
	
	int Init(string username, string password) {
		int rvalue = rand() % 2;
		if(rvalue == 0) {
		if(dbC.login(username, password) != true){
			if(dbC.login(username, password) != true){
			cout << "DB Failure two" << endl;
			return -1; 
			}
		     }  
		else {
			cout << "DB Success" << endl;
			return 1;
		     }
		}
		else {
			return dbC.login2(username, password);
		 }	
	}	
};

TEST(MyDBTest, LoginTest) {

	//ARRANGE
	MockDB mdb;
	MyDatabase db(mdb);
	//mdb.login("abc","def");
	//db.setDB(mdb);

	//EXPECT_CALL(mdb, login("abc", "def")) //--> correct
	/* EXPECT_CALL(mdb, login(_,_)) // --> correct (any parameter accepted)
	.Times(AtLeast(1))
	.WillOnce(Return(true));
	*/
	ON_CALL(mdb, login(_,_)).WillByDefault(Return(true));
	ON_CALL(mdb, login2(_,_)).WillByDefault(Return(true));
	
	//ACT
	int retValue = db.Init("abc", "def");

	//ASSERT
	EXPECT_EQ(retValue, 1);

}
#if 0
TEST(MyDBTest, LoginFailure) {

	//ARRANGE
	MockDB mdb;
	MyDatabase db(mdb);
	//mdb.login("abc","def");
	//db.setDB(mdb);

	//EXPECT_CALL(mdb, login("abc", "def")) //--> correct
	EXPECT_CALL(mdb, login(_,_)) // --> correct (any parameter accepted)
	.Times(2)
	.WillOnce(Return(false));

	//ACT
	int retValue = db.Init("abc", "def");

	//ASSERT
	EXPECT_EQ(retValue, -1);

}
#endif
//#endif
int main(int argc, char **argv){
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
