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
                    if (('A' <= str[i] && str[i] <= 'Z')||(str[i]<='z'&&'a'<=str[i]))
		    {
                        str[i] = tolower(str[i]);
                        tmp += str[i];
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
