#ifndef NUMEROCOMPLEXO_H
#define NUMEROCOMPLEXO_H

#include <QString>

namespace minhaNamespace {
class NumeroComplexo
{
private:
    int parteReal;
    int parteImaginaria;
public:
    NumeroComplexo();
    ~NumeroComplexo();

    void setNumeroComplexo(int parteReal, int parteImaginaria);
    QString getNumeroComplexo() const;

    NumeroComplexo operator + (NumeroComplexo &numero);
    NumeroComplexo operator - (NumeroComplexo &numero);
    NumeroComplexo operator * (NumeroComplexo &numero);
    NumeroComplexo operator / (NumeroComplexo &numero);
    bool operator == (NumeroComplexo &numero);
    bool operator != (NumeroComplexo &numero);
};
}

#endif // NUMEROCOMPLEXO_H
