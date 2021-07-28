#include <bits/stdc++.h>
using namespace std;

int matching(string bigstring, string smallstring)
{
   unordered_map<char, int> smallmap;
   for (char ch : smallstring)
      smallmap[ch]++;

   int window = smallstring.size();
   int len = smallmap.size();

   int i = 0, j = 0, count = 0;

   while (j < bigstring.length())
   {
      if (smallmap.find(bigstring[j]) != smallmap.end())
      {
         smallmap[bigstring[j]]--;

         if (smallmap[bigstring[j]] == 0)
         {
            len--;
         }
      }

      if (j - i + 1 < window)
         j++;

      else if (j - i + 1 == window)
      {
         if (len == 0)
            count++;

         if (smallmap.find(bigstring[i]) != smallmap.end())
         {
            smallmap[bigstring[i]]++;
            if (smallmap[bigstring[i]] == 1)
            {
               len++;
            }
         }
         i++;
         j++;
      }
   }
   return count;
}

int main()
{

   string bigstring = "baa";
   string smallstring = "aa";

   cout << matching(bigstring, smallstring);
}
