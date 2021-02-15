// Name: Macintyre Sunde
// Date: 15/02/21

#include <iostream>

#define LOG(x) std::cout << x << std::endl
int main(int argc, char** argv)
{
   int X, Y, N;
   LOG("X:");
   std::cin >> X;
   LOG("Y:");
   std::cin >> Y;
   LOG("N:");
   std::cin >> N;

   // Your code here
   LOG("RESULT:");
   for (int i = 1; i <= N; i++)
   {
	   if (!(i % X + i % Y))
		   LOG("FizBuz");
	   else if (!(i % X))
		   LOG("Fiz");
	   else if (!(i % Y))
		   LOG("Buz");
	   else
		   LOG(i);
   }
}

