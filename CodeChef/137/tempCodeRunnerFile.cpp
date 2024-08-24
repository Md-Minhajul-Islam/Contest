for(int i = 0; i < n; i++)
    {
        if(from_left[i]+from_right[i] == n)
        {
            cout << "YES\n";
            return;
        }
    }