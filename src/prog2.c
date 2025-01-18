#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{
   int16_t   _aAAAAAAAAAAAA, _bBBBBBBBBBBBB, _cCCCCCCCCCCCC, _tTTTTTTTTTTTT;
   printf("Enter _aAAAAAAAAAAAA:");
   scanf("%hd", &_aAAAAAAAAAAAA);
   printf("Enter _bBBBBBBBBBBBB:");
   scanf("%hd", &_bBBBBBBBBBBBB);
   printf("Enter _cCCCCCCCCCCCC:");
   scanf("%hd", &_cCCCCCCCCCCCC);
   if ((_bBBBBBBBBBBBB > _aAAAAAAAAAAAA))
{
   goto _oOOOOOOOOOOOQ;
}
   else
{
   _tTTTTTTTTTTTT = _aAAAAAAAAAAAA;
}
_oOOOOOOOOOOOW:
   if ((_cCCCCCCCCCCCC > _bBBBBBBBBBBBB && _cCCCCCCCCCCCC > _aAAAAAAAAAAAA))
{
   goto _oOOOOOOOOOOOE;
}
   else
{
   goto _oOOOOOOOOOOOR;
}
_oOOOOOOOOOOOQ:
   _tTTTTTTTTTTTT = _bBBBBBBBBBBBB;
   goto _oOOOOOOOOOOOW;
_oOOOOOOOOOOOE:
   _tTTTTTTTTTTTT = _cCCCCCCCCCCCC;
   goto _oOOOOOOOOOOOR;
_oOOOOOOOOOOOR:
   printf("%d\n", _tTTTTTTTTTTTT);
   if (((_aAAAAAAAAAAAA == _bBBBBBBBBBBBB) && (_aAAAAAAAAAAAA == _cCCCCCCCCCCCC) && (_bBBBBBBBBBBBB == _cCCCCCCCCCCCC)))
{
   printf("%d\n", 1);
}
   else
{
   printf("%d\n", 0);
}
   if (((_aAAAAAAAAAAAA <0) || (_bBBBBBBBBBBBB <0) || (_cCCCCCCCCCCCC <0)))
{
   printf("%d\n", -1);
}
   else
{
   printf("%d\n", 0);
}
   if ((!(_aAAAAAAAAAAAA <(_bBBBBBBBBBBBB + _cCCCCCCCCCCCC))))
{
   printf("%d\n", 10);
}
   else
{
   printf("%d\n", 0);
}
   system("pause");
    return 0;
}
