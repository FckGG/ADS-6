#include  "bst.h"
#include  <iostream>
#include  <fstream>
#include  <locale>
#include  <cstdlib>
#include<string.h>
#include<ctype.h>
using namespace std;

BST<std::string> makeTree(char* filename)
{
	BST<std::string>BS;
	ifstream f;
	f.open(filename);
	string str="",tmp="";
	int i = 0
	    char a;
	while (f >> s)
	{
	 getline(file,str);
        while(str[i]!='\0'&&!file.eof())
        {
            while(str[i]!=' '&&!file.eof())
            {
                if('A'<=str[i]&&str[i]<='Z')
                {
                    if(isupper(str[i]))
                    a=tolower(str[i]);
                    tmp+=a;
                }
                else if ('a'<=str[i]&&str[i]<='z') tmp+=str[i];
                else
                {
                    i++;
                    continue;
                }
                i++;
            }
            BS.add(tmp);
        }
    }
}

