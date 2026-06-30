# noi-handbook

《信息学奥赛一本通（C++ 版）》练习结果记录。

题目来源：<http://ybt.ssoier.cn:8088/problem_list.php>

## 目录结构

- `1xxx.cpp` / `2xxx.cpp` — 按题号命名的题解源码
- `run.sh` — 编译并运行某道题的脚本
- `.gitignore` — 白名单策略，仅同步 `.cpp` / `.sh` / `.md` 等源码与脚本，不提交编译产物

## 使用方法

编译并运行某道题：

```bash
./run.sh 1000
```

脚本会用 `g++ -std=c++17 -O2 -Wall` 编译 `1000.cpp` 为 `1000`，然后直接运行，等待你输入测试数据。
