#include <iostream>
using std::cout;
using std::endl;

void inter(int* numbers)
{
	numbers[1]=10;
	cout<<numbers[1]<<endl;
}
int main()
{
	int nums[] = {1,5,2};
	cout<<nums[1]<<endl;
	inter(nums);
	cout<<nums[1]<<endl;
	return 0;
}
