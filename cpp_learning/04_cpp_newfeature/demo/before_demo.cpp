#include<iostream>
#include"opencv4/opencv2/opencv.hpp"
using namespace cv;
using namespace std;
bool cmp(Point2i pt1, Point2i pt2){
	if(pt1.x != pt2.x){
		return (pt1.x < pt2.x);
	}
	if(pt1.y != pt2.y){
		return(pt1.y < pt2.y);
	}
	return true;
}
int main(){
	vector<Point2i> vec;
	vec.push_back(Point2i(2,1));
	vec.push_back(Point2i(3,3));
	vec.push_back(Point2i(2,3));
	vec.push_back(Point2i(3,2));
	vec.push_back(Point2i(3,1));
	vec.push_back(Point2i(1,3));
	vec.push_back(Point2i(1,1));
	vec.push_back(Point2i(2,2));
	vec.push_back(Point2i(1,2));
	cout << "befor sort : " << endl;
	for(auto n:vec)
		cout << n << endl;
	sort(vec.begin(),vec.end(),cmp);
	cout << "After sort: " << endl;
	for(auto n:vec)
		cout << n << endl;
	return 0;
}
