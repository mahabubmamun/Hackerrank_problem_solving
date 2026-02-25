vector<int> getMax(vector<string> operations) {
    stack<int>st;
    stack<int>maxst;
    vector<int>result;
    
    for(string op:operations)
    {
        if(op[0] == '1')
        {
            int x = stoi(op.substr(2));
            st.push(x);
            
            if(maxst.empty() || x >= maxst.top())
            {
                maxst.push(x);
            }
        }
        else if(op[0] == '2')
        {
            if(!st.empty())
            {
                if(st.top() == maxst.top())
                {
                    maxst.pop();
                }
                st.pop();
            }
        }
        else if(op[0] == '3')
        {
            result.push_back(maxst.top());
        }
    }
    return result;
}
