#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cstdlib>
#include <stdlib.h>
#include "symbol.h" 
#include "hashTable.h"
using namespace std;
 hashTable hash[5];
 int count = -1;

void PrintScope_num(int num);
void find(string ss,int sco);
void PrintScope_num(int num)
{
	hash[num].printAll();
}

void find(string ss,int sco)
{
	int in=hashTable::hash(ss);
	if(hash[sco].contain(ss)
	{
		cout<<ss;
	}
/*	if(hash[sco].ider[in].size()!=0)
	{
	  for(int i=0;i<hash[sco].ider[in].size();i++)
	  {
	  	  if(hash[sco].ider[in][i].k==ss)
	  	  {
	  	  	cout<<ss;
			}
	  }
    }
    */
}

int main()
{

	ifstream infile;

infile.open ("input.txt");
string k;

if (infile.is_open())
{
while (!infile.eof ())
{
infile >> k;

{
	if(k=="{")
	count++;
	if(k=="}")
	count--;
	
	symbol skm=symbol(k);
   hash[count].insert(skm);
   hash[0].printAll();
   system("pause");
	
	count++;
}



}
}
		infile.close();
		return 0;
}


