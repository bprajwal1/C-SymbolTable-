#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cstdlib>
#include <stdlib.h>
//static hashTable hash[5];
//int count = -1;
using namespace std;
extern hashTable hash[5];
extern int count;
class symbol{
	
	public:
		string k;
		int scope;
	//	int index;
		
	symbol(string kn)
		{//if(ks!="{"&&ks!="}"&&ks!="*"&&ks!="/"&&ks!="-")
		//	{
			   k=kn;
			   scope=cal_scope(kn);
		 //   }
	
		
		}
	~symbol(){
	}
	int getscope() const
		{
			return scope;
		}
/*	void print()
	{
		cout << k;
	 } 
 */
 int cal_scope(string ks)
 {
 	if(ks=="{")
 	count++;
 	if(ks=="}")
 	count--;
 	return count;
  } 
		
};
