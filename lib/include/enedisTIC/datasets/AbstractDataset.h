#ifndef ABSTRACTDATASET_H
#define ABSTRACTDATASET_H

/* Inherited classes */
#include "../libEnedisTIC_global.h"

/* System includes */
#include <string>

/* Libraries includes */

/* Project includes */
#include "../utils.h"


namespace TIC {
namespace Datasets {

/* ########################################################################## */
/* ########################################################################## */

class   LIBENEDISTIC_EXPORT AbstractDataset
{
public:

    typedef enum    EDataType
    {
        E_DATA_TEXT,
        E_DATA_INTEGER,
        E_DATA_NONE
    }   TeDataType;

    static std::string  extractLabel(const std::string&  pDatasetStr);

    /* Fixed data */
    std::string label(void) const;
    bool        hasTimestamp(void) const;
    size_t      dataLength(void) const;
    TeDataType  dataType(void) const;
    std::string unit(void) const;


    /* Interactions with transport layer */
    void        unpack(const std::string& pDatasetStr);
    std::string
        pack(
            const TIC::TeTICMode pTICMode=E_TIC_MODE_HISTORICAL) const;


    /* Varying data */
    struct tm   timestamp(void) const;
    time_t      timestampEpoch_s(void) const;
    std::string timestampStr(void) const;
    void        setTimestamp(const std::string& pTimestampStr);

    std::string data(void) const;


    virtual std::string toJsonStr(void) const;



protected:

    AbstractDataset(
        const std::string&  pLabel,
        const bool          pHasTimestamp,
        const size_t&       pDataLength,
        const TeDataType    pDataType,
        const std::string&  pUnit=std::string() );


//    virtual void    load(const TIC::Transport::Dataset &pDataset);


    virtual std::string packData(void) const    = 0;
    virtual void        unpackData(const std::string& pData)    = 0;


    void    checkData(const std::string& pData);



private:



public:
protected:

    /* <LF> <--LABEL--> [<HT> <--TIMESTAMP-->] <HT> <-- DATA --> <HT> <--CS--> <CR>
     * + LABEL
     *   + is strictly 8 chars long.
     * + Timestamp:
     *   + Not always available.
     *   + 13 chars long.
     *   + Format: [SAAMMJJhhmmss]
     * + DATA
     *   + length is variable.
     * + CS / checksum
     *   + 1 char long.
     */
    enum ECharsIndex {
        C_CHARIDX_LF                = 0,
        C_CHARIDX_LABELSTART        = 1,
        C_CHARIDX_LABELEND          = 8,
        C_CHARIDX_HT_LT             = 9,
        C_CHARIDX_TIMESTAMPSTART    = 10,
        C_CHARIDX_TIMESTAMPEND      = 22,
    };

    static const size_t C_LABEL_LENGTH;
    static const size_t C_TIMESTAMP_LENGTH;

    const size_t        m_dataLength;
    const TeDataType    m_dataType;
    const bool          m_hasTimestamp;
    const std::string   m_label;
    const std::string   m_unit;

    struct tm   m_timestamp;



private:

};

/* ########################################################################## */
/* ########################################################################## */

}   /*< namespace Dataset */
}   /*< namespace TIC */

#endif  /*< ABSTRACTDATASET_H */
