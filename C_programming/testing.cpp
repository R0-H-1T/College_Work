#include<bits/stdc++.h>
using namespace std;

bool palindrome(int n)
{
    int temp = n, revN = 0;
    while(temp > 0){
        revN = (revN * 10) + temp%10;
        temp /= 10;
    }
    if(revN == n) return true;
    else return false;
}

int power(int n, int p){
	int temp=1;
	for(int i=0; i<p ; i++){
		temp *= n;
	}
	return temp;
}

bool checkArmstrong(int n){
	//Write your code here
	int temp = n, count = 0, sum = 0;
	while(temp > 0){
		temp /= 10;
		count++;
	}
	temp = n;
	while(temp > 0){
		sum += power(temp%10, count);
        temp /= 10;
	}
    cout<<endl<<sum;
	if(sum == n) return true;
	else return false;

}



void printName(int start, int end, string name){
	if( start < end ){
		return;
	}
	cout<<start-1<<" "<<name<<endl;
	printName(start-1, end, name);
}

int sumN_Numbers(int x, int sum){
	if(x<1){
		cout<<sum<<endl;
		return 0;
	}
	sumN_Numbers(x-1, sum+x);

}

int main()
{
	cout<<sumN_Numbers(3, 0);
    return 0;
}