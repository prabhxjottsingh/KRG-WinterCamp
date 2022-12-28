//Time Complexity: O(N)
//Space Complexity: O(N)


class Solution
{
private:
    map<char, int> mp = {{'(', -1}, {'[', -1}, {'{', -1}, {')', 1}, {'}', 1}, {']', 1}};

public:
    bool isValid(string s)
    {
        int n = s.size();
        stack<char> st;
        for (int i = 0; i < n; i++)
        {
            if (st.empty())
            {
                if (mp[s[i]] == 1)
                    return false;
                else
                    st.push(s[i]);
            }
            else if (mp[s[i]] == -1)
            {
                st.push(s[i]);
            }
            else
            {
                if (s[i] == '}')
                {
                    if (st.top() == '{')
                        st.pop();
                    else
                        return false;
                }
                if (s[i] == ')')
                {
                    if (st.top() == '(')
                        st.pop();
                    else
                        return false;
                }
                if (s[i] == ']')
                {
                    if (st.top() == '[')
                        st.pop();
                    else
                        return false;
                }
            }
        }
        if (st.size() == 0)
            return true;
        return false;
    }
};