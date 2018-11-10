#pragma once
#include "RepositorioBase.h"
#include "Tarefa.hpp"

class TarefaRepositorio 
	: public RepositorioBase<Tarefa> {
	
	// Herdado por meio de RepositorioBase
	virtual bool inserir(Tarefa) override;
	virtual bool atualizar(Tarefa) override;
	virtual Tarefa remover(long) override;
	virtual Tarefa obter(long) override;
	virtual std::vector<Tarefa> obter() override;
};