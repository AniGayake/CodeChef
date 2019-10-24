#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,l;
	cin>>n>>l;
	string correct,s;
	cin>>correct;
	vector<int >v;
	int mismatch[1001];

	string strArray[1001];

	for(int i=0;i<n;i++){
		int count =0;
		cin>>strArray[i];
		for(int j=0;j<l;j++){
			if(correct[j]!= strArray[i][j])
				count++;
		}
		//cout<<count;
		v.push_back(count);
		mismatch[i] = count;
	}

	int minIndex=0,minError=100000001;
		for(int i=0;i<n;i++)
		{
			if(mismatch[i]<minError)
				{
					minError=mismatch[i];
					minIndex= i;
				}
		}
	cout<< strArray[minIndex]<<"\n";
}