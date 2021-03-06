#include <bits/stdc++.h>
using namespace std;

vector<string> getMazePaths(int sr,int sc, int dr, int dc)
{
	if(sr==dr && sc==dc)
	{
		vector<string> res;
		res.push_back("");
		return res;
	}


	vector<string> path1;
	vector<string> path2;
	if(sc<dc)
		path1=getMazePaths(sr,sc+1,dr,dc);

	if(sr<dc)
		path2=getMazePaths(sr+1,sc,dr,dc);


	vector<string> paths;

	for(string path:path1)
	{
		paths.push_back("h"+path);
	}
	for(string path:path2)
	{
		paths.push_back("v"+path);
	}

	return paths;

}

int main()
{
	int row=3;
	int col=3;

	vector<string> result=getMazePaths(1,1,row,col);
	cout<<"[";
	for(int i=0;i<result.size();i++)
	{
		cout<<result[i];
		if(i!=result.size()-1)
			cout<<",";
	}

	cout<<"]"<<endl;
	return 0;
}