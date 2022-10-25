/* Corresponding header inclusion */
#include "enedisTIC/datasets/standard/UMOY1.h"

/* System includes */
#include <stdexcept>

/* Libraries includes */

/* Project includes */


namespace TIC {
namespace Datasets {

/* ########################################################################## */
/* ########################################################################## */

const std::string   UMOY1::LABEL("UMOY1");
const size_t        UMOY1::DATA_LENGTH(3);
const std::string   UMOY1::UNIT("V");

/* ########################################################################## */
/* ########################################################################## */

UMOY1::UMOY1()
    :   GenericDataset(
            LABEL,
            true,
            DATA_LENGTH,
            E_DATA_INTEGER,
            UNIT )
{
}

/* ########################################################################## */
/* ########################################################################## */

} // namespace Datasets
} // namespace TIC
