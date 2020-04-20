#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vi;
    for (int i = 0; i < 10; i++)
    {
        vi.push_back(i);
    }
    for (auto item : vi)
    {
        cout << item << " ";
    }
    cout << endl;

    vector<string> vs;
    cout << "podaj 3 slowa ";
    for (int i = 0; i < 3; i++)
    {
        string s;
        cin >> s;
        vs.push_back(s);
    }
    for (auto item : vs)
    {
        cout << item << " ";
    }
    cout << endl;

    cout << "int vector vi ma " << vi.size() << " elementow " << endl;

    vi[5] = 3;
    vi[6] = -1;

    for (auto item : vi)
    {
        cout << item << " ";
    }
    cout << endl;

    for (unsigned int i = 0; i < vi.size(); i++)
    {
        cout << vi[i] << " ";
    }
    cout << endl;

    for (auto i = begin(vi); i != end(vi); i++)
    {
        cout << *i << " ";
    }
    cout << endl;


    sort(begin(vs), end(vs));
    for (auto item : vs)
    {
        cout << item << " ";
    }
    cout << endl;

    int trojki = count(begin(vi), end(vi), 3);
    cout << "vector intow ma " << trojki << "elementy trojek " << endl;

    int tees = count(begin(vs[0]), end(vs[0]), 't');
    cout << "first word has " << tees << " liter t " << endl;

    return 0;
}

