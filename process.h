#ifndef PROCESS_H
#define PROCESS_H

class Process {              //状态压缩矩阵的结点，用于寻找路径
public:
    int distance;//存储从起点到当前节点的累计距离。
    int pre{-1};//存储前一个节点的索引，初始化为 -1 表示尚未确定
    int now{-1};//存储当前节点的索引，初始化为 -1 表示尚未确定。
    int next{-1};//存储下一个节点的索引，初始化为 -1 表示尚未确定
};

#endif // PROCESS_H
