#include<iostream>
#include<cstdlib>
#include<vector>
#include<ctime>
using namespace std;

int takeIndex(vector<int> &arr, int element) {
	for(int i = 0; i<arr.size();i++) {
		if (arr[i] == element) {
			return i;
		}
	}
}
void swap(vector<int> &arr,int first,int second) {
	int buffer = arr[second];
	arr[second] = arr[first];
    arr[first] = buffer;

}
void insert(vector<int> &arr, int lim) {
	for(int i = lim;i>=0;i--) {
		if(arr[i] >= arr[i-1] && arr[i] >= arr[i+1]) {
			break;
		}
		if(arr[i] >= arr[i-1] && arr[i] <= arr[i+1]) {
			break;
		} else {
			swap(arr,i,i-1);
		}
	}
}
void insertion(vector<int> &arr) {
	for(int i = 0; i<arr.size();i++) {
		insert(arr,i);
	}
}

int main()
{  
	vector<int> arr(7,0);
	srand(time(NULL));
	for(int i = 0; i<arr.size();i++) {
		arr[i] = rand()%100;
	}

	for(int i = 0; i<arr.size();i++) {
		cout << arr[i] << endl;
	}
	cout << "---Sorting your array---" << endl;
	insertion(arr);
	for(int i = 0; i<arr.size();i++) {
		cout << arr[i] << endl;
	}
    return 0;
}