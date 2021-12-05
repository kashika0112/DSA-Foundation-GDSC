#include <bits/stdc++.h>
using namespace std;

bool Palindrome(string str, int s, int e)
{
	if(s == e){
		return true;
	}

	if(str[s] != str[e]){
		return false;
	}
	if(s < e + 1){
		return Palindrome(str, s + 1, e - 1);
	}
	return true;
}

bool isPalindrome(string s)
{
	int n = s.length();

	if(n == 0){
		return true;
	}
	return Palindrome(s, 0, n - 1);
}

int main()
{
	string s = "abbcbba";
	if(isPalindrome(s)){
		cout<<"Palindrome"<<endl;
	}
	else{
		cout<<"Not Palindrome"<<endl;
	}
	return 0;
}