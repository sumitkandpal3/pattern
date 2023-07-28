#include <iostream>
using namespace std;

void pattern1(int n)
{
    int i = 0;
    while (i < n)
    {
        int j = 0;
        while (j < n)
        {
            cout << "*"
                 << " ";
            j = j + 1;
        }
        i = i + 1;
        cout << endl;
    }
}

void pattern2(int n)
{
    int i = 0;
    while (i < n)
    {
        int j = 0;
        while (j < n)
        {
            cout << i + 1 << " ";

            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}

void pattern3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << count++ << " ";
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    int count = n * n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << count-- << " ";
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << '*' << " ";
        }
        cout << endl;
    }
}

void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
}

void pattern8(int n)
{
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << count++ << " ";
        }
        cout << endl;
    }
}

void pattern9(int n)
{
    int count;
    for (int i = 0; i < n; i++)
    {
        count = i;
        for (int j = 0; j <= i; j++)
        {

            count = count + 1;
            cout << count << " ";
        }
        cout << endl;
    }
}

void pattern10(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i - j + 1 << " ";
        }
        cout << endl;
    }
}

void pattern11(int n)
{
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }
}

void pattern12(int n)
{

    for (int i = 0; i < n; i++)
    {

        char ch = 'A';
        for (int j = 0; j < n; j++)
        {
            cout << ch << " ";
            ch++;
        }

        cout << endl;
    }
}

void pattern13(int n)
{
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ch << " ";
            ch++;
        }

        cout << endl;
    }
}

void pattern14(int n)
{

    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        ch = ch + i;
        for (int j = 0; j < n; j++)
        {
            cout << ch++ << " ";
        }

        cout << endl;
    }
}

void pattern15(int n)
{
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }
}

void pattern16(int n)
{
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
        }

        cout << endl;
    }
}

void pattern17(int n)
{

    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        ch = ch + i;
        for (int j = 0; j <= i; j++)
        {
            cout << ch++ << " ";
        }

        cout << endl;
    }
}

void pattern18(int n)
{

    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        ch = ch + n - i;
        for (int j = 0; j < i; j++)
        {
            cout << ch++ << " ";
            // ch++;
        }

        cout << endl;
    }
}

void pattern19(int n)
{
    for (int i = 0; i < n; i++)
    {
        int space = n - i;
        for (int j = 0; j < space; j++)
        {
            cout << "   ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*  ";
        }

        cout << endl;
    }
}

void pattern20(int n)
{
    for (int i = 0; i < n; i++)
    {
        int space = n - i;
        for (int j = 0; j < space; j++)
        {
            cout << "*  ";
        }
        for (int j = 0; j <= i; j++)
        {

            cout << "   ";
        }

        cout << endl;
    }
}

// *  *  *  *  *  *  *  *  *
//    *  *  *  *  *  *  *  *
//       *  *  *  *  *  *  *
//          *  *  *  *  *  *
//             *  *  *  *  *
//                *  *  *  *
//                   *  *  *
//                      *  *
//                         *

void pattern21(int n)
{
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < i; j++)
        {
            cout << "   ";
        }
        for (int j = n; j > i; j--)
        {

            cout << "*  ";
        }

        cout << endl;
    }
}

void pattern22(int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = 0; j < i; j++)
        {
            cout << "   ";
        }
        for (int j = n; j > i; j--)
        {

            cout << count << "  ";

            count++;
        }

        cout << endl;
    }
}

void pattern23(int n)
{
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < i; j++)
        {
            cout << "   ";
        }
        for (int j = n; j > i; j--)
        {

            cout << i + 1 << "  ";
        }

        cout << endl;
    }
}

void pattern24(int n)
{
    for (int i = 0; i < n; i++)
    {
        int space = n - i;
        for (int j = 0; j < space; j++)
        {
            cout << "   ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1 << "  ";
        }

        cout << endl;
    }
}

void pattern25(int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = 0; j < i; j++)
        {
            cout << "   ";
        }
        for (int j = n; j > i; j--)
        {
            cout << count << "  ";

            count++;
        }

        cout << endl;
    }
}
void pattern26(int n)
{
    int count = 1;
    for (int i = 0; i < n; i++)
    {

        int space = n - i;
        for (int j = 0; j < space; j++)
        {
            cout << "   ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << count << "  ";
            count = count + 1;
        }

        cout << endl;
    }
}

void pattern27(int n)
{

    for (int i = 0; i < n; i++)
    {

        int space = n - i;
        for (int j = 0; j < space; j++)
        {
            cout << "   ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << "  ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j << "  ";
        }
        cout << endl;
    }
}

void pattern28(int n){
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<n-i;j++){
            cout<<j+1<<" ";
        }
        for(int j=0;j<=i-1;j++){
            cout<<"*"<<" ";
        }
        for(int j=0;j<=i-1;j++){
            cout<<"*"<<" ";
        }
        for(int j=n-i;j>0;j--){
            cout<<j<<" ";
        }
        cout<<endl;

    }
    
}

int main()
{
    int n;
    cout << "Enter the number of rows: " << endl;
    cin >> n;
    // pattern1(n);
    // pattern2(n);
    // pattern3(n);
    // pattern4(n);
    // pattern5(n);
    // pattern6(n);
    // pattern7(n);
    // pattern8(n);
    // pattern9(n);
    // pattern10(n);
    // pattern11(n);
    // pattern12(n);
    // pattern13(n);
    // pattern14(n);
    // pattern15(n);
    // pattern16(n);
    // pattern17(n);
    // pattern18(n);
    // pattern19(n);
    // pattern20(n);
    // pattern21(n);
    // pattern22(n);
    // pattern23(n);
    // pattern24(n);
    // pattern25(n);
    // pattern26(n);
    // pattern27(n);
    //pattern28(n);
}
