#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{
   int16_t   _aAAAAAAAAAAAA, _bBBBBBBBBBBBB, _xXXXXXXXXXXXX, _yYYYYYYYYYYYY;
   printf("Enter _aAAAAAAAAAAAA:");
   scanf("%hd", &_aAAAAAAAAAAAA);
   printf("Enter _bBBBBBBBBBBBB:");
   scanf("%hd", &_bBBBBBBBBBBBB);
   printf("%d\n", _aAAAAAAAAAAAA + _bBBBBBBBBBBBB);
   printf("%d\n", _aAAAAAAAAAAAA - _bBBBBBBBBBBBB);
   printf("%d\n", _aAAAAAAAAAAAA * _bBBBBBBBBBBBB);
   printf("%d\n", _aAAAAAAAAAAAA / _bBBBBBBBBBBBB);
   printf("%d\n", _aAAAAAAAAAAAA % _bBBBBBBBBBBBB);
   _xXXXXXXXXXXXX = (_aAAAAAAAAAAAA - _bBBBBBBBBBBBB) * 10 + (_aAAAAAAAAAAAA + _bBBBBBBBBBBBB) / 10;
   _yYYYYYYYYYYYY = _xXXXXXXXXXXXX + _xXXXXXXXXXXXX % 10;
   printf("%d\n", _xXXXXXXXXXXXX);
   printf("%d\n", _yYYYYYYYYYYYY);
   system("pause");
    return 0;
}
