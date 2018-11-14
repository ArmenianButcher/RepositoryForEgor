#include<iostream>
#include<cstdlib>
#include<vector>

using namespace std;

void bubble(vector<int> &arr) {
	while(true){
		int counter = 0;
		for(int i = 1; i < arr.size(); i++){
			if(arr[i] < arr[i-1]){
				swap(arr[i],arr[i-1]);
				counter++;
			}
		}
		if(counter == 0){break;}
	}
}

int main() {
	vector<int> arr(12,0);
	for(int i = 0; i<arr.size();i++) {
		arr[i] = rand()%100;
	}
	cout << "---Your start array---" << endl;
	for(int i = 0; i<arr.size();i++) {
		cout << arr[i] << endl;
	}
	cout << "---The end of your start array---" << endl;
	cout << "---Sorting...---" << endl;
	bubble(arr);
	cout << "Sorted array with choosen element: " << endl;
	for(int i = 0; i<arr.size();i++) {
		cout << arr[i] << endl;
	}
}