#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int const N = 100;
//Enter static array
void intputStaticAr(int mas[], int n) {
	cout << " Enter " << n << " elements of array: ";
	for (int i = 0; i < n; i++) {
		cin >> mas[i];
	}
}
//Conversion from 10 to 3 
int conversion(int i) {
	int step = 0;
	while (i != 0) {
		step = step + i % 3;
		step *= 10;
		i /= 3;
	}
	return step;
}
//Check amount of 2 in number
int twoCheck(int i) {
	int step = 0, x = 0;
	while (i != 0) {
		step = i % 10;
		if (step == 2) {
			x++;
		}
		i /= 10;	
	}
	if (x == 2) {
		return 1;
		
	}
	else {
		return 0;
	}
}
//Returning result for point 1
int mainWorkPointOneOne(int mas[]) {
	int i = 0,step = 0, x = 0;
	for (i = 0; i < 10; i++) {
		step = conversion(mas[i]);
		if (twoCheck(step) == 1) {
			return i;
		}
	}
	cout << " There is no numbers that you need";
	return 0;
}
//Returning result for point 2
//Ad new element to array
void mainWorkPointOneTwo(int mas[], int n) {
	int nElement, i, arr[N], step;
	cout << "1Enter new element of array: ";
	cin >> nElement;
	for (i = 0; i < mainWorkPointOneOne(mas) + 1; i++) {
		arr[i] = mas[i];
	}
	arr[mainWorkPointOneOne(mas) + 1] = nElement;
	step = mainWorkPointOneOne(mas) + 2;
	while (step != (n + 1)) {
		arr[step] = mas[i];
		step++;
		i++;
	}
	cout << " New array is ";
	for (i = 0; i < n + 1; i++) {
		cout << arr[i] << " ";
	}
}
//Returning result for point 3
//Delete element of an array
void mainWorkPointOneThree(int mas[], int n) {
	int arr[N], i, step;
	for (i = 0; i < mainWorkPointOneOne(mas); i++) {
		arr[i] = mas[i];
	}
	step = mainWorkPointOneOne(mas);
	i++;
	while (step != (n - 1)) {
		arr[step] = mas[i];
		step++;
		i++;
	}
	cout << " New array is ";
	for (i = 0; i < n - 1; i++) {
		cout << arr[i] << " ";
	}
}
//Input dynamic array
void intputDynamicAr(int *mas, int n) {
	cout << " Enter " << n << " elements of array: ";
	for (int i = 0; i < n; i++) {
		cin >> mas[i];
	}
}
//Returning result for point 1 for dynamic array
int mainWorkPointTwoOne(int *mas) {
	int i = 0, step = 0, x = 0;
	for (i = 0; i < 10; i++) {
		step = conversion(mas[i]);
		if (twoCheck(step) == 1) {
			return i;
		}
	}
	cout << " There is no numbers that you need";
	return 0;
}
//Returning result for point 2 for dynamic array
//Ad new element to array
void mainWorkPointTwoTwo(int *mas, int n) {
	int nElement, i, arr[N], step;
	cout << "Enter new element of array: ";
	cin >> nElement;
	for (i = 0; i < mainWorkPointTwoOne(mas) + 1; i++) {
		arr[i] = mas[i];
	}
	arr[mainWorkPointTwoOne(mas) + 1] = nElement;
	step = mainWorkPointTwoOne(mas) + 2;
	while (step != (n + 1)) {
		arr[step] = mas[i];
		step++;
		i++;
	}
	cout << " New array is ";
	for (i = 0; i < n + 1; i++) {
		cout << arr[i] << " ";
	}
}
//Returning result for point 3 for dynamic array
//Delete element of an array
void mainWorkPointTwoThree(int *mas, int n) {
	int arr[N], i, step;
	for (i = 0; i < mainWorkPointTwoOne(mas); i++) {
		arr[i] = mas[i];
	}
	step = mainWorkPointTwoOne(mas);
	i++;
	while (step != (n - 1)) {
		arr[step] = mas[i];
		step++;
		i++;
	}
	cout << " New array is ";
	for (i = 0; i < n - 1; i++) {
		cout << arr[i] << " ";
	}
}
//Input vector array
void intputDynamicAr(vector<int>* mas, int n) {
	cout << " Enter " << mas->size() << " elements of array: ";
	for (int i = 0; i < mas->size(); i++) {
		cin >> mas->at(i);
	}
}

//Returning result for point 1 for vector array
int mainWorkPointThreeOne(vector<int>* mas, int n){
	int i = 0, step = 0, x = 0;
	for (i = 0; i < mas ->size(); i++) {
		step = conversion(mas->at(i));
		if (twoCheck(step) == 1) {
			return i;
		}
	}
	cout << " There is no numbers that you need";
	return 0;
}
//Returning result for point 2 for vector array
//Ad new element to array
void mainWorkPointThreeTwo(vector<int>*mas, int n) {
	int nElement, i, arr[N], step;
	cout << "Enter new element of array: ";
	cin >> nElement;
	for (i = 0; i < mainWorkPointThreeOne(mas, n) + 1; i++) {
		arr[i] = mas->at(i);
	}
	arr[mainWorkPointThreeOne(mas, n) + 1] = nElement;
	step = mainWorkPointThreeOne(mas, n) + 2;
	while (step != (n + 1)) {
		arr[step] = mas->at(i);
		step++;
		i++;
	}
	cout << " New array is ";
	for (i = 0; i < n + 1; i++) {
		cout << arr[i] << " ";
	}
}
//Returning result for point 3 for dynamic array
//Delete element of an array
void mainWorkPointThreeThree(vector<int>* mas, int n) {
	vector<int> arr;
	arr.resize(n - 1);
	int i, step;
	for (i = 0; i < mainWorkPointThreeOne(mas, n); i++) {
		arr[i] = mas->at(i);
	}
	step = mainWorkPointThreeOne(mas, n);
	i++;
	while (step != (n - 1)) {
		arr[step] = mas->at(i);
		step++;
		i++;
	}
	cout << " New array is ";
	for (i = 0; i < n - 1; i++) {
		cout << arr[i] << " ";
	}
}
//Otput of array
void otputArr(vector <int>& mas, int n) {
	for (int i = 0; i < n; i++) {
		cout << mas[i] << " ";
	}
}
