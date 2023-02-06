#include <stdio.h>
#include "Vector2.h"

int main() {

	Vector2 a(4, 8);
	Vector2 b(-2, 3);

	Vector2 aPb = a + b;
	Vector2 aMb = a - b;

	printf("a(x,y) : %f,%f\n", a.x,a.y);
	printf("b(x,y) : %f,%f\n", b.x, b.y);
	printf("a + b = (%f,%f)\n", aPb.x, aPb.y);
	printf("a - b = (%f,%f)\n", aMb.x, aMb.y);

	int i = 0;

	while (i != 1) {
		printf("コンソールアプリケーションを終了する場合は数字の1を入力してEnterキーを押してください");
		scanf_s("%d", &i);
	}
	return 0;
}