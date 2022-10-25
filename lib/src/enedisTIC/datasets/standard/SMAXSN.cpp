/* Corresponding header inclusion */
#include "enedisTIC/datasets/standard/SMAXSN.h"

/* System includes */
#include <stdexcept>

/* Libraries includes */

/* Project includes */


namespace TIC {
namespace Datasets {

/* ########################################################################## */
/* ########################################################################## */

const std::string   SMAXSN::LABEL("SMAXSN");
const size_t        SMAXSN::DATA_LENGTH(5);
const std::string   SMAXSN::UNIT("VA");

/* ########################################################################## */
/* ########################################################################## */

SMAXSN::SMAXSN()
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
