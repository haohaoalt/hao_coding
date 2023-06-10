#include<iostream>
#include<vector>
#include<algorithm>
int main(){
	std::vector<int> nums{1,2,3,4,5};
	//lambda表达式接受两个int类型参数，返回值是一个bool类型
	auto is_odd = [](int num)->bool{
		return num%2 == 1;
	};
	//使用STL算法的find_if找到第一个满足条件的元素
	auto it = std::find_if(nums.begin(),nums.end(),is_odd);
	//输出结果
	if(it != nums.end()){
		std::cout << "The first odd number is:" << *it << std::endl;
	}else{
		std::cout << "There is no odd number in the vector." << std::endl;
	}
	return 0;
}
