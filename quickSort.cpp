#include<iostream>

using namespace std;

class Solution {
public:
//	Solution(int *temp){
//	arry=temp;
//	}
	void print(int arr[],int len){
	  int *p,l=len;
	 // int arr[]={4,2,5,66,21,4,5,7,6,10};
	  p=arr;
	  while(l>0){
	    cout<<*p<<" ";
	    p++;
	    l--;
 	  }
    cout<<":"<<"len="<<len<<endl;
      
	  
	  quickSort(arr,0,9);
	  p=arr;
	  l=len;
	  while(l>0){
	    cout<<*p<<" ";
	    p++;
			l--;
	    }
	  cout<<endl;

	}



private:
//	int arry[];

	void swap(int &s1,int &s2){
	  if(s1!=s2){
	  cout<<"enter swap!";
//	  int temp=0;
	  s1=s1^s2;
	  s2=s1^s2;
	  s1=s1^s2;
	 cout<<"enter swap!"<<"s1="<<s1<<"s2="<<s2<<" ";
	  }
	}

	void quickSort(int arry[],int lo,int hi){
	  cout<<"enter quickSort"<<endl;
	  if(lo>=hi) return ;
	  //if(lo<hi)
	  	{
		  int key = arry[lo];
		  cout<<"key="<<key<<" ";
		  int left=lo+1;
		  int right=hi;
		  while(left<=right){
			    while((left<=right) &&( arry[left]<=key)){
			      left++; 
			      cout<<"left="<<left<<" ";   
			    }	
			    while(arry[right]>key){
		 	     right--;
		 	     cout<<"right="<<right<<" ";
			    }
			    if(left>right) break;  // arry[right--]=arry[left];//
			    swap(arry[left],arry[right]);
		  
		  }
	 
		  swap(arry[lo],arry[right]);
		  quickSort(arry,lo,right-1);
		  quickSort(arry,right+1,hi);
		  }	
 
	}
};

int main(){
int arry[]={5,1,2,0,9,8,99,1,7,20};
Solution myApp;
myApp.print(arry,10 );



return 0;
}
