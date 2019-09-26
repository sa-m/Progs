#include<bits/stdc++.h>
using namespace std;
#include "conv.hpp"
#include "box.hpp"

int main()
{
        string p,l,r,ap="",kp,rtem;
        int key1[64];
        
        cout<<"Enter the plain text (8 letter) : ";		cin>>p;
        cout<<"Enter the KEY (8 letter) : ";		cin>>kp;        
        p=hex_bin(string_hex(p));
        kp=hex_bin(string_hex(kp));
        for(int i=0;i<64;i++)
            key1[i]=kp[i]-'0';
    
    int key[16][48],keyl[28],keyr[28],nshift,temp1,temp2,pkey[56];
    l=p.substr(0,32);
    r=p.substr(32,32);
    //key generation
    int i,t=1,j,row,col,temp,round=16;
    j=0;
    for(i=0;i<56;i++)
        pkey[i]=key1[keyp[i]-1];
    for(i=0;i<28;i++)
        keyl[i]=pkey[i];
    for(i=0;i<28;i++)
        keyr[i]=pkey[i+28];
    //round key generation
    for(i=0;i<16;i++)
    {
        if(i==0||i==1||i==8||i==15)
            nshift=1;
        else
            nshift=2;
        while(nshift--)
        {
            temp1=keyl[0];
            temp2=keyr[0];
            for(j=0;j<27;j++)
            {
                keyl[j]=keyl[j+1];
                keyr[j]=keyr[j+1];
            }
            keyl[27]=temp1;
            keyr[27]=temp2;
        }
        for(j=0;j<24;j++)
            key[i][j]=keyl[key2[j]-1];
        for(j=24;j<48;j++)
            key[i][j]=keyr[key2[j]-1-28];
    }
   
    //DES Encryption
         while(round--)
         {
            rtem=r;
            t=1;
            string ep="",xorout="",sout="",soutt;
            //the expansion P box
            ep+=r[31];
            for(i=0;i<32;i++)
            {
                if((t+1)%6==0)
                {
                        ep+=r[4*((t+1)/6)];
                        t++;
                }
                if(t%6==0&&i!=0)
                {
                    ep+=r[4*(t/6)-1];
                    t++;
                }
                ep=ep+r[i];
                t++;
            }
            ep+=r[0];
            //Key xor with output of expansion p box
            for(i=0;i<48;i++)
                xorout+=char(((int(ep[i])-48)^key[16-round-1][i])+48);
            //sbox compression 48bit to 32 bit
            for(i=0;i<48;i+=6)
            {
                    row=(int(xorout[i+5])-48)+(int(xorout[i])-48)*2;
                    col= (int(xorout[i+1])-48)*8+(int(xorout[i+2])-48)*4+(int(xorout[i+3])-48)*2+(int(xorout[i+4])-48);
                    temp=s[i/6][row][col];
                    soutt="";
                    while(temp>0)
                    {
                        soutt+=char(temp%2+48);
                        temp/=2;
                    }
                    while(soutt.length()!=4)
                        soutt+='0';
                    for(j=soutt.length()-1;j>=0;j--)
                        sout+=soutt[j];
            }
            //straight pbox that is permutation of the sbox output
            char pc[32];
            for(i=0;i<32;i++)
                pc[i]=sout[per[i]-1];
            r="";
            for(i=0;i<32;i++)
                r+=char(((int(pc[i])-48)^(int(l[i])-48))+48);
            l=rtem;
            cout<<"Output after Round"<<16-round<< " :\t";
            string cip="";
            for(i=0;i<32;i+=4)
            {
                int te;
                te=(int(l[i])-48)*8+(int(l[i+1])-48)*4+(int(l[i+2])-48)*2+(int(l[i+3])-48);
                if(te<10)
                    cip+=char(te+48);
                else
                    cip+=char(te+55);
            }
            for(i=0;i<32;i+=4)
            {
                int te;
                te=(int(r[i])-48)*8+(int(r[i+1])-48)*4+(int(r[i+2])-48)*2+(int(r[i+3])-48);
                if(te<10)
                    cip+=char(te+48);
                else
                    cip+=char(te+55);
            }
            cout<<cip<<endl;
        }


    //DES decryption
    round=16;
    string ltem;
    while(round--)
    {
        ltem=l;
        t=1;
        string ep="",xorout="",sout="",soutt;
        //the expansion P box
        ep+=l[31];
        for(i=0;i<32;i++)
        {
            if((t+1)%6==0)
            {
                ep+=l[4*((t+1)/6)];
                t++;
            }
            if(t%6==0&&i!=0)
            {
                ep+=l[4*(t/6)-1];
                t++;
            }
            ep=ep+l[i];
            t++;
        }
        ep+=l[0];
        //Key xor with output of expansion p box
        for(i=0;i<48;i++)
            xorout+=char(((int(ep[i])-48)^key[round][i])+48);
        //sbox compression 48bit to 32 bit
        for(i=0;i<48;i+=6)
        {
            row=(int(xorout[i+5])-48)+(int(xorout[i])-48)*2;
            col= (int(xorout[i+1])-48)*8+(int(xorout[i+2])-48)*4+(int(xorout[i+3])-48)*2+(int(xorout[i+4])-48);
            temp=s[i/6][row][col];
            soutt="";
            while(temp>0)
            {
                soutt+=char(temp%2+48);
                temp/=2;
            }
            while(soutt.length()!=4)
                soutt+='0';
            for(j=soutt.length()-1;j>=0;j--)
                sout+=soutt[j];
        }
        //straight pbox that is permutation of the sbox output
        char pc[32];
        for(i=0;i<32;i++)
            pc[i]=sout[per[i]-1];
        l="";
        for(i=0;i<32;i++)
            l+=char(((int(pc[i])-48)^(int(r[i])-48))+48);
        r=ltem;
        cout<<"Decrypted Output after Round "<<16-round<<" :\t";
        string cip="";
        for(i=0;i<32;i+=4)
        {
            int te;
            te=(int(l[i])-48)*8+(int(l[i+1])-48)*4+(int(l[i+2])-48)*2+(int(l[i+3])-48);
            if(te<10)
                cip+=char(te+48);
            else
                cip+=char(te+55);
        }
        for(i=0;i<32;i+=4)
        {
            int te;
            te=(int(r[i])-48)*8+(int(r[i+1])-48)*4+(int(r[i+2])-48)*2+(int(r[i+3])-48);
            if(te<10)
                cip+=char(te+48);
            else
                cip+=char(te+55);
        }
        cout<<cip<<endl;
    }
}
