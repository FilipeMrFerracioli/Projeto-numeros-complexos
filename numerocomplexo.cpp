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

void NumeroComplexo::setNumeroComplexoUI(int parteReal, int parteImaginaria){
    if(parteImaginaria == 0) throw QString("A parte imaginária não pode ser = 0!");
    this->parteReal = parteReal;
    this->parteImaginaria = parteImaginaria;
}

QString NumeroComplexo::getNumeroComplexo() const{
    QString res = QString::number(parteReal);

    if(parteImaginaria != 0) {
        if(parteImaginaria >= 0) res += " + ";
        res += QString::number(parteImaginaria) + "i";
    }

    return res;
}

NumeroComplexo NumeroComplexo::operator + (NumeroComplexo &numero){
    NumeroComplexo aux;
    aux.setNumeroComplexo(
                parteReal + numero.parteReal,
                parteImaginaria + numero.parteImaginaria);
    return aux;
}

NumeroComplexo NumeroComplexo::operator - (NumeroComplexo &numero){
    NumeroComplexo aux;
    aux.setNumeroComplexo(
                parteReal - numero.parteReal,
                parteImaginaria - numero.parteImaginaria);
    return aux;
}

NumeroComplexo NumeroComplexo::operator * (NumeroComplexo &numero){
    NumeroComplexo aux;
    aux.setNumeroComplexo(
                (parteReal * numero.parteReal) - (parteImaginaria * numero.parteImaginaria),
                (parteReal * numero.parteImaginaria) + (parteImaginaria * numero.parteReal));
    return aux;
}

NumeroComplexo NumeroComplexo::operator / (NumeroComplexo &numero){
    NumeroComplexo aux;
    aux.setNumeroComplexo(
                ((parteReal * numero.parteReal) + (parteImaginaria * numero.parteImaginaria))
                / ((numero.parteReal*numero.parteReal) + (numero.parteImaginaria * numero.parteImaginaria)),
                ((parteImaginaria * numero.parteReal) - (parteReal * numero.parteImaginaria))
                / ((numero.parteReal*numero.parteReal) + (numero.parteImaginaria * numero.parteImaginaria))
                );
    return aux;
}

bool NumeroComplexo::operator == (NumeroComplexo &numero){
    return (parteReal == numero.parteReal && parteImaginaria == numero.parteImaginaria);
}

bool NumeroComplexo::operator != (NumeroComplexo &numero){
    return (parteReal != numero.parteReal || parteImaginaria != numero.parteImaginaria);
}

}
