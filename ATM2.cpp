#include <iostream>
#include <vector> 
using namespace std;

int main() {
	int T;
	cin>>T;
	int N, K;
	
	vector<int> v;
	while(T--)
	{
	    cin>>N>>K;
	    int x;
	    for (int i = 0; i < N; i++) {
     cin >> x;
     v.push_back(x);
}
	  for(auto item: v){
        if(item <= K)
        {
            K = K - item;
            cout<<"1";
        }
        else
        {
            cout<<"0";
        }
    }
	    cout<<endl;
	    v.clear();
	}
	return 0;
}
