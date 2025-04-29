#include <iostream>

using namespace std;

void func2() {

int z = 30; // 

cout << "Inside func2: z = " << z << endl;

}

void func1() {

int y = 20;

cout << "Inside func1: y = " << y << endl;

func2();

}

int main() {

int x = 10; // Local variable in main

cout << "Inside main: x = " << x << endl;

func1();

return 0;

}

