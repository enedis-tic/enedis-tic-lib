/* Corresponding header inclusion */
#include "enedisTIC/datasets/standard/NGTF.h"

/* System includes */
#include <stdexcept>

/* Libraries includes */

/* Project includes */


namespace TIC {
namespace Datasets {

/* ########################################################################## */
/* ########################################################################## */

const std::string   NGTF::LABEL("NGTF");
const size_t        NGTF::DATA_LENGTH(16);

/* ########################################################################## */
/* ########################################################################## */

NGTF::NGTF()
    :   GenericDataset(
            LABEL,
            false,
            DATA_LENGTH,
            E_DATA_TEXT )
{
}

/* ########################################################################## */
/* ########################################################################## */

} // namespace Datasets
} // namespace TIC
