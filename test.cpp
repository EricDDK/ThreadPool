#include "iostream"
#include "ThreadPool.h"

void test1(int a, int b)
{
	// TODO
	a = a + b;
	return;
}

void test2(double a, double b)
{
	// TODO
	a = a + b;
	return;
}

void callback()
{
	std::cout << "call back is end\n" << std::endl;
}

int main()
{
	ThreadPool pool;
	pool.init(5);
	pool.add(std::bind(&test1, 1, 2), std::bind(&callback));
	pool.add(std::bind(&test2, 1.0, 2.0), std::bind(&callback));
	pool.add(std::bind(&test2, 1.0, 2.0));
	system("pause");
	return 1;
}