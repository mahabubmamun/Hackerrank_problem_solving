 int sum(vector<int>h)
 {
    int sum = 0;
    int size = h.size();
    for(int i=0;i<size;i++)
    {
        sum = sum + h[i];
    }
    return sum;
 }

int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
    int sum_h1 = sum(h1);
    int sum_h2 = sum(h2);
    int sum_h3 = sum(h3);
    
    stack<int>st;
    stack<int>st_1;
    stack<int>st_2;
    stack<int>st_3;
    
    int l1 = h1.size();
    int l2 = h2.size();
    int l3 = h3.size();
    
    for(int i=0;i<l1;i++)
    {
        st.push(h1[i]);
    }
    for(int i=0;i<l1;i++)
    {
        st_1.push(st.top());
        st.pop();
    }
    
    for(int i=0;i<l2;i++)
    {
        st.push(h2[i]);
    }
    for(int i=0;i<l2;i++)
    {
        st_2.push(st.top());
        st.pop();
    }
    
    for(int i=0;i<l3;i++)
    {
        st.push(h3[i]);
    }
    for(int i=0;i<l3;i++)
    {
        st_3.push(st.top());
        st.pop();
    }
    
    while(true)
    {
        if(sum_h1 == sum_h2 && sum_h2 == sum_h3)
        {
            return sum_h1;
        }
        if(sum_h1 >= sum_h2 && sum_h1 >= sum_h3)
        {
            sum_h1 = sum_h1 - st_1.top();
            st_1.pop();
        }
        else if(sum_h2 >= sum_h1 && sum_h2 >= sum_h3)
        {
            sum_h2 = sum_h2 - st_2.top();
            st_2.pop();
        }
        else
        {
            sum_h3 = sum_h3 - st_3.top();
            st_3.pop();
        }
    }
}
