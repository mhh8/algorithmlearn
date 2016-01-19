#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	vector<string> anagrams(vector<string> &str){
		if(str.size()<2){
			 return str;
			}
		vector<string> result;
		vector<bool>visited(str.size(),false);
		for(int s1=0;s1!=str.size();++s1){
			bool has_anagrams=false;
			for(int s2=s1+1;s2<str.size();++s2){
				if((!visited[s2])&&isAnagrams(str[s1],str[s2])){
					result.push_back(str[s2]);
					visited[s2]=true;
					has_anagrams=true;
				}
			}
			if((!visited[s1])&&has_anagrams) 
				result.push_back(str[s1]);
		}
		return result;
	}




private:
	bool isAnagrams(string &s,string &t){
		if(s.size()!=t.size())
			return false;
		const int AlphabetNum=26;
		int letterCount[AlphabetNum]={0};
		
		for(int s1=0;s1!=s.size();++s1){
			++letterCount[s.at(s1)-'a'];
			--letterCount[t.at(s1)-'a'];
		}
		for(int i = 0;i<AlphabetNum;++i){
			if(letterCount[i]<0) return false;
		}
		return true;
	}



};

int main(){
	string s1[]={"att","bt","taa","tb","aa","yu"};
	size_t s_count=sizeof(s1)/sizeof(string);
	vector<string> source(s1,s1+s_count),result;//s2({"ata","tb","ta","tb","aa","yu"}),
	Solution myApp;
	result=myApp.anagrams(source);
	cout<<result.size()<<" ";
	for(int i=0;i!=result.size();++i){
		cout<<result[i]<<" ";
	}
	cout<<endl;

return 0;
}
