string balancedSums(vector<int> arr) {
    if (arr.size()==1)
    {
        return "YES";
    }
    if (arr.size()==2)
    {
        return "NO";
    }
    bool check=false;
    int sum=0;
    for (int i=0;i<arr.size();i++)
    {
        sum+=arr[i];
    }
    int sumleft=0;
    for (int i=0;i<arr.size()-1;i++)
    {
        if (sumleft==(sum-sumleft-arr[i]))
        {
            check=true;
        }
        sumleft+=arr[i];

    }
    if(check==false)
    {
        return "NO";
    }

    return "YES";

}
