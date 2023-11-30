#include "loadData.h"
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
	void loadData(const char* filename, int* num)
	{
		FILE* fp = fopen(filename, "r");
		assert(fp);
		fscanf_s(fp, "%d", num);
		fclose(fp);
	}

