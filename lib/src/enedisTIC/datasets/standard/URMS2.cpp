/* Corresponding header inclusion */
#include "enedisTIC/datasets/standard/URMS2.h"

/* System includes */
#include <stdexcept>

/* Libraries includes */

/* Project includes */


namespace TIC {
namespace Datasets {

/* ########################################################################## */
/* ########################################################################## */

const std::string   URMS2::LABEL("URMS2");
const size_t        URMS2::DATA_LENGTH(3);
const std::string   URMS2::UNIT("V");

/* ########################################################################## */
/* ########################################################################## */

URMS2::URMS2()
    :   GenericDataset(
            LABEL,
            false,
            DATA_LENGTH,
            E_DATA_INTEGER,
            UNIT )
{
}

/* ########################################################################## */
/* ########################################################################## */

} // namespace Datasets
} // namespace TIC
