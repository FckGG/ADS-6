#include  "bst.h"
#include  <iostream>
#include  <fstream>
#include  <locale>
#include  <cstdlib>
#include<string.h>
#include<ctype.h>
using namespace std;

BST<string> makeTree(char* filename)
{
    BST<string> tree1;
    ifstream file(filename);
    string str,tmp;
    while (!file.eof()) 
    {
        tmp.clear();
	    file >> str;
            for(int j=0;j<str.size();j++)
            {
                    if (('A' <= str[j] && str[j] <= 'Z')||(str[j]<='z'&&'a'<=str[j]))
		    {
                        str[j] = tolower(str[j]);
                        tmp += str[j];
                    }
                  if(str[i]==' ' && !tmp.empty())
                    {
                        tree1.add(tmp);
			  tmp.clear();
                    }
            }
        }
	return tree1;
}
