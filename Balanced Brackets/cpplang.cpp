string isBalanced(string s) {
    stack<char>st;
    unordered_map<char, char>mapping = 
    {
        {')','('},
        {'}','{'},
        {']','['}
    };
    for(char ch:s)
    {
        if(ch == '(' || ch == '{' || ch == '[')
        {
            st.push(ch);
        }
        else if(ch == ')' || ch == '}' || ch == ']')
        {
            if(st.empty())
            {
                return "NO";
            }
            if(st.top() == mapping[ch])
            {
                st.pop();
            }
            else
            {
                return "NO";
            }
        }
    }
    if(st.empty())
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
    
}
