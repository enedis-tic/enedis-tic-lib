/* Corresponding header inclusion */
#include "enedisTIC/datasets/standard/EASF02.h"

/* System includes */
#include <stdexcept>

/* Libraries includes */

/* Project includes */


namespace TIC {
namespace Datasets {

/* ########################################################################## */
/* ########################################################################## */

const std::string   EASF02::LABEL("EASF02");
const size_t        EASF02::DATA_LENGTH(9);
const std::string   EASF02::UNIT("Wh");

/* ########################################################################## */
/* ########################################################################## */

EASF02::EASF02()
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
