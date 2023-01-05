//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    string longestString(vector<string> &words)

    {

        // code here

        map<string,int> mapy;

        sort(words.begin(),words.end());

        for(auto i:words)

        {

            mapy[i]++;

        }

        string ans;

        int max_size=INT_MIN;

        for(auto i:words)

        {

            string temp;

            int c=0,n=i.size();

            for(int j=0;j<n;j++)

            {

                temp+=i[j];

                if(mapy[temp])

                {

                    c++;

                }

            }

            if(c==n&&c>max_size)

            {

                max_size=c;

                ans=i;

            }

        }

        return ans;

    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution obj;
        string w = obj.longestString(v);
        cout << w << "\n";
    }
    return 0;
}

// } Driver Code Ends