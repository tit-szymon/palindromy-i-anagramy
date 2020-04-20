#include <iostream>
using namespace std;
string a, b, c;
bool palindrom (string s)
{
    int dl=s.size();
    for (int i=0;i<dl/2;i++)
        if (s[i]!=s[dl-i-1]) return false;
    return true;

}
bool anagram (string s1, string s2)
{
    int dl=s1.size();
    if (dl!=s2.size()) return false;
    else
    {
        int T1[2]={0,0}, T2[2]={0,0};
        for (int i=0;i<dl;i++)
        {
            if (s1[i]=='X') T1[0]++;
            else T1[1]++;
            if (s2[i]=='X') T2[0]++;
            else T2[1]++;
        }
        for (int i=0;i<2;i++)
            if(T1[i]!=T2[i]) return false;

    }
    return false;

}
int main()
{
    cout << "Wprowadz wyraz do sprawdzenia czy jest to palindrom" << endl;
    cin >> a;
    if(palindrom(a)==true) cout << "Jest to palindrom" << endl;
    else
    cout << "Nie jest to palindrom" << endl;
    cout << "Wprowadz pierwszy wyraz do sprawdzenia czy to anagramu" << endl;
    cin >> b;
    cout << "Wprowadz drugi wyraz do sprawdzenia czy to anagramu" << endl;
    cin >> c;
    if(anagram(b,c)==true) cout << "Jest to anagram" << endl;
    else
        cout << "Nie jest to anagram" << endl;
    return 0;
}
