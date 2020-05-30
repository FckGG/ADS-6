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
	int i=0;
    while (!file.eof()) 
    {
        tmp.clear();
	    file >> str;
            while (str[i] != '\0' && !file.eof())
            {
                while (str[i] != ' ' && !file.eof())
                {
                    if ('A' <= str[i] && str[i] <= 'Z')
                    {
                        if (isupper(str[i]))
                            str[i] = tolower(str[i]);
                        tmp += str[i];
                    }
                    else if ('a' <= str[i] && str[i] <= 'z') tmp += str[i];
                    else
                    {
                        i++;
                        continue;
                    }
                    i++;
                }
                if(!tmp.empty()) tree1.add(tmp);
                tmp.clear()
            }
        }
	return tree1;
}
