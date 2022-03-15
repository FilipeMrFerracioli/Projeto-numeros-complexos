#include "numerocomplexo.h"

namespace minhaNamespace {

NumeroComplexo::NumeroComplexo():
    parteReal(0),
    parteImaginaria(0)
{

}

NumeroComplexo::~NumeroComplexo() {

}

void NumeroComplexo::setNumeroComplexo(int parteReal, int parteImaginaria){
    this->parteReal = parteReal;
    this->parteImaginaria = parteImaginaria;
}

QString NumeroComplexo::getNumeroComplexo() const{
    QString res = QString::number(parteReal);

    if(parteImaginaria >= 0) res += " + ";

    res += QString::number(parteImaginaria);

    return res;
}

NumeroComplexo NumeroComplexo::operator + (NumeroComplexo &numero){
    NumeroComplexo aux;
    aux.setNumeroComplexo(parteReal + numero.parteReal, parteImaginaria + numero.parteImaginaria);
    return aux;
}

NumeroComplexo NumeroComplexo::operator - (NumeroComplexo &numero){

}

NumeroComplexo NumeroComplexo::operator * (NumeroComplexo &numero){

}

NumeroComplexo NumeroComplexo::operator / (NumeroComplexo &numero){

}

bool NumeroComplexo::operator == (NumeroComplexo &numero){

}

bool NumeroComplexo::operator != (NumeroComplexo &numero){

}

}

