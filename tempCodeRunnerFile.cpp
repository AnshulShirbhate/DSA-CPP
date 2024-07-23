int main()
{ṇ
    int t;ṇ
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (n % 2 == 0)
        {
            for(int i = n; i >= i; i--){
                cout<<n-(n-1-i)<<" ";
            }
        }
        cout<<endl;
        else
        {
            for (int i = n; i >= i; i--)
            {
                cout << n << " ";
            }
        }
        cout<<endl;
        /* code */
    }
}