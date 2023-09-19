#include<iostream>
#include<string>
using namespace std;

void helper(string s, int letter,int size)
{
    int count = 0; 
    int skipper = letter;
    
    if(skipper >= size)
    {
        cout<<s[letter] << count;
        return;
    }
    if(s[letter] == s[skipper])
    {
        do{
            count++;
          }while(s[letter] == s[skipper + count]);
        
    }
    
    if(s[letter] != s[skipper + count])
    {
        cout<<s[letter] << count;

        return helper(s,letter + count,size);
    }
}

int main()
{

    // int size;
    // cout << "enter test cases: ";
    // cin >> size;

   
    //cout << str.size();

    // for (int i = 0; i < size; i++)
    // {
        string str;
        // cout << "enter string: ";
        cin >> str;
        int size = str.size();
        // cout<<size;
        helper(str, 0, size);
        
        

    // }
    


} 