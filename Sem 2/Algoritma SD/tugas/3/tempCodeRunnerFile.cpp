    while (!palindrome1.empty())
    {
        cout << ' ' << palindrome1.front();
        palindrome1.pop();
    }

    cout<<"\n-------\n";

    while (!palindrome2.empty())
    {
        cout << ' ' << palindrome2.front();
        palindrome2.pop();
    }

    for (int i=0; i<kata.length(); i++)
    {
        if (palindrome1.front()!=palindrome2.front())
        {
            kondisi = 0;
        }
        palindrome1.pop();
        palindrome2.pop();
    }

    if (kondisi==1)
    {
        cout<<"sebuah PALINDROME";
    }else{
        cout<<"BUKAN PALINDROME";
    }
