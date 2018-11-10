#pragma once
#include "RepositorioBase.h"
#include "Quadro.hpp"

class QuadroRepositorio 
	: public RepositorioBase<Quadro> {

	// Herdado por meio de RepositorioBase
	virtual bool inserir(Quadro) override;
	virtual bool atualizar(Quadro) override;
	virtual Quadro remover(long) override;
	virtual Quadro obter(long) override;
	virtual std::vector<Quadro> obter() override;
};