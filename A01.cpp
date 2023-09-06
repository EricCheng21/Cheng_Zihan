//creat a string, once it meet "aeiou", change to specific mark 
//and add in 



#include<iostream>
#include<string>
using namespace std;
int main(int argc , char *argv[])
{
		string word;
		string word_01 = " ";
		cin >> word;
		for (int i = 0; i < word.length(); i++)
		{
			char str = word[i];
			if (str == 'a')
			{
				word_01 += '@';
			}
			else if (str == 'e')
			{
				word_01 += '3';
			}
			else if (str == 'i')
			{
				word_01 += '1';
			}
			else if (str == 'o')
			{
				word_01 += '0';
			}
			else if (str == 'u')
			{
				word_01 += '8';
			}
			else word_01 += str;
		}
		cout << word_01;
		
		
	return 0;
	
}