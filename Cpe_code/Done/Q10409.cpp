#include <iostream>
#include <string>
using namespace std;

int main() {
	int testNum;
	while (cin >> testNum){
		if (testNum <= 0)
			break;
		int top = 1, north = 2, west = 3, east = 4, south = 5, down = 6;
		for (int i = 0; i < testNum; i++){
			string com;
			int t;
			cin >> com;
			switch (com[0]){
				case 'n':
					t = top;
					top = south;
					south = down;
					down = north;
					north = t;
					break;
				case 's':
					t = top;
					top = north;
					north = down;
					down = south;
					south = t;
					break;
				case 'e':
					t = top;
					top = west;
					west = down;
					down = east;
					east = t;
					break;
				case 'w':
					t = top;
					top = east;
					east = down;
					down = west;
					west = t;
					break;
			}
		}
		cout << top << endl;
	}
	return 0;
}