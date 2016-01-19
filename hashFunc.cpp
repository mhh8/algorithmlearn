#include<iostream>
#include<string>
#include<cmath> 
 
class Solution {
public:
    /**
     * @param key: A String you should hash
     * @param HASH_SIZE: An integer
     * @return an integer
     */
    int hashCode(std::string key,int HASH_SIZE) {
        // write your code here
        if(key.size()==0)
          return 0;
        unsigned long hashval=0;
        int len=key.size()-1;
        for(int i=0;i<=len;i++){        //(unsigned char)   (int)
            hashval=hashval+(unsigned long)((unsigned char)(key[i])*pow(33,len-i));
            //hashval%=HASH_SIZE;
            std::cout<<hashval<<"  "<<(unsigned char)key[i]<<"  33^"<<i<<" "<<(unsigned long)pow(33,len-i)<<std::endl;
        }
        
        return (int)( hashval%HASH_SIZE);
        
    }
};

int main(){
int arry[]={5,1,2,0,9,8,99,1,7,20};
Solution myApp;
std::cout<<myApp.hashCode("abcdefghijklmnopqrstuvwxyz",2607 );



return 0;
}
