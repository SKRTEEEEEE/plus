#include <iostream>

/*
## Iterativo
Se ejecuta un numero determinado de veces

void caminar(int pasos)
{
    for(int i=0;i<pasos;i++)
    {
        std::cout<<"Un paso"<<std::endl;
    }
}

vs

## Recursivo
*/
void caminar(int pasos);
int main()
{
caminar(10);
return 0;
}
void caminar(int pasos)
{
    if(pasos>0)
    {
        std::cout<<"Un paso"<<std::endl;
        caminar(pasos-1);
    }
}