/* Corresponding header inclusion */
#include "enedisTIC/datasets/standard/SINSTS3.h"

/* System includes */
#include <stdexcept>

/* Libraries includes */

/* Project includes */


namespace TIC {
namespace Datasets {

/* ########################################################################## */
/* ########################################################################## */

const std::string   SINSTS3::LABEL("SINSTS3");
const size_t        SINSTS3::DATA_LENGTH(5);
const std::string   SINSTS3::UNIT("VA");

/* ########################################################################## */
/* ########################################################################## */

SINSTS3::SINSTS3()
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
