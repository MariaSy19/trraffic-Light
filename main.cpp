#include <bits/stdc++.h>
using namespace std;
string Colours[]={"Red","Green"};
string Colours2[]={"Red","Yellow", "Green"};
int num ;
vector <int>vec;
vector<int>vec2;
void GetOutputs(int index)
{
    int i = 0;
    if (index == num)
    {
        while(i<num)
        {
            cout << i + 1 << "- " << Colours[vec[i]];
            if (i != num - 1)
            {
                cout << " , ";
            }
            i++;
        }
        cout <<endl;
        return;
    }
    //for print the probability
    for (int i = 0; i < 2; i++) {
        vec[index] = i;
        GetOutputs(index + 1);
    }
}
void GetOutputs2(int index) {
    if (index == num)

    {
        int i = 0;
        if (index == num)
        {
            while(i<num)
            {
                cout << i + 1 << "- " << Colours2[vec2[i]];
                if (i != num - 1)
                {
                    cout << " , ";
                }
                i++;
            }
            cout <<endl;
            return;
        }

    }
    for (int i = 0; i < 3; i++) {
        vec2[index] = i;
        GetOutputs2(index + 1);
    }
}
void output() //numTraffic : number of  traffic lights
{                                        // size of out = number of traffics
    char flag ;
    cout << "Enter what you want"
            "\nif the countries don't use the yellow light press '0'"
            "\nif the countries use yellow light press '1'"<<endl;
    cin >> flag;
    if (flag == '0') {
        cout << "Enter the number of traffic light :" << endl;
        cin >> num;
        vec.resize(num);
        GetOutputs(0);
    }
    if (flag == '1')
    {
        cout << "Enter the number of traffic light :" << endl;
        cin >> num;
        vec2.resize(num);
        GetOutputs2(0);
    }
}
int main()
{
    int testcases = 1;
    for (int i = 1; i <= testcases; i++)
    {
        output();
    }
}
