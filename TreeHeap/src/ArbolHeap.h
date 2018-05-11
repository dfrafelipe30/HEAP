/*
 * ArbolHeap.h
 *
 *  Created on: 11/05/2018
 *      Author: vonnewmann
 */

#ifndef SRC_ARBOLHEAP_H_
#define SRC_ARBOLHEAP_H_


template <typename Dato>
class Heap{
public:
	/*
	 * Constructuros
	 */
	Heap();
	bool Empty();
	void insert(Dato & x);
	void insert(Dato && x);
	void borrarmin();
	void borrarmin(Dato & elem);
	void expandir();

private:

	int contador;

	Dato array[];

};

#endif /* SRC_ARBOLHEAP_H_ */
#include "Implementacion.cpp"
