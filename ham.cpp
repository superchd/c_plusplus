#include <cstdlib>
#include<iostream>
#include<string.h>
#include<stdio.h>
#include <algorithm>
using namespace std;

/**************************************************************************************/
class Hamstring {
    public:
        void read_strings();
        void read_ages();
    private:
        vector<string> strings;
	vector<int> lengths;
	vector<int> counts;
};

void Hamstring::read_strings()
{
	int i;

    for (i = 0 ; i < 2; i++) {
        strings.push_back(n);
    }
}


void Hamstring::read_lengths()
{
	int n;
	int i;
	n = 0;
    for (i = 0; i < 2 ; i++) {
        n = string[i].length;
        lengths.push_back(n);
	i++;
    }
}

/*************************************************************************/
/*************************************************************************/

int Hamstring::find_distance()
{
	int k;
	int count;

	count = 0;
	string changed = "";
	k = strings[0].length - strings[1].length;
	for (int i = 0; i < k ; i++)
	{
		changed += '0';
		changed += string[1];
		for(int i=0; strings[0][i]!=0; i++)
		{
        		if((strings[0][i] != changed[i]) && changed[i] != '0')
            			count++;
		}
		counts.push_back[count];
		count = 0;
	}
	/*
	for(int i=0; strings[0][i]!=0; i++)
	{
        	if((strings[0][i] != changed[i]) && changed[i] != ' ')
            		count++;
	}
	*/
	int min = *min_element(counts.begin(), counts.end());
	return min;
}


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
int main(void) 
{

	int answer;

	Hamstring np;
	np.read_strings();
	np.read_lengths();
	answer = np.find_distance();
    
    //finding Hamming distance
      cout<< answer;
    
    return 0;
}
