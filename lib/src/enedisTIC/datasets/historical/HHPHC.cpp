/* Corresponding header inclusion */
#include "enedisTIC/datasets/historical/HHPHC.h"

/* System includes */
#include <stdexcept>

/* Libraries includes */

/* Project includes */


namespace TIC {
namespace Datasets {

/* ########################################################################## */
/* ########################################################################## */

const std::string   HHPHC::LABEL("HHPHC");
const size_t        HHPHC::DATA_LENGTH(1);
const std::string   HHPHC::UNIT("");

/* ########################################################################## */
/* ########################################################################## */

HHPHC::HHPHC()
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
