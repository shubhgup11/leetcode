class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        vector <int> v;
        int min=INT_MAX;
        stack <int> s;
        int flag=0;
        int i;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]<min)
            {
                min=nums[i];
                v.push_back(nums[i]);
            }
            else
                v.push_back(min);
        }
        for(i=0;i<nums.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        for(i=(nums.size()-1);i>=0;i--)
        {
            if(s.empty() )
               {if(nums[i]>v[i])
               {
               s.push(nums[i]);
               }
               }
            else
               {
                   if(nums[i] > v[i] && nums[i]<s.top())
                       s.push(nums[i]);
                    else if(nums[i]>s.top())
                    {
                        //cout<<nums[i]<<" "<<s.top();
                        flag=1;
                        break;
                    }
                   else if(nums[i]==v[i])
                   {
                       if(i>=1)
                       {
                           while( !s.empty() && s.top()<=v[i-1] )
                           {
                               //cout<<"tttt"<<v[i-1]<<endl;
                               s.pop();
                           }
                       }
                   }
                      
               }
            //cout<<"top"<<s.top()<<endl;
        }
    if(flag==1)
    return (2<5);
    else 
        return (2>5);
    }
};
