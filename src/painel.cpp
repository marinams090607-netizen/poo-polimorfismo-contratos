#include "painel.hpp"
#include <iomanip>
#include <sstream>

std::string linhaPainel(const Sensor& sensor) {
    std::ostringstream out;

    out << sensor.tag()
        << ": "
        << std::fixed
        << std::setprecision(1)
        << sensor.valor()
        << " "
        << sensor.unidade()
        << " | ";

    if (sensor.emAlerta()) {
        out << "ALERTA";
    } else {
        out << "OK";
    }

    return out.str();
}