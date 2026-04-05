cmake_minimum_required(VERSION 3.20)
project(CP_Workspace CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(CP_BUILD_ALL "Build every .cpp as an executable" ON)

# 競プロ/学習用: 各 .cpp をそれぞれ単体の実行ファイルとして作る
# - 同名ファイル衝突を避けるため、ターゲット名は相対パス由来にする
# - build ディレクトリなどを誤って拾わないよう除外する
if(CP_BUILD_ALL)
    file(GLOB_RECURSE CPP_FILES CONFIGURE_DEPENDS
            RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}"
            "*.cpp"
    )

    set(CP_EXCLUDE_PREFIXES
            "cmake-build-"
            "build/"
            ".idea/"
    )

    foreach(CPP_FILE IN LISTS CPP_FILES)
        set(SKIP FALSE)
        foreach(PREFIX IN LISTS CP_EXCLUDE_PREFIXES)
            if(CPP_FILE MATCHES "^${PREFIX}")
                set(SKIP TRUE)
            endif()
        endforeach()

        if(SKIP)
            continue()
        endif()

        # ターゲット名 = "dir_file" 形式 (例: ITP1/ITP1_1_C.cpp -> ITP1_ITP1_1_C)
        string(REPLACE "/" "_" TARGET_NAME "${CPP_FILE}")
        string(REPLACE ".cpp" "" TARGET_NAME "${TARGET_NAME}")

        add_executable("${TARGET_NAME}" "${CPP_FILE}"
                ITP1/ITP1_2_D.cpp)

        if(MSVC)
            target_compile_options("${TARGET_NAME}" PRIVATE /W4)
        else()
            target_compile_options("${TARGET_NAME}" PRIVATE -Wall -Wextra -Wpedantic)
        endif()
    endforeach()
endif()