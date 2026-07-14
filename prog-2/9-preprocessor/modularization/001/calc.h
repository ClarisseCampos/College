/* INCLUDE GUARD
(header guard/file guard) é uma técnica em C e usada para impedir que um arquivo de cabeçalho ( .h ou .hpp ) seja processado mais de uma vez durante a compilação, evitando erros de "dupla declaração" ou "redefinição"*/

#ifndef CALC_H

#define CALC_H
int add(int x, int y);
int subtract(int x, int y);
int multiply(int x, int y);
float divide(int x, int y);

#endif