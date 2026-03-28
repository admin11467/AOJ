cmake_minimum_required(VERSION 3.20)
project(CP_Workspace CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 1. 検索対象からビルドディレクトリ（buildなど）を除外するのが良い
file(GLOB_RECURSE CPP_FILES
        RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}
        "*.cpp"
)

foreach(CPP_FILE ${CPP_FILES})
    # ファイル名（拡張子なし）をターゲット名にする
    get_filename_component(TARGET_NAME ${CPP_FILE} NAME_WE)

    # ターゲット名が重複しないよう注意（異なるフォルダに同名ファイルがある場合）
    add_executable(${TARGET_NAME} ${CPP_FILE}
            ITP1/ITP1_1_B.cpp)

    # 必要であればコンパイルオプションを追加
    target_compile_options(${TARGET_NAME} PRIVATE -Wall -Wextra)
endforeach()