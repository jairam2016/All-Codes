#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, int> p[10];
    p[0].first = 10;
    p[0].second = 20;
    p[1].first = 30;
    p[1].second = 40;
    p[2].first = 60;
    p[2].second = 50;

    // BASIC DEFINATION

    pair<int, pair<int, int>> pt[20];
    pt[0] = make_pair(1, make_pair(11, 2));
    pt[1] = make_pair(2, make_pair(22, 3));
    pt[2] = make_pair(3, make_pair(33, 4));
    pt[3] = make_pair(4, make_pair(44, 5));
    pt[4] = make_pair(5, make_pair(55, 6));
    pt[5] = make_pair(6, make_pair(66, 7));
    pt[6] = make_pair(7, make_pair(77, 8));
    pt[7] = make_pair(8, make_pair(88, 9));
    pt[8] = make_pair(9, make_pair(99, 10));
    pt[9] = make_pair(1, make_pair(10, 1));
    for (int i = 0; i < 10; i++)
    {
        cout << pt[i].first << "   " << pt[i].second.first << "   " << pt[i].second.second;
        cout << endl;
    }
    cout << endl;
    cout << endl;

    vector<pair<int, pair<int, int>>> vec;
    pair<int, pair<int, int>> temp;
    vec.push_back(make_pair(1, make_pair(15, 11)));
    vec.push_back(make_pair(1, make_pair(22, 11)));
    vec.push_back(make_pair(1, make_pair(30, 11)));
    vec.push_back(make_pair(1, make_pair(40, 11)));
    vec.push_back(make_pair(1, make_pair(14, 11)));
    vec.push_back(make_pair(1, make_pair(12, 11)));
    vec.push_back(make_pair(1, make_pair(17, 11)));
    vec.push_back(make_pair(1, make_pair(48, 11)));
    vec.push_back(make_pair(1, make_pair(21, 11)));
    vec.push_back(make_pair(1, make_pair(26, 11)));
    vec.push_back(make_pair(1, make_pair(28, 11)));

    int len = vec.size();

    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (vec[i].second.first < vec[j].second.first)
            {
                temp = vec[j];
                vec[j] = vec[i];
                vec[i] = temp;
            }
        }
    }
    for (int i = 0; i < len; i++)
    {
        cout << vec[i].first << "   " << vec[i].second.first << "   " << vec[i].second.second;
        cout << endl;
    }
    return 0;
}