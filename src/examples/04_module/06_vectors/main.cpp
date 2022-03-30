#include "vec.h"
#include <vector>

using std::vector;

int main() 
{
	vector<int> nums{1,31,0};
	nums.push_back(5);
	nums[0] = 5;

	for(auto n: nums)
	{
		cout<<n;
	}
	cout<<"\n";
	
	vector<int> nums1;
	nums1.push_back(10);
	nums1. push.pack(15);
	nums1.push_back(7);
	 for(auto n: nums)
	 {
		 cout << n <<" ; ";
	 }
	 





	/*std::string name = "joe";

	return 0;*/
	
}