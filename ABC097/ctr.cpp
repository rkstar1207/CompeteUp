#include <bits/stdc++.h>

int main(void)
{
	int a,b,c,d;
	std::cin>>a>>b>>c>>d;
	if((abs(a-c) <= d) || ((abs(a-b) <= d) && (abs(b-c) <= d)))
	std::cout<<"Yes\n";
	else std::cout<<"No\n";
	return 0;	
}