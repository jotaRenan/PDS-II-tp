#include "stdafx.h"
#include "QuadroRepositorio.hpp"
#include "NaoImplementadaException.hpp"

bool QuadroRepositorio::inserir(Quadro)
{
	throw NaoImplementadaException();
}

bool QuadroRepositorio::atualizar(Quadro)
{
	throw NaoImplementadaException();
}

Quadro QuadroRepositorio::remover(long)
{
	throw NaoImplementadaException();
}

Quadro QuadroRepositorio::obter(long)
{
	throw NaoImplementadaException();
}

std::vector<Quadro> QuadroRepositorio::obter()
{
	throw NaoImplementadaException();
}
