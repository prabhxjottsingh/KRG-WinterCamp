//Time Complexity: O(N)
//Space Complexity: O(n)


class Solution
{
private:
    vector<int> nextSmallerElement(vector<int> &heights)
    {

        int n = heights.size();
        stack<int> st;
        vector<int> res(n);
        for (int i = n - 1; i > -1; i--)
        {
            if (st.empty())
            {
                res[i] = n;
            }
            else
            {
                while (!st.empty() && heights[st.top()] >= heights[i])
                    st.pop();
                if (!st.empty())
                    res[i] = st.top();
                else
                    res[i] = n;
            }
            st.push(i);
        }
        return res;
    }

    vector<int> prevSmallerElement(vector<int> &heights)
    {

        int n = heights.size();
        stack<int> st;
        vector<int> res(n);
        for (int i = 0; i < n; i++)
        {
            if (st.empty())
                res[i] = -1;
            else
            {
                while (!st.empty() && heights[st.top()] >= heights[i])
                    st.pop();
                if (!st.empty())
                    res[i] = st.top();
                else
                    res[i] = -1;
            }
            st.push(i);
        }
        return res;
    }

public:
    int largestRectangleArea(vector<int> &heights)
    {
        vector<int> nextSmall = nextSmallerElement(heights);
        vector<int> prevSmall = prevSmallerElement(heights);
        int maxArea = 0;
        int n = heights.size();
        for (int i = 0; i < n; i++)
        {
            int height = heights[i];
            int width = nextSmall[i] - prevSmall[i] - 1;
            int area = height * width;
            maxArea = max(maxArea, area);
        }
        return maxArea;
    }
};
