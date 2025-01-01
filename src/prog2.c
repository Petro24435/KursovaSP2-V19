#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main() 
{
   int16_t _aAAAAAAAAAAAA, _bBBBBBBBBBBBB, _cCCCCCCCCCCCC;
   printf("Enter _aAAAAAAAAAAAA:");
   scanf("%hd", &_aAAAAAAAAAAAA);
   printf("Enter _bBBBBBBBBBBBB:");
   scanf("%hd", &_bBBBBBBBBBBBB);
   printf("Enter _cCCCCCCCCCCCC:");
   scanf("%hd", &_cCCCCCCCCCCCC);
   if ((_aAAAAAAAAAAAA > _bBBBBBBBBBBBB))
   {
   if ((_aAAAAAAAAAAAA > _cCCCCCCCCCCCC))
   {
   goto Abigger;
   }
   else
   {
   printf("%d\n", _cCCCCCCCCCCCC);
   goto OutofIF;
Abigger:
   printf("%d\n", _aAAAAAAAAAAAA);
   goto OutofIF;
   }
   }
   if ((_bBBBBBBBBBBBB < _cCCCCCCCCCCCC))
   {
   printf("%d\n", _cCCCCCCCCCCCC);
   }
   else
   {
   printf("%d\n", _bBBBBBBBBBBBB);
   }
OutofIF:
   if (((_aAAAAAAAAAAAA == _bBBBBBBBBBBBB) && (_aAAAAAAAAAAAA == _cCCCCCCCCCCCC) && (_bBBBBBBBBBBBB == _cCCCCCCCCCCCC)))
   {
   printf("%d\n", 1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if (((_aAAAAAAAAAAAA < 0) || (_bBBBBBBBBBBBB < 0) || (_cCCCCCCCCCCCC < 0)))
   {
   printf("%d\n", -1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if ((!(_aAAAAAAAAAAAA < (_bBBBBBBBBBBBB + _cCCCCCCCCCCCC))))
   {
   printf("%d\n", (10));
   }
   else
   {
   printf("%d\n", (0));
   }
   system("pause");
    return 0;
}
