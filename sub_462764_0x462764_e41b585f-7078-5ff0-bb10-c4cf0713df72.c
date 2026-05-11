// ============================================================
// 函数名称: sub_462764
// 虚拟地址: 0x462764
// WARP GUID: e41b585f-7078-5ff0-bb10-c4cf0713df72
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_462bf8
// ============================================================

int32_t __convention("regparm")sub_462764(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: void* ebx = *(arg1 + 0x149)
    void* ebx = *(arg1 + 0x149)
    
    if (arg2 != 0)
        *(*arg1 + 0x14) = 4
        (**arg1)()
    
    *(ebx + 0x30) = arg1[7]
    *(ebx + 0x34) = 0
    *(ebx + 0x38) = 0
    *(ebx + 0x3c) = *(arg1 + 0xe1) * 2
    return 0
}
