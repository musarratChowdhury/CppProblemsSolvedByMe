#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;

    while(T--){
        int N;
        cin >> N;
        string s;
        cin >> s;

        // X = number of plays needed to win a set
        // Y = number of sets needed to win a match
        int X = 1, Y = N;
        unordered_map<char, int> winner_count_in_valid_scenarios;

        while(X <= N){
            while(Y>=1){

                unordered_map<char, int> set;
                unordered_map<char, int> match;
                int total_play = 0;

                // cout << "X : " << X << " Y : " << Y << '\n';
        
                for(int i = 0; i< N; i++){
                    // cout << s[i] << '\n';
                    set[s[i]]++;
                    if(set['A'] == X){
                        match['A']++; 
                        set['A'] = 0;
                        set['B'] = 0;
                    }else if(set['B'] == X){
                        match['B']++;
                        set['B'] = 0;
                        set['A'] = 0;
                    }else{
                        // do nothing;
                    }

                    total_play = i;
                    if(max(match['A'], match['B']) == Y){
                        break;
                    }
                }
        
                // cout << "match [A] : " << match['A'] << " match[B] : " << match['B'] << "total play : " <<  total_play << endl;
                //&& (match['A']*X + match['B']*X) == N
                if(total_play == N-1 && max(match['A'], match['B']) == Y){
                    char ultimate_winner = match['A'] > match['B'] ? 'A' :
                                    match['B'] > match['A'] ? 'B' : '?';
                    
                    winner_count_in_valid_scenarios[ultimate_winner]++;
            
                    // cout << ultimate_winner << " ON X:" << X << ", Y:" << Y << '\n';
                }else{
                    // cout << "Invalid" <<'\n';

                }

                Y--; 
            }
            Y = N;
            X++;
        }

        // cout << "A: " << winner_count_in_valid_scenarios['A'] << " B: " << winner_count_in_valid_scenarios['B'] << " ?:"
        //     << winner_count_in_valid_scenarios['?'] << '\n';

        char final_winner = winner_count_in_valid_scenarios['?'] > 0 ? '?' 
            : winner_count_in_valid_scenarios['A'] > winner_count_in_valid_scenarios['B'] ? 'A' : 'B';
        cout << final_winner << '\n';

    }
    
    return 0;
}