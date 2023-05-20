#include<iostream>
using namespace std;
int main()
{
    int year,ngan,nzhi;
    string gan,zhi;
    loop:cout<<"ÇëÊäÈë¹«Ôª¼ÍÄê..."<<endl;
    cin>>year;
    if (year==0)
    {
        cout<<"Illegal data!"<<endl<<endl;
    }
    else
    {
        if (year<0)
        {
            year+=1;
        }
        year-=3;
        do
        {
            year+=60;
        } while (year<0);
        ngan=year%10;
        nzhi=year%12;
        switch (ngan)
        {
        case 1:
            gan="¼×";
            break;
        case 2:
            gan="ÒÒ";
            break;
        case 3:
            gan="±û";
            break;
        case 4:
            gan="¶¡";
            break;
        case 5:
            gan="Îì";
            break;
        case 6:
            gan="¼º";
            break;
        case 7:
            gan="¸ý";
            break;
        case 8:
            gan="ÐÁ";
            break;
        case 9:
            gan="ÈÉ";
            break;
        case 0:
                gan="¹ï";
                break;
        }
        switch (nzhi)
        {
        case 1:
            zhi="×Ó";
                break;
        case 2:
            zhi="³ó";
            break;
        case 3: 
            zhi="Òú";
            break;
        case 4:
            zhi="Ã®";
            break;
        case 5:
            zhi="³½";
            break;
        case 6:
            zhi="ËÈ";
            break;
        case 7:
            zhi="Îç";
            break;
        case 8:
            zhi="Î´";
            break;
        case 9:
            zhi="Éê";
            break;
        case 10:
            zhi="ÓÏ";
            break;
        case 11:
            zhi="Ðç";
            break;
        case 0:
            zhi="º¥";
            break;
        }
    cout<<gan<<zhi<<endl<<endl;
    }
    goto loop;
}