/* Corresponding header inclusion */
#include "enedisTIC/datasets/standard/DATE.h"

/* System includes */
#include <stdexcept>

/* Libraries includes */

/* Project includes */


namespace TIC {
namespace Datasets {

/* ########################################################################## */
/* ########################################################################## */

const std::string   DATE::LABEL("DATE");
const size_t        DATE::DATA_LENGTH(0);
const std::string   DATE::UNIT("");

/* ########################################################################## */
/* ########################################################################## */

DATE::DATE()
    :   GenericDataset(
            LABEL,
            true,
            DATA_LENGTH,
            E_DATA_NONE,
            UNIT )
{
}

/* ########################################################################## */
/* ########################################################################## */

} // namespace Datasets
} // namespace TIC
