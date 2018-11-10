#pragma once
#include "EntidadeBase.hpp"
#include "Tarefa.hpp"
#include <string>
#include <iostream>
#include <vector>

class Quadro : public EntidadeBase {
	private:
		std::string nome;
		std::vector<Tarefa> tarefas;
};