//
//  main.c
//  theNumberofOne
//
//  Created by Tong Tingting on 13-12-3.
//  Copyright (c) 2013年 Tong Tingting. All rights reserved.
//


    
#include <stdio.h>
    
    
    
    int main()
    {
        int n=0,m=0;
        m=f(n);
        scanf("n=%d",&n);
        m=f(n);
        printf("m=%d",m);
        
        
    }
    
    
    int f(int nn)
    {
        if (nn<10) {
            return nn>0?1:0;
        }
        int l=0,mm;   //求nn的位数
        mm=nn;
        for (; mm>0;) {
            mm=mm/10;
            l++;
        }
        int s=1,i;    //求10的l-1次方
        for (i=1; i<=l-1; i++) {
            s=s*10;
        }
        int a=(int)(nn/s);
        return (a>1?s:nn-s*a+1)+a*f(s-1)+f(nn-s*a);
        
    }
    


    

