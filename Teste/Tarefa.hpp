#pragma once
#include <iostream>
#include <string>
#include "Status.hpp"
#include "EntidadeBase.hpp"

class Tarefa : public EntidadeBase {
	private:
		std::string nome;
		std::string descricao;
		int prioridade;
		Status status;
};