/* Corresponding header inclusion */
#include "enedisTIC/datasets/standard/MSG2.h"

/* System includes */
#include <stdexcept>

/* Libraries includes */

/* Project includes */


namespace TIC {
namespace Datasets {

/* ########################################################################## */
/* ########################################################################## */

const std::string   MSG2::LABEL("MSG2");
const size_t        MSG2::DATA_LENGTH(16);
const std::string   MSG2::UNIT("");

/* ########################################################################## */
/* ########################################################################## */

MSG2::MSG2()
    :   GenericDataset(
            LABEL,
            false,
            DATA_LENGTH,
            E_DATA_TEXT,
            UNIT )
{
}

/* ########################################################################## */
/* ########################################################################## */

} // namespace Datasets
} // namespace TIC
