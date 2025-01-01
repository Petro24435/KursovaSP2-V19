#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{
   int16_t _aAAAAAAAAAAAA;
   int16_t _aAAAAAAAAAAA2;
   int16_t _bBBBBBBBBBBBB;
   int16_t _xXXXXXXXXXXXX;
   int16_t _cCCCCCCCCCCC1;
   int16_t _cCCCCCCCCCCC2;
   printf("Enter _aAAAAAAAAAAAA:");
   scanf("%hd", &_aAAAAAAAAAAAA);
   printf("Enter _bBBBBBBBBBBBB:");
   scanf("%hd", &_bBBBBBBBBBBBB);
   for (int16_t _aAAAAAAAAAAA2 = _aAAAAAAAAAAAA; _aAAAAAAAAAAA2 <= _bBBBBBBBBBBBB; _aAAAAAAAAAAA2++)
   printf("%d\n", (_aAAAAAAAAAAA2 * _aAAAAAAAAAAA2));
   for (int16_t _aAAAAAAAAAAA2 = _bBBBBBBBBBBBB; _aAAAAAAAAAAA2 <= _aAAAAAAAAAAAA; _aAAAAAAAAAAA2++)
   printf("%d\n", (_aAAAAAAAAAAA2 * _aAAAAAAAAAAA2));
   _xXXXXXXXXXXXX = 0;
   _cCCCCCCCCCCC1 = 0;
   while (_cCCCCCCCCCCC1 < _aAAAAAAAAAAAA)
   {
   {
   _cCCCCCCCCCCC2 = 0;
   while (_cCCCCCCCCCCC2 < _bBBBBBBBBBBBB)
   {
   {
   _xXXXXXXXXXXXX = (_xXXXXXXXXXXXX + 1);
   _cCCCCCCCCCCC2 = (_cCCCCCCCCCCC2 + 1);
   }
   }
   _cCCCCCCCCCCC1 = (_cCCCCCCCCCCC1 + 1);
   }
   }
   printf("%d\n", _xXXXXXXXXXXXX);
   _xXXXXXXXXXXXX = 0;
   _cCCCCCCCCCCC1 = 1;
   do
   {
   _cCCCCCCCCCCC2 = 1;
   do
   {
   _xXXXXXXXXXXXX = (_xXXXXXXXXXXXX + 1);
   _cCCCCCCCCCCC2 = (_cCCCCCCCCCCC2 + 1);
   }
   while (!(_cCCCCCCCCCCC2 > _bBBBBBBBBBBBB));
   _cCCCCCCCCCCC1 = (_cCCCCCCCCCCC1 + 1);
   }
   while (!(_cCCCCCCCCCCC1 > _aAAAAAAAAAAAA));
   printf("%d\n", _xXXXXXXXXXXXX);
   system("pause");
    return 0;
}
