#include<iostream>
#include<vector>
#include<string>
#include<iterator>
#include<algorithm>

using namespace std;

class Solution {
	
public:
	vector<vector<int> > subsets(vector<int>& nums){
		vector<vector<int> > result;
		count=0;
		if(nums.empty()) 
		  return result;
		sort(nums.begin(),nums.end());
		vector<int> list;
		dfs(nums,0,list,result);


		return result;
	}
	 double  getSize(){

	return count;

	}


private:
	double count;
	void dfs(vector<int>& nums, int pos,vector<int> list,vector<vector<int> >& ret){
		ret.push_back(list);
		count++;
		for(int i=pos;i<nums.size();i++){
		 list.push_back(nums[i]);
		 dfs(nums,i+1,list,ret);
		 list.pop_back();
		}
	}
		   


};

int main(){

  Solution myApp;
  
  ostream_iterator<int> os(cout,"");
  int a[]={ 1,8,5,6,3,4,7,9};
  vector<int> nums(a,a+8);
  vector<vector<int> >result;
  result=myApp.subsets(nums);
  vector<vector<int> >::iterator i;
  vector<int> ::iterator j;

 for(int i=0;i<myApp.getSize();i++){  //nums.size()  result[i].empty()==
  copy(result[i].begin(),result[i].end(),os);
  cout<<endl;
  }
//  for(i=nums.begin();i!=nums.end();i++)
//   {
//      for(j=i->begin();j!=i->end();j++)
//     {
      // cout<<nums[i][j];
//	cout<<*j;	
//      }
//     cout<<endl;	
   // }
cout<<"nums:"<<myApp.getSize()<<endl;

return 0;
}
