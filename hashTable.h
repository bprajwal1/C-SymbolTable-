#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cstdlib>
#include <stdlib.h>
//#include "symbol.h"
using namespace std;
#define Ts 13;

//static hashTable hash[5];
//int count = -1;
class hashTable{
	public:
		int Ts;
		vector<symbol>* ider;
		hashTable(){
		}
		~hashTable(){
		}
		
	void insert(symbol sk)
	{
		if(sk.k !="{"&&sk.k !="}"&&sk.k !="*"&&sk.k !="/"&&sk.k !="-")
		{
		int index;
		
		index=hashTable::hash(sk.k);
		ider[index].push_back(sk);
	    }
	}
	bool contain(string ss)
	{
		int s;
		int index=hashTable::hash(ss);
		if(ider[index].size()!=0)
		{
			for(s=0;s<ider[index].size();s++)
			{
				if(ss==ider[index][s].k)
	//				cout<<ss<<ider[index][s].scope;
	                return true;
				
			}
		}
		return false;
	}
	void printAll() const
	{
		int v;
		int vt;
	cout<<"{"<<" ";
	for(v=0;v<Ts ;v++)
	{
		for(vt=0;vt<ider[v].size();vt++)
		{
			cout<<ider[v][vt].k<<",";
			cout<<" "<<"}"; 
		}
	}
	}
	
	bool delete(string sg)
	{
		if(contain(sg))
		{
		   int index=hashTable::hash(sg);
		   for(int vt=0;vt<ider[index][vt].size();vt++)
		   {
		    	if(sg==table)
			  {
				  ider[index][vt+1]=ider[index][vt];
	             return true;	
              }
              cout<<"strange case";
              return false;
		   }
           
		}  
		else
		cout<<"not in this scope"<<endl;
		return false; 
	}
    static unsigned int hash(string kk)
    {
	unsigned int h = unsigned int( kk[0]);
	for (int i = 1; i < kk.length(); i++)
	h = 31 * h + (kk[i] - 'a');
	return h % Ts ;
    }
		
};
