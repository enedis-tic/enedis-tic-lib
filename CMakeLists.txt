#
##  @see    https://stackoverflow.com/questions/67397957/install-header-files-respecting-subdirectories-with-cmake
#

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


add_library(${PROJECT_NAME} SHARED)

target_include_directories(
    ${PROJECT_NAME}
        PRIVATE
            # include
            include/enedisTIC/
            include/enedisTIC/datasets/
            include/enedisTIC/datasets/historical
            include/enedisTIC/datasets/standard
            include/enedisTIC/transport
            src
)

target_sources(
    ${PROJECT_NAME}
        PUBLIC
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


target_compile_definitions(
    ${PROJECT_NAME}
        PUBLIC
            LIBENEDISTIC_LIBRARY
            QT_DEPRECATED_WARNINGS QT_DEPRECATED_WARNINGS
)


install(
    DIRECTORY
        include/
    DESTINATION
        ${CMAKE_INSTALL_INCLUDEDIR} #/${PROJECT_NAME}
    FILES_MATCHING PATTERN "*.h"
    PATTERN "*_p.h" EXCLUDE
)

install(
    TARGETS
        ${PROJECT_NAME}
            LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
            FRAMEWORK DESTINATION ${CMAKE_INSTALL_LIBDIR}
            RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
