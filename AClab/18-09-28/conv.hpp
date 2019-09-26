//Conversion Functions used in DES

string hex_bin(const string& p)//hexadecimal to binary
{
    string ap="";
    int l=p.length();
    for(int i=0;i<l;i++)
    {
        string st="";
        if(p[i]>='0'&&p[i]<='9')
        {
            int te=int(p[i])-48;
            while(te>0)
            {
                st+=char(te%2+48);
                te/=2;
            }
            while(st.length()!=4)
                st+='0';
            for(int j=3;j>=0;j--)
                ap+=st[j];
        }
        else
        {
            int te=p[i]-'A'+10;
            while(te>0)
            {
                st+=char(te%2+48);
                te/=2;
            }
            for(int j=3;j>=0;j--)
                ap+=st[j];
        }
    }
    return ap;
}

string string_hex(const string& input)//String to hexadecimal
{
    static const char* const lut = "0123456789ABCDEF";
    size_t len = input.length();

    string output;
    output.reserve(2 * len);
    for (size_t i = 0; i < len; ++i)
    {
        const unsigned char c = input[i];
        output.push_back(lut[c >> 4]);
        output.push_back(lut[c & 15]);
    }
    return output;
}

string hex_string(const string& input)//hexadecimal to String
{
    static const char* const lut = "0123456789ABCDEF";
    size_t len = input.length();
    if (len & 1) throw invalid_argument("odd length");

    string output;
    output.reserve(len / 2);
    for (size_t i = 0; i < len; i += 2)
    {
        char a = input[i];
        const char* p = lower_bound(lut, lut + 16, a);
        if (*p != a) throw invalid_argument("not a hex digit");

        char b = input[i + 1];
        const char* q = lower_bound(lut, lut + 16, b);
        if (*q != b) throw invalid_argument("not a hex digit");

        output.push_back(((p - lut) << 4) | (q - lut));
    }
    return output;
}

