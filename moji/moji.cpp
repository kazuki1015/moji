#include "loadData.h"
#include "number.h"
int main() {
	int num = 0;
	loadData("data.txt", &num);
	number(num);
	//修正
}