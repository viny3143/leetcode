int lengthOfLastWord(char * s){
    int n,c = 0,i,d=0,f=0;
    n = strlen(s);
    for(i=n-1;i>=0;i--)
    {   
        if(s[i]!=' '){
        d++;
        f=1;
    }
        if(s[i]==' ')
        {
            if(f==1)break;
        }

    }
    return d;

}