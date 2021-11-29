#include <stdio.h>
#include <math.h>
void function1(char num)
{
	printf("xin chao: %d\r\n", num);
}

void function2()
{
	printf("xin chao\r\n");
}

// f(x) = x^2
float fx(float x)
{
	return x * x;
}

float gx(float x)
{
	return x * x * x + 1;
}

float SIN(float x)
{
	return sin(x);
}
//tich phan cua fx = x^2
float tich_phan(float a, float b, float (*ham)(float))
{
	float h = (b - a) / 1000;
	float ketQua = 0;
	for (float i = a; i < b - h; i += h)
	{
		ketQua += ((ham(i) + ham(i + h)) / 2) *h;
	}
	return ketQua;
}

void main()
{
	float x = tich_phan(1, 2, SIN);

}