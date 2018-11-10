#pragma once
#include <iostream>
#include <vector>

template <class T> 
class RepositorioBase {
	public:
		virtual bool inserir(T) = 0;
		virtual bool atualizar(T) = 0;
		virtual T remover(long) = 0;
		virtual T obter(long) = 0;
		virtual std::vector<T> obter() = 0;
};
