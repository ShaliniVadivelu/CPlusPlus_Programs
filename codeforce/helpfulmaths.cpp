/*#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int arr[1001];
	string s;
	cin>>s;
	int count=0;
	for(int i=0;i<s.size();i++){
	    if(s[i]=='+'){
	        continue;
	    }else{
	        arr[count++]=s[i] - '0';
	    }
	}
	sort(arr,arr+count);
	for(int i=0;i<count;i++){
	    cout<<arr[i];
	    if(i==count-1){
	        break;
	    }
	    cout<<"+";
	}
	return 0;
} */

#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main()
{
    vector <int> vec;           // decalre vector
    string s;                   
    getline(cin, s);
    for (int i=0;i<s.length();i++)
    {
        if (s[i]=='+')
        continue;
        else
        vec.push_back(s[i] - '0'); // here element s[i] contains a character that represents example 5(s[i]=5), to covert this character there is an ASCII internal code equal to 53. so s[i]-'0' => 53-48.i.e 48 is the ascii value of 0.
    }

    sort (vec.begin(), vec.end());
    int count=vec.size();
    for (int i=0;i<count;i++)
    {
        cout<<vec.at(i);
        if (i==count-1)
        {
            break;
        }
        cout<<"+";
    }

} 