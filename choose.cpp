#include<iostream>
#include<cstdlib>
#include<vector>

using namespace std;

int max(vector<int> &arr,int rightLim) {
	int maxElement = arr[0];
	for(int i = 0; i<rightLim;i++) {
		if(arr[i]>maxElement) {
			maxElement = arr[i];
		}
	}
	return maxElement;
}
void swap(vector<int> &arr,int first,int second) {
	int buffer = arr[second];
	arr[second] = arr[first];
    arr[first] = buffer;

}
int takeIndex(vector<int> &arr, int element) {
	for(int i = 0; i<arr.size();i++) {
		if (arr[i] == element) {
			return i;
		}
	}
}

void choose(vector<int> &arr) {
	for(int i = arr.size();i>0;i--) {
		swap(arr,i-1,takeIndex(arr,max(arr,i)));
	}
}
int main() {
	vector<int> arr(6,0);
	for(int i = 0; i<arr.size();i++) {
		arr[i] = rand()%100;
	}

	for(int i = 0; i<arr.size();i++) {
		cout << arr[i] << endl;
	}
	cout << "---Sorting your array---" << endl;
	choose(arr);
	/*
	swap(arr,arr.size()-1,takeIndex(arr,max(arr,arr.size())));
	swap(arr,arr.size()-2,takeIndex(arr,max(arr,arr.size()-1)));
	swap(arr,arr.size()-3,takeIndex(arr,max(arr,arr.size()-2)));
	swap(arr,arr.size()-4,takeIndex(arr,max(arr,arr.size()-3)));
	*/
	for(int i = 0; i<arr.size();i++) {
		cout << arr[i] << endl;
	}
	return 0;


}