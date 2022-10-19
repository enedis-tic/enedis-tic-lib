cmake_minimum_required(VERSION 3.16)
project(enedisTIC VERSION 1.0 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Set up AUTOMOC and some sensible defaults for runtime execution
# When using Qt 6.3, you can replace the code block below with
# qt_standard_project_setup()
set(CMAKE_AUTOMOC ON)
include(GNUInstallDirs)

find_package(QT NAMES Qt5 Qt6 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Gui)

add_library(enedisTIC SHARED
    include/enedisTIC/DatasetFactory.h
    include/enedisTIC/FrameBuffer.h
    include/enedisTIC/FrameProcessor.h
    include/enedisTIC/datasets.h
    include/enedisTIC/datasets/AbstractDataset.h
    include/enedisTIC/datasets/GenericDataset.h
    include/enedisTIC/datasets/historical/ADCO.h
    include/enedisTIC/datasets/historical/BBRHCJB.h
    include/enedisTIC/datasets/historical/BBRHCJR.h
    include/enedisTIC/datasets/historical/BBRHCJW.h
    include/enedisTIC/datasets/historical/BBRHPJB.h
    include/enedisTIC/datasets/historical/BBRHPJR.h
    include/enedisTIC/datasets/historical/BBRHPJW.h
    include/enedisTIC/datasets/historical/DEMAIN.h
    include/enedisTIC/datasets/historical/HHPHC.h
    include/enedisTIC/datasets/historical/IINST1.h
    include/enedisTIC/datasets/historical/IINST2.h
    include/enedisTIC/datasets/historical/IINST3.h
    include/enedisTIC/datasets/historical/IMAX1.h
    include/enedisTIC/datasets/historical/IMAX2.h
    include/enedisTIC/datasets/historical/IMAX3.h
    include/enedisTIC/datasets/historical/ISOUSC.h
    include/enedisTIC/datasets/historical/MOTDETAT.h
    include/enedisTIC/datasets/historical/OPTARIF.h
    include/enedisTIC/datasets/historical/PAPP.h
    include/enedisTIC/datasets/historical/PMAX.h
    include/enedisTIC/datasets/historical/PPOT.h
    include/enedisTIC/datasets/historical/PTEC.h
    include/enedisTIC/datasets/standard/ADSC.h
    include/enedisTIC/datasets/standard/CCASN.h
    include/enedisTIC/datasets/standard/CCASN_1.h
    include/enedisTIC/datasets/standard/DATE.h
    include/enedisTIC/datasets/standard/EASD01.h
    include/enedisTIC/datasets/standard/EASD02.h
    include/enedisTIC/datasets/standard/EASD03.h
    include/enedisTIC/datasets/standard/EASD04.h
    include/enedisTIC/datasets/standard/EASF01.h
    include/enedisTIC/datasets/standard/EASF02.h
    include/enedisTIC/datasets/standard/EASF03.h
    include/enedisTIC/datasets/standard/EASF04.h
    include/enedisTIC/datasets/standard/EASF05.h
    include/enedisTIC/datasets/standard/EASF06.h
    include/enedisTIC/datasets/standard/EASF07.h
    include/enedisTIC/datasets/standard/EASF08.h
    include/enedisTIC/datasets/standard/EASF09.h
    include/enedisTIC/datasets/standard/EASF10.h
    include/enedisTIC/datasets/standard/EAST.h
    include/enedisTIC/datasets/standard/IRMS1.h
    include/enedisTIC/datasets/standard/IRMS2.h
    include/enedisTIC/datasets/standard/IRMS3.h
    include/enedisTIC/datasets/standard/LTARF.h
    include/enedisTIC/datasets/standard/MSG1.h
    include/enedisTIC/datasets/standard/MSG2.h
    include/enedisTIC/datasets/standard/NGTF.h
    include/enedisTIC/datasets/standard/NJOURF.h
    include/enedisTIC/datasets/standard/NJOURF_1.h
    include/enedisTIC/datasets/standard/NTARF.h
    include/enedisTIC/datasets/standard/PCOUP.h
    include/enedisTIC/datasets/standard/PJOURF_1.h
    include/enedisTIC/datasets/standard/PPOINTE.h
    include/enedisTIC/datasets/standard/PREF.h
    include/enedisTIC/datasets/standard/PRM.h
    include/enedisTIC/datasets/standard/RELAIS.h
    include/enedisTIC/datasets/standard/SINSTS.h
    include/enedisTIC/datasets/standard/SINSTS1.h
    include/enedisTIC/datasets/standard/SINSTS2.h
    include/enedisTIC/datasets/standard/SINSTS3.h
    include/enedisTIC/datasets/standard/SMAXSN.h
    include/enedisTIC/datasets/standard/SMAXSN1.h
    include/enedisTIC/datasets/standard/SMAXSN1_1.h
    include/enedisTIC/datasets/standard/SMAXSN2.h
    include/enedisTIC/datasets/standard/SMAXSN2_1.h
    include/enedisTIC/datasets/standard/SMAXSN3.h
    include/enedisTIC/datasets/standard/SMAXSN3_1.h
    include/enedisTIC/datasets/standard/SMAXSN_1.h
    include/enedisTIC/datasets/standard/STGE.h
    include/enedisTIC/datasets/standard/UMOY1.h
    include/enedisTIC/datasets/standard/UMOY2.h
    include/enedisTIC/datasets/standard/UMOY3.h
    include/enedisTIC/datasets/standard/URMS1.h
    include/enedisTIC/datasets/standard/URMS2.h
    include/enedisTIC/datasets/standard/URMS3.h
    include/enedisTIC/datasets/standard/VTIC.h
    include/enedisTIC/libEnedisTIC_global.h
    include/enedisTIC/transport/Frame.h
    include/enedisTIC/utils.h
    src/enedisTIC/DatasetFactory.cpp
    src/enedisTIC/FrameBuffer.cpp
    src/enedisTIC/FrameProcessor.cpp
    src/enedisTIC/datasets/AbstractDataset.cpp
    src/enedisTIC/datasets/GenericDataset.cpp
    src/enedisTIC/datasets/historical/ADCO.cpp
    src/enedisTIC/datasets/historical/BBRHCJB.cpp
    src/enedisTIC/datasets/historical/BBRHCJR.cpp
    src/enedisTIC/datasets/historical/BBRHCJW.cpp
    src/enedisTIC/datasets/historical/BBRHPJB.cpp
    src/enedisTIC/datasets/historical/BBRHPJR.cpp
    src/enedisTIC/datasets/historical/BBRHPJW.cpp
    src/enedisTIC/datasets/historical/DEMAIN.cpp
    src/enedisTIC/datasets/historical/HHPHC.cpp
    src/enedisTIC/datasets/historical/IINST1.cpp
    src/enedisTIC/datasets/historical/IINST2.cpp
    src/enedisTIC/datasets/historical/IINST3.cpp
    src/enedisTIC/datasets/historical/IMAX1.cpp
    src/enedisTIC/datasets/historical/IMAX2.cpp
    src/enedisTIC/datasets/historical/IMAX3.cpp
    src/enedisTIC/datasets/historical/ISOUSC.cpp
    src/enedisTIC/datasets/historical/MOTDETAT.cpp
    src/enedisTIC/datasets/historical/OPTARIF.cpp
    src/enedisTIC/datasets/historical/PAPP.cpp
    src/enedisTIC/datasets/historical/PMAX.cpp
    src/enedisTIC/datasets/historical/PPOT.cpp
    src/enedisTIC/datasets/historical/PTEC.cpp
    src/enedisTIC/datasets/standard/ADSC.cpp
    src/enedisTIC/datasets/standard/CCASN.cpp
    src/enedisTIC/datasets/standard/CCASN_1.cpp
    src/enedisTIC/datasets/standard/DATE.cpp
    src/enedisTIC/datasets/standard/EASD01.cpp
    src/enedisTIC/datasets/standard/EASD02.cpp
    src/enedisTIC/datasets/standard/EASD03.cpp
    src/enedisTIC/datasets/standard/EASD04.cpp
    src/enedisTIC/datasets/standard/EASF01.cpp
    src/enedisTIC/datasets/standard/EASF02.cpp
    src/enedisTIC/datasets/standard/EASF03.cpp
    src/enedisTIC/datasets/standard/EASF04.cpp
    src/enedisTIC/datasets/standard/EASF05.cpp
    src/enedisTIC/datasets/standard/EASF06.cpp
    src/enedisTIC/datasets/standard/EASF07.cpp
    src/enedisTIC/datasets/standard/EASF08.cpp
    src/enedisTIC/datasets/standard/EASF09.cpp
    src/enedisTIC/datasets/standard/EASF10.cpp
    src/enedisTIC/datasets/standard/EAST.cpp
    src/enedisTIC/datasets/standard/IRMS1.cpp
    src/enedisTIC/datasets/standard/IRMS2.cpp
    src/enedisTIC/datasets/standard/IRMS3.cpp
    src/enedisTIC/datasets/standard/LTARF.cpp
    src/enedisTIC/datasets/standard/MSG1.cpp
    src/enedisTIC/datasets/standard/MSG2.cpp
    src/enedisTIC/datasets/standard/NGTF.cpp
    src/enedisTIC/datasets/standard/NJOURF.cpp
    src/enedisTIC/datasets/standard/NJOURF_1.cpp
    src/enedisTIC/datasets/standard/NTARF.cpp
    src/enedisTIC/datasets/standard/PCOUP.cpp
    src/enedisTIC/datasets/standard/PJOURF_1.cpp
    src/enedisTIC/datasets/standard/PPOINTE.cpp
    src/enedisTIC/datasets/standard/PREF.cpp
    src/enedisTIC/datasets/standard/PRM.cpp
    src/enedisTIC/datasets/standard/RELAIS.cpp
    src/enedisTIC/datasets/standard/SINSTS.cpp
    src/enedisTIC/datasets/standard/SINSTS1.cpp
    src/enedisTIC/datasets/standard/SINSTS2.cpp
    src/enedisTIC/datasets/standard/SINSTS3.cpp
    src/enedisTIC/datasets/standard/SMAXSN.cpp
    src/enedisTIC/datasets/standard/SMAXSN1.cpp
    src/enedisTIC/datasets/standard/SMAXSN1_1.cpp
    src/enedisTIC/datasets/standard/SMAXSN2.cpp
    src/enedisTIC/datasets/standard/SMAXSN2_1.cpp
    src/enedisTIC/datasets/standard/SMAXSN3.cpp
    src/enedisTIC/datasets/standard/SMAXSN3_1.cpp
    src/enedisTIC/datasets/standard/SMAXSN_1.cpp
    src/enedisTIC/datasets/standard/STGE.cpp
    src/enedisTIC/datasets/standard/UMOY1.cpp
    src/enedisTIC/datasets/standard/UMOY2.cpp
    src/enedisTIC/datasets/standard/UMOY3.cpp
    src/enedisTIC/datasets/standard/URMS1.cpp
    src/enedisTIC/datasets/standard/URMS2.cpp
    src/enedisTIC/datasets/standard/URMS3.cpp
    src/enedisTIC/datasets/standard/VTIC.cpp
    src/enedisTIC/transport/Frame.cpp
    src/enedisTIC/utils.cpp
)
target_include_directories(enedisTIC PUBLIC
    include
    include/enedisTIC
    include/enedisTIC/datasets
    include/enedisTIC/datasets/historical
    include/enedisTIC/datasets/standard
    include/enedisTIC/transport
    src
)

target_compile_definitions(enedisTIC PUBLIC
    LIBENEDISTIC_LIBRARY
    QT_DEPRECATED_WARNINGS QT_DEPRECATED_WARNINGS
)

# target_link_libraries(enedisTIC PUBLIC
#     Qt::Core
#     Qt::Gui
# )

install(TARGETS enedisTIC
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    FRAMEWORK DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
