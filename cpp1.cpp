#include <iostream>
using namespace std;

class caculator
{
public:
    double Floor(int x)
    {
        return x;
    };

    double add(int x, int y)
    {
        return x + y;
    };

    double Max1(double x, double y)
    {
        if (x > y)
        {
            return x;
        }
        else
        {
            return y;
        }
    }

    bool find1(string &str, char ch)
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == ch)
            {
                return true;
            }
        }
        return false;
    }

    int max2(int arr[], int o)
    {
        int maxValue = arr[0];
        for (int i = 1; i < o; i++)
        {
            if (arr[i] > maxValue)
            {
                maxValue = arr[0];
            }
        }
        return maxValue;
    }
};

int main()
{

    caculator mashinhesab1;
    double q = mashinhesab1.Floor(5.7);
    cout << q << "\n";

    caculator mashinhesab2;
    double o = mashinhesab2.add(-3,5);
    cout << o << "\n";

    caculator mashinhesab3;
    double l = mashinhesab3.Max1(9.75, 12.5);
    cout << l << "\n";

    caculator mashinhesab4;
    string jesus = "hey";
    char christ = 'e';
    cout << (mashinhesab4.find1(jesus, christ) ? "true" : "false") << "\n";

    caculator mashinhesab5;
    int adad[] = {3, 5, 8, 9};
    int n = 5;
    cout << "Maximum value is: " << mashinhesab5.max2(adad, n) << "\n";
}
