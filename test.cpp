#include <conio.h>
#include <stdio.h>
int main()
{
#include <iostream>
#include <ctime>

unsigned t0, t1;

t0=clock()
// Code to execute
t1 = clock();

double time = (double(t1-t0)/CLOCKS_PER_SEC);
cout << "Execution Time: " << time << endl;
return 0;


}
