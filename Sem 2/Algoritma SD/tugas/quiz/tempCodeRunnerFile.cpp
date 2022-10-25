    for(int i=0; i<8; i++)
    {
        if(num[i]>num[i+1])
        {   
            int temp;
            temp = num[i+1];
            num[i+1] = num[i];
            num[i] = temp;
            temp=0;            
        }
    }