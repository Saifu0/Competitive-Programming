#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int a[3];
    int b[3];
    set<int>s1;
    for(int i = 0;i<3;i++)
    {
        cin>>a[i];
    }
    for(int j = 0;j<3;j++)
    {
        cin>>b[j];
    }
    vector<int>v1;
    int same = 0;
    for(int i = 0;i<3;i++)
    {
        if(a[i]==b[i])
        {
            same+=1;
        }
    }
    if(same==3)
    {
        v1.push_back(0);
    }
    else if(same==2)
    {
        v1.push_back(1);
    }
    else if(same==1)
    {
       for(int i = 0;i<3;i++)
       {
           if((b[i]-a[i])!=0)
           {
           s1.insert(b[i]-a[i]);
           }
       }
       if(s1.size()==1)
       {
           v1.push_back(1);
       }
       else
       {
           v1.push_back(2);
       }
       s1 = {};
       int d1 = 0;
       for(int i = 0;i<3;i++)
       {
           if(a[i]!=b[i] && a[i]!=0 && b[i]%a[i]==0)
           {
               s1.insert(b[i]/a[i]);
               d1+=1;
           }
       }
      if(d1==1)
      {
          v1.push_back(2);
      }
      else if( d1==2 && s1.size()==1 )
      {
          v1.push_back(1);
      }
      else if(d1==2 && s1.size()==2)
      {
          v1.push_back(2);
      }
      else
      {
          v1.push_back(2);
      }
    }
    else
    {
        s1 = {};
       for(int i = 0;i<3;i++)
        {
            s1.insert(b[i]-a[i]);
        }
        v1.push_back(s1.size());
        s1 = {};
        int d1 = 0;
        for(int i = 0;i<3;i++)
        {
           if( a[i]!=0 && b[i]%a[i]==0)
           {
               s1.insert(b[i]/a[i]);
               d1+=1;
           }
       }
       if(d1==3)
       {
           v1.push_back(s1.size());
       }
       else if(d1==2)
       {
           if(s1.size()==1)
           {
               v1.push_back(2);
           }
           else
           {
               v1.push_back(3);
           }
       }
      for(int i = 0;i<3;i++)
      {
            for(int j = 0;j<3;j++)
            {
                if(i!=j)
                {
                    int k;
                    if(i==0 && j==1)
                    {
                        k = 2;
                    }
                    else if(i==1 && j==2)
                    {
                        k = 0;
                    }
                    else if(i==2 && j==1)
                    {
                        k = 0;
                    }
                    else if(i==2 && j==0)
                    {
                        k = 1;
                    }
                    else if(i==1 && j==0)
                    {
                        k = 2;
                    }
                    else if(i==0 && j==2)
                    {
                        k = 1;
                    }
                    int le=b[i]-a[i];
                    int kk  = a[j] + le;
                    int kk1 = a[k] + le;
                    
                    
                    if( a[j]!=0 && a[k]!=0)
                    {
                      
                        if( (b[j] - le)%a[j] == 0 && (b[k]-le)%a[k] ==0 )
                        {
                         
                            if( (b[j] - le)/a[j] == (b[k]-le)/a[k] )
                            {
                              
                                v1.push_back(2);
                            }
                        }
                    }
                    
                    
                    if(kk!=0 && kk1!=0  && b[j]%kk==0 && b[k]%kk1==0)
                    {
                     
                        if(  (b[j]/kk) == (b[k]/kk1) )
                        {
                            
                            v1.push_back(2);
                        }
                    }
                    
                    
                    if(a[i]!=0 && b[i]%a[i]==0  )
                    {
                        int x1 = b[i]/a[i];
                        if( (b[j] - x1*a[j]) == (b[k] - x1*a[k]) )
                        {
                         
                            v1.push_back(2);
                        }
                        if( x1!=0 && b[j]%x1==0 && b[k]%x1==0 )
                        {
                            int x2 = b[j]/x1;
                            int x3 = b[k]/x1;
                            if((x2-a[j])==(x3-a[k]))
                            {
                                 
                                v1.push_back(2);
                            }
                        }
                    }
                    
                    
                    if( (b[j]-a[j]-le) ==  (b[k]-a[k]) )
                    {
                        
                       v1.push_back(2);
                       
                    }
                    
                    
                    if( (a[j]+le)!=0 and a[k]!=0)
                    {
                        if( b[j]%(a[j]+le)==0 and b[k]%a[k]==0)
                        {
                            if(b[j]/(a[j]+le)==b[k]/a[k])
                            {
                                 
                                v1.push_back(2);
                            }
                        }
                        
                    }
                       if( (a[j]+le)!=0 && (a[k]+le)!=0 && b[j]%(a[j]+le)==0 && b[k]%(a[k]+le)==0)
                        {
                            if(b[j]/(a[j]+le) == b[k]/(a[k]+le))
                            {
                             
                                v1.push_back(2);
                            }
                        }
                    
                          if( a[j]!=0 && a[k]!=0 && (b[j]-le)%a[j]==0 && (b[k]-le)%a[k]==0)
                        {
                            if( ((b[j]-le)/a[j]) == ((b[k]-le)/a[k]) )
                            {
                                 
                                v1.push_back(2);
                            }
                        }
                    
                    
                    // if(a[i]!=0 and b[i]!=0)
                    // {
                    //     if(b[i]%a[i]==0 )
                    //     {
                    //         int xx=b[i]/a[i];
                    //         if(xx*a[j]!=0 and a[k]!=0)
                    //         {
                    //             if(b[j]%(xx*a[j])==0 and b[k]%a[k]==0)
                    //             {
                    //                 if( (b[j]/(xx*a[j])) ==  (b[k]/a[k]) )
                    //                 {
                    //                     v1.push_back(2);
                    //                 }
                    //             }
                    //         if((b[j]-xx*a[j])==(b[k]-a[k]))
                    //         {
                              
                    //           v1.push_back(2);
                    //         }
                    //         }
                    //     }
                    // }
                    
                    
                    if(a[i]!=0)
                    {
                        if(b[i]%a[i]==0)
                        {
                           int xx=b[i]/a[i];
                            if(xx*a[j]!=0 and a[k]!=0)
                            {
                                if(b[j]%(xx*a[j])==0 and b[k]%a[k]==0)
                                {
                                    if(b[j]/(xx*a[j])==b[k]/a[k])
                                    {
                                     
                                        v1.push_back(2);
                                    }
                                }
                            }
                            if((b[j]-xx*a[j])==(b[k]-a[k]))
                            {
                                
                                v1.push_back(2);
                            }
                        }
                    }
                    
                    
                }
            }
      }
    }
       if(a[0]!=a[1])
        {
            if((b[0]-b[1])%(a[0]-a[1])==0 && (b[1]*a[0]-b[0]*a[1])%(a[0]-a[1])==0)
            {
               int xx=(b[0]-b[1])/(a[0]-a[1]);
               int yy=(b[1]*a[0]-b[0]*a[1])/(a[0]-a[1]);
                if((a[2]*xx+yy)==b[2])
                {
                    v1.push_back(2);
                }
            }
        }
        
    v1.push_back(3);
    sort(v1.begin(),v1.end());
    cout<<v1[0]<<"\n";
    }
    return 0;
}