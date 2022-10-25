/* Corresponding header inclusion */
#include "enedisTIC/datasets/standard/PCOUP.h"

/* System includes */
#include <stdexcept>

/* Libraries includes */

/* Project includes */


namespace TIC {
namespace Datasets {

/* ########################################################################## */
/* ########################################################################## */

const std::string   PCOUP::LABEL("PCOUP");
const size_t        PCOUP::DATA_LENGTH(2);
const std::string   PCOUP::UNIT("kVA");

/* ########################################################################## */
/* ########################################################################## */

PCOUP::PCOUP()
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
