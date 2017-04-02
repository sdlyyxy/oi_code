#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstring>
#include<cctype>
#include<vector>
#include<cstdlib>
#include<ctime>
using namespace std;
#define REP(i,begin,end) for(int (i)=(begin);(i)<(end);i++)
const int list[]={ 	4, 22, 27, 58, 85, 94, 121, 166, 202, 265, 274, 319, 346, 355, 378, 382, 391, 438, 454, 483, 517, 526, 535, 562, 576, 588, 627, 634, 636, 645, 648, 654, 663, 666, 690, 706, 728, 729, 762, 778, 825, 852, 861, 895, 913, 915, 922, 958, 985, 1086, 1111, 1165};
int main(){
	int a;
	cin>>a;
	cout<<list[a-1]<<endl;
	return 0;
}
//OSIS Smith(joke) number....
//Traditionally the first problem of April Fools Day contest asks to recognize a sequence of integers by problem title and (this time) a single data point. OEIS search for just the given number isn't going to give a result ¡ª or rather is going to give too many to be useful. However, if you look for the problem title, the first result for "numbers joke" query will give you https://oeis.org/A006753 "Smith (or joke) numbers", which has 27 as its 3rd element.
