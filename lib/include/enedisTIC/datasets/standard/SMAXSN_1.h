#ifndef SMAXSN_1_H
#define SMAXSN_1_H

/* Inherited classes */
#include "../../libEnedisTIC_global.h"
#include "../GenericDataset.h"

/* System includes */

/* Libraries includes */

/* Project includes */


namespace TIC {
namespace Datasets {


/* ########################################################################## */
/* ########################################################################## */
/**
 *  @brief Puissance app max. soutirée n-1
 */
class   LIBENEDISTIC_EXPORT SMAXSN_1
        :   public  GenericDataset
{
public:

    SMAXSN_1();



protected:
private:



public:

    static const std::string    LABEL;
    static const size_t         DATA_LENGTH;
    static const std::string    UNIT;



protected:
private:

};

/* ########################################################################## */
/* ########################################################################## */

} // namespace Dataset
} // namespace TIC

#endif  /*< SMAXSN_1_H */
