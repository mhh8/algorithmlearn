#include<iostream>

using namespace std;

class Solution {
public:
//	Solution(int *temp){
//	arry=temp;
//	}
	void print(int arr[],int len){
	  int *p=arr,l=len;
	  while(l>0){
	    cout<<*p<<" ";
	    p++;
	    l--;
 	  }
          cout<<":"<<"len="<<len<<endl;
      
	  
	  quickSort(arr,0,len-1);
	  p=arr;
	  l=len;
	  while(l>0){
	    cout<<*p<<" ";
	    p++;

	    }
	  cout<<endl;

	}



private:
//	int arry[];

	int swap(int &s1,int &s2){
	  if(s1==s2) return 0;
	  cout<<"enter swap!";
	  int temp=0;
	  temp=s1;
	  s1=s2;
	  s2=temp;
	 cout<<"enter swap!"<<"s1="<<s1<<"s2="<<s2<<" ";
	  return 1;
	}

	void quickSort(int arry[],int lo,int hi){
	  cout<<"enter quickSort"<<endl;
	  if(lo>=hi) return;
	  
	  int key = arry[lo];
	  cout<<"key="<<key<<" ";
	  int left=lo+1;
	  int right=hi;
	  while(left<=right){
	    while((left<=right) &&( arry[left]<key)){
	      left++;    
	    }	
	    while(arry[right]>key){
 	     right--;
	    }
	    if(left>right) break;
	    swap(arry[left],arry[right]);
	  
	  }
	  swap(arry[lo],arry[right]);
	  quickSort(arry,lo,right-1);
	  quickSort(arry,right+1,hi);
	}

};
//Data swop function

void Swap(int &p,int &q)                           

{                                                       

     int temp = p;

       p=q;

       q=temp;

} 

 

//Partition function

int Partition(int ArrayInput[],int nLow,int nHigh)                 

{                                                  

                                                                            

    int nTemp=ArrayInput[nHigh];    

    int i = nLow, j=nLow-1;   

       for(; i<nHigh; i++)

       {

              if( ArrayInput[i]<=nTemp )

              {

                     j++;

                     if(i !=j )

                     {

                           Swap(ArrayInput[i], ArrayInput[j]);

                     }

              }

       }

       

       Swap(ArrayInput[j+1],ArrayInput[nHigh]);

 

    return (j+1);                                         

}

 

//Quick sort

void Quick_sort(int ArrayInput[],int nLow,int nHigh)             

{                                                                                                        

    if(nLow < nHigh)                                         

    {                                                 

        int nIndex=Partition(ArrayInput , nLow, nHigh);                          

        Quick_sort(ArrayInput , nLow, nIndex-1);                            

        Quick_sort(ArrayInput , nIndex+1, nHigh);                            

    }                                                 

} 

int main(){
int arry[]={5,1,2,0,9,8,99,1,7,20};
//Solution myApp;
//myApp.print(arry,10 );
for(int i=0;i<10;i++)
 cout<<arry[i]<<" ";
 cout<<endl;
Quick_sort(arry,0,9);
for(int i=0;i<10;i++)
 cout<<arry[i]<<" ";
 cout<<endl;

return 0;
}
