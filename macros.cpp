#include <iostream>
#include <string>
using namespace std;

#define ARRAY_LENGTH 10
#define PI 3.125
#define MY_DOUBLE double
#define FAV_WHISKY "Dimple"

int main()
{
	int numbers [ARRAY_LENGTH] = {0};
	cout << "Array's length:" << sizeof(numbers) / sizeof(int) << endl;
	cout << "Give a radius: ";
	MY_DOUBLE radius = 0;
	cin >> radius;
	cout << "Area is: " << PI*radius*radius << endl;
	
	string favoriteWhisky (FAV_WHISKY);
	cout << "My favorite drink is: " << FAV_WHISKY << endl;
	
	return 0;
}