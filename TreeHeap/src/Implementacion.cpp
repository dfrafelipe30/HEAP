/*
 * Implementacion.cpp
 *
 *  Created on: 11/05/2018
 *      Author: vonnewmann
 */


const int tamGlobal = 10;

template <typename Dato>
Heap<Dato>::Heap()
{
	contador = 1;
	array[tamGlobal];
}
template <typename Dato>
bool Heap<Dato>::Empty()
{
	if(contador == 1)
	{
		return true;
	}
	else return false;
}
template <typename Dato>
void Heap<Dato>::insert(Dato & x)
{
	if(contador == sizeof(array)/sizeof(*array) - 1)
	{
		expandir();
	}


}
