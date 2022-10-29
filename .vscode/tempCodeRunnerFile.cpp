map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        vector<int> :: iterator it;
        int y=arr[i];
        it=(find(arr.begin(),arr.end(),y));
        if(it!=arr.end())
        {
            mp[*it]++;
            if(mp[*it]>1)
            {
                cout<<*it;
                exit(0);
            }
        }
    }