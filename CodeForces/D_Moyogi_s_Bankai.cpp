#include "bits/stdc++.h"
using namespace std;


int main() {
    /*

    Observation :Si je prends le minimum de tableau les autres elements ne vont jamais le diviser
    -> le minimum na pas de diviseurs autre que lui meme donc je suis obliger de le prendre 

    faut il toujour prendre les 2 minimum de tableau ?  -> non 
    exemple [2,4,4,9,27]
    si je prend 2 et 4  alors ca va me donner que le tableau nest pas beautiful ce qui est faux
    si je prend 2 et 9 ca donne la bonne réponse 

    => il suffit de prendre le minimum et le premier element qui ne le devise pas
    
    si tout les autres valeurs divise le minimum il suffit de prendre les 2 premiers elements

    */
    int test_cases;
    cin>>test_cases;
    for(int j = 0; j < test_cases; j++)
    {
        int n;
        cin >> n;
        vector <int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());

        int min1 = v[0], min2= v[1];

        for(int i = 1; i < n; i++)
        {
            if ( v[i] % min1 != 0 )
            {
                min2 = v[i];
                break;    //pour arreter le boucle
            }
        }

        bool beautiful = 1;
        for(int i = 0; i < n; i++)
        {
            if( ( v[i] % min1 != 0 ) && ( v[i] % min2 != 0) )
            {
                cout<<"NO\n";
                beautiful = 0;
                break;
            }
        }

        if(beautiful)
            cout<<"YES\n";

        


    }
}
