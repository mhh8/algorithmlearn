#include<iostream>

using namespace std;
	void quickSortMh(int arry[],int lo,int hi);
 void swap(int &s1,int &s2);
 
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
      
	  quickSortMh(arr,0,9);
	  p=arr;
	  l=len;
	  while(l>0){
	    cout<<*p<<" ";
	    p++;
			l--;
	    }
	  cout<<endl;

	}



 

	void swap(int &s1,int &s2){
	  if(s1!=s2){
	  cout<<"enter swap!";
	  int temp=0;
	  temp=s1;
	  s1=s2;
	  s2=temp;
	 cout<<"enter swap!"<<" s1="<<s1<<" s2="<<s2<<" ";
	  }
	}

	void quickSortMh(int arry[],int lo,int hi){
	  cout<<"enter quickSort"<<endl;
	    if(lo>=hi) return ;
	  //if(lo<hi)
	  	{
		  int key ;
		   key= arry[lo];
		  cout<<"key="<<key<<" ";
		  int left=lo+1;
		  int right=hi;
		  while(left<=right){
			    while((left<=right) &&( arry[left]<=key)){
			      left++; 
			      cout<<"left="<<left<<" ";   
			    }	
			    while(arry[right]>key){   //(left<=right) &&
		 	     right--;
		 	     cout<<"right="<<right<<" ";
			    }
			    if(left>right) break;  // arry[right--]=arry[left];//
			    swap(arry[left],arry[right]);
		  
		  }
		  //arry[left]=key;
		  swap(arry[lo],arry[right]);
		  quickSortMh(arry,lo,right-1);
		  quickSortMh(arry,right+1,hi);
		  }	
 
	}
 

int main(){
int arry[]={5,1,2,0,9,8,99,10,7,2};
 
 print(arry,10 );



return 0;
}
