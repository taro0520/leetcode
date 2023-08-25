class Solution {
public:
    int reverse(int x) {
        int flag=0,id=0;
        int s[31]={0};
        if(x<=-2147483648 && x>-8463847412 )return 0;
        if(x<0)
        {
            flag=1;
            x*=-1;
        }
        while(x>9)
        {
            s[id]=x%10;
            x/=10;
            id++;
        }
        s[id]=x;
        x=0;
        if(s[0]==2 && s[1]==1 && s[2]==4 && s[3]==7 && s[4]==4 && s[5]==8 && s[6]==3 && s[7]==6 && s[8]==4 && s[9]>8 && id==9)return x;
        if(s[0]==2 && s[1]==1 && s[2]==4 && s[3]==7 && s[4]==4 && s[5]==8 && s[6]==3 && s[7]==6 && s[8]>4 && id==9)return x;
        if(s[0]==2 && s[1]==1 && s[2]==4 && s[3]==7 && s[4]==4 && s[5]==8 && s[6]==3 && s[7]>6 && id==9)return x;
        if(s[0]==2 && s[1]==1 && s[2]==4 && s[3]==7 && s[4]==4 && s[5]==8 && s[6]>3 && id==9)return x;
        if(s[0]==2 && s[1]==1 && s[2]==4 && s[3]==7 && s[4]==4 && s[5]>8 && id==9)return x;
        if(s[0]==2 && s[1]==1 && s[2]==4 && s[3]==7 && s[4]>4 && id==9)return x;
        if(s[0]==2 && s[1]==1 && s[2]==4 && s[3]>7 &&  id==9)return x;
        if(s[0]==2 && s[1]==1 && s[2]>4 && id==9)return x;
        if(s[0]==2 && s[1]>1 && id==9)return x;
        if(s[0]>2 && id==9)return x;
        if(id>9)return x;
        for(int i=0;i<=id;i++)
            x+=s[i]*(int)pow(10.0,id-i);
        if(flag==1)x*=-1;
        return x;
    }
};