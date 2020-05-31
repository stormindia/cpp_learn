#include <iostream>
#include <vector>
#include <gtest.h>

using namespace std;

void expectEqual(int n1, int n2){
	if(n1 != n2){
	 cerr << "Actual value is " << n1 << ", expected " << n2 <<endl;
	}	
}

int binarySearch(vector <int> &arr, int key){

int low = 0;
int high = arr.size() -1 ;
while(low <= high){
	int mid = (low + high) / 2;
	if(arr[mid] == key){
		return mid;
	} else if (arr[mid] < key){
		low = mid + 1;
	}
	else {
		high = mid - 1;
	}

	}
	return -1;
}

TEST(BinarySearchTest, BasicTest) {

	vector<int> arr;
	arr.push_back(5);
	arr.push_back(10);
	arr.push_back(15);
	arr.push_back(20);
        EXPECT_EQ(binarySearch(arr, 0), - 1);
        EXPECT_EQ(binarySearch(arr, 5), 0);
        EXPECT_EQ(binarySearch(arr, 10), 1);
        EXPECT_EQ(binarySearch(arr, 13), -1);
        EXPECT_EQ(binarySearch(arr, 20), 3);
        EXPECT_EQ(binarySearch(arr, 40), -1);

}

TEST(BinarySearchTest, SmallVectorTest) {

	vector<int> arr;
	arr.push_back(5);
        EXPECT_EQ(binarySearch(arr, 0), -1);
        EXPECT_EQ(binarySearch(arr, 5), 0);
        EXPECT_EQ(binarySearch(arr, 10), -1);

}

TEST(BinarySearchTest, EmptyVectorTest) {
	vector<int> arr;
	EXPECT_TRUE(arr.size() == 0);
        EXPECT_EQ(binarySearch(arr, 10), -1);
}


/*int main() {

	basicTest();
	smallVectorTest();
	emptyVectorTest();
	return 0;
}*/

int main(int argc, char **argv){
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

