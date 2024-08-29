#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <unordered_map>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define MOD 1000000007
using ll = long long;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    unordered_map<string, int> total_scores;
    vector<pair<string, int>> rounds;

    for (int i = 0; i < n; i++)
    {
        string name;
        int score;
        cin >> name >> score;
        rounds.push_back({name, score});
        total_scores[name] += score;
    }

    int max_score = 0;

    for (auto i : total_scores)
    {
        max_score = max(max_score, i.second);
    }

    unordered_map<string, int> winner;

    total_scores.clear();

    for (int i = 0; i < n; i++)
    {

        string name = rounds[i].first;
        int score = rounds[i].second;

        total_scores[name] += score;

        if (total_scores[name] >= max_score and winner.find(name) == winner.end())
        {
            winner[name] = i;
        }
    }

    string ans;
    int early_round = INT_MAX;
    for (auto i : winner)
    {
        if (total_scores[i.first] == max_score and i.second < early_round)
        {
            ans = i.first;
            early_round = i.second;
        }
    }

    cout << ans << endl;

}