/* Corresponding header inclusion */
#include "enedisTIC/datasets/standard/STGE.h"

/* System includes */
#include <stdexcept>

/* Libraries includes */

/* Project includes */


namespace TIC {
namespace Datasets {

/* ########################################################################## */
/* ########################################################################## */

const std::string   STGE::LABEL("STGE");
const size_t        STGE::DATA_LENGTH(8);
const std::string   STGE::UNIT("");

/* ########################################################################## */
/* ########################################################################## */

STGE::STGE()
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
