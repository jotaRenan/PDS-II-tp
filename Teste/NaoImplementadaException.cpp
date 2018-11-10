#include "NaoImplementadaException.hpp"

NaoImplementadaException::NaoImplementadaException() : std::logic_error("Função não implementada!") { };
