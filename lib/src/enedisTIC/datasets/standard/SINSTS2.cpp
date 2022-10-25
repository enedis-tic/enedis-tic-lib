/* Corresponding header inclusion */
#include "enedisTIC/datasets/standard/SINSTS2.h"

/* System includes */
#include <stdexcept>

/* Libraries includes */

/* Project includes */


namespace TIC {
namespace Datasets {

/* ########################################################################## */
/* ########################################################################## */

const std::string   SINSTS2::LABEL("SINSTS2");
const size_t        SINSTS2::DATA_LENGTH(5);
const std::string   SINSTS2::UNIT("VA");

/* ########################################################################## */
/* ########################################################################## */

SINSTS2::SINSTS2()
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
