#include <iostream>
using namespace std;

class Array_Search_Element
{
public:
    static void main()
    {
        int l;
        cout << "Enter the Array Limit: ";
        cin >> l;
        int* a = new int[l];
        
        for (int i = 0; i < l; i++)
        {
            cout << "Element of a[" << i << "] :";
            cin >> a[i];
        }
        
        int s;
        cout << "Enter the Search Array Element: ";
        cin >> s;
        
        int i, f = 0;
        for (i = 0; i < l; i++)
        {
            if (a[i] == s)
            {
                f = 1;
                break;
            }
        }
        
        if (f == 1)
        {
            cout << "The Element is found in the position : " << i + 1 << endl;
            cout << "The Element is found in the index : " << i << endl;
        }
        else
        {
            cout << "The Element is Not found" << endl;
        }
        
        delete[] a; // Free the dynamically allocated array
    }
};

int main()
{
    Array_Search_Element::main();
    return 0;
}
