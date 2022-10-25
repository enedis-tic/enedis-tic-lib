/* Corresponding header inclusion */
#include "enedisTIC/datasets/standard/SINSTS1.h"

/* System includes */
#include <stdexcept>

/* Libraries includes */

/* Project includes */


namespace TIC {
namespace Datasets {

/* ########################################################################## */
/* ########################################################################## */

const std::string   SINSTS1::LABEL("SINSTS1");
const size_t        SINSTS1::DATA_LENGTH(5);
const std::string   SINSTS1::UNIT("VA");

/* ########################################################################## */
/* ########################################################################## */

SINSTS1::SINSTS1()
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
