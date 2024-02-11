#ifndef _PROBLEM_H
#define _PROBLEM_H

#include "Geometry.h"

namespace OTAP
{

    enum class ProblemType
    {
        HeatFlux,
        Temperature,
        Design
    };

    class Problem
    {
    public:
        ProblemType type;

        Problem();
        ~Problem();

    private:
        const Geometry &geometry;
    };

} // namespace OTAP

#endif // _PROBLEM_H