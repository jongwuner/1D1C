#include<iostream>
using namespace std;
int R, B, L, W;
int main() {
	scanf("%d %d", &R, &B);
	// h(세로) + w(가로) = R/2;
	for (int h = 1; h <= R / 2 && R / 2 - h - 2 > 0; h++) {
		if (h * (R / 2 - h - 2) == B) {
			L = (h + 2 >= R / 2 - h) ? h + 2 : R / 2 - h;
			W = (h + 2 < R / 2 - h) ? h + 2 : R / 2 - h;
			break;
		}
	}
	printf("%d %d\n", L, W);
	return 0;
}