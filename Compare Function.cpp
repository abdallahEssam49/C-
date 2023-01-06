#include <bits/stdc++.h>
using namespace  std;
#define test int t; cin>>t; while(t--)

void fast(){ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);}

bool comp(const pair < int , int > &a , const pair < int , int > &b)
{
	return a.second < b.second ;
  /*
  output : 
  1 6
  2 8
  7 12
  10 16
  */
  
  /*
  
  Compare function to sort vector of pairs by second , you can sort it by first or first with second : 
  return a.second > b.second ;
  return a.first < b.first ;
  return a.first > b.first ;
  return a.first < b.second ;
  return a.first > b.second ;
  */
}

void solve ()
{
	
	vector<pair < int , int > > p = {{10,16},{2,8},{1,6},{7,12}};
	sort(p.begin() , p.end() , comp);
	
	for(auto point : p)cout << point.first << " " << point.second << "\n";
}


int main() 
{
  fast(); 
  //test 
  solve();
}
