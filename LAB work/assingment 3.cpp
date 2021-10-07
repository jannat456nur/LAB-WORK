
 #include <bits/stdc++.h>
using namespace std;


const int n = 56;


struct Student
{
    string name, id;
    int marks;
} s[n];


void struct_sort();


int main()
{
    int i;
    string t;

    freopen("input.txt", "r", stdin);

    for(i=0; i<n; i++)
    {
        getline(cin, s[i].id);
        getline(cin, s[i].name);
        getline(cin, t);
        s[i].marks = atoi(t.c_str());
    }

    struct_sort();

    for(i=0; i<n; i++)
    {
        cout << setw(15);
        cout << left << s[i].id;
        cout << setw(30);
        cout << s[i].name;
        cout << setw(5);
        cout << s[i].marks << endl;
    }

    return 0;
}void struct_sort()
{
    int i, j;

 Student temp;
 for(i=0; i<n; i++)
 {
  for(j=1; j<n-i; j++)
  {
   if(s[j-1].marks < s[j].marks )
   {
    temp = s[j-1];
    s[j-1] = s[j];
    s[j] = temp;
   }
   else if ( s[j-1].marks == s[j].marks && s[j-1].id > s[j].id)
    {
    temp = s[j-1];
    s[j-1] = s[j];
    s[j] = temp;
   }
  }
 }
}
