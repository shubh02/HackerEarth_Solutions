/*
Manna is extremely disappointed to find out that no one in his college knows his first name. Even his classmates call him only by his last name. Frustrated, he decides to make his fellow college students know his first name by forcing them to solve this question.

You are given a long string as input in each testcase, containing any ASCII character. Your task is to find out the number of times SUVO and SUVOJIT appears in it.

Note: This problem must be solved in C language only.

Input Format
The first line contains the number of testcases, T. Next, T lines follow each containing a long string S.

Output Format
For each long string S, display the no. of times SUVO and SUVOJIT appears in it.

Constraints

1 <= T <= 100
1 <= Length of each string <= 150
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
	int i,t,suvo,suvojit,len;
	string str;
	cin>> t;
	while(t--)
	{
		len=0;suvo=0;suvojit=0;
		cin >> str;
		len=str.length();
		if(len<4)
		cout << "SUVO = 0"<<", SUVOJIT = 0"<<endl;
		else
		{
		for(i=0;i<len;i++)
		{
			if(str[i]=='S' && str[i+1]=='U' && str[i+2]=='V' && str[i+3]=='O')
			{
				if(str[i+4]=='J' && str[i+5]=='I' && str[i+6]=='T')
				{
				   suvojit++;
				}
				   else suvo++;
			}
		}
		cout << "SUVO = "<<suvo<<", SUVOJIT = "<<suvojit<<endl;
		}
	}
	return 0;
}
