/* Corresponding header inclusion */
#include "enedisTIC/datasets/standard/RELAIS.h"

/* System includes */
#include <stdexcept>

/* Libraries includes */

/* Project includes */


namespace TIC {
namespace Datasets {

/* ########################################################################## */
/* ########################################################################## */

const std::string   RELAIS::LABEL("RELAIS");
const size_t        RELAIS::DATA_LENGTH(3);
const std::string   RELAIS::UNIT("");

/* ########################################################################## */
/* ########################################################################## */

RELAIS::RELAIS()
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
