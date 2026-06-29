#!/bin/bash
# Usage: ./run.sh <题号>
# 例如: ./run.sh 1000

if [ -z "$1" ]; then
    echo "用法: $0 <题号>"
    echo "例如: $0 1000"
    exit 1
fi

DIR="$(cd "$(dirname "$0")" && pwd)"
SRC="$DIR/$1.cpp"
BIN="$DIR/$1"

if [ ! -f "$SRC" ]; then
    echo "错误: 找不到源文件 $SRC"
    exit 1
fi

echo "==> 编译 $1.cpp"
g++ -std=c++17 -O2 -Wall "$SRC" -o "$BIN" || exit 1

echo "==> 运行 $1"
echo "---"
"$BIN"
