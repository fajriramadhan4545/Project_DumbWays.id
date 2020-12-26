#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int A[3][5]={{2,8,14,20,26},{32,38,44,50,56},{62,68,74,80,86}};
	for (int b=0; b<3; b++){
		for (int k=0; k<4; k++){
			cout<<A[b][k]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
