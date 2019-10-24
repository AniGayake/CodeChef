/*
Vasya likes the number 239. Therefore, he considers a number pretty if its last digit is 2, 3 or 9

.

Vasya wants to watch the numbers between L
and 1≤L≤R≤105

(both inclusive), so he asked you to determine how many pretty numbers are in this range. Can you help him?
Input

    The first line of the input contains a single integer T

denoting the number of test cases. The description of T
test cases follows.
The first and only line of each test case contains two space-separated integers L
and R

    .

Output

For each test case, print a single line containing one integer — the number of pretty numbers between L
and R

.
Constraints

    1≤T≤100

1≤L≤R≤105

Subtasks

Subtask #1 (100 points): original constraints
Example Input

2
1 10
11 33

Example Output

3
8

Explanation

Example case 1: The pretty numbers between 1
and 10 are 2, 3 and 9

.

Example case 2: The pretty numbers between 11
and 33 are 12, 13, 19, 22, 23, 29, 32 and 33.
*/
#include<iostream>
using namespace std;
int main()
{
	int T;
	long int L,R;
	

	cin>>T;
	
	for (int i = 0; i < T; i++)
	{
		int pn=0;
		cin>>L>>R;
		for (int i = L; i <=R; i++)
		{
			int rem = i%10;
			if(rem==2||rem==3||rem==9)
				pn++;
		}
		cout<<pn<<"\n";
	}



}