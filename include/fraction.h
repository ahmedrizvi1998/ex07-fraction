//
// Created by vscilab on 10/25/2018.
//

#ifndef FRACTIONS_FRACTIONS_H
#define FRACTIONS_FRACTIONS_H

#include <cstdint>
namespace edu {
    namespace vcccd{
        namespace vc{
            namespace csv13 {
                class Fraction {

                public:
                    Fraction(int64_t numerator, int64_t denominator) {
                        this->numerator = numerator;
                        this->denominator = denominator;
                    }

                public:
                    int64_t getNumerator() const;

                    int64_t getDenominator() const;

                    double getRealValue() const;


                    void setNumerator(int64_t numerator);

                    void setDenominator(int64_t denominator);

                    void output();

                private:
                    int64_t numerator;
                    int64_t denominator;

                    int gcd(int64_t numerator, int64_t denominator);

                };

            }}}}

#endif //FRACTIONS_FRACTIONS_H
