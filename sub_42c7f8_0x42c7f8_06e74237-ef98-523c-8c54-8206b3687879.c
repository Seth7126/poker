// ============================================================
// 函数名称: sub_42c7f8
// 虚拟地址: 0x42c7f8
// WARP GUID: 06e74237-ef98-523c-8c54-8206b3687879
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42aebc
// [被调用的父级函数]: sub_42b128, sub_432d3c
// ============================================================

int32_t __convention("regparm")sub_42c7f8(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: *(arg1 + 0x30) = *arg2
    *(arg1 + 0x30) = *arg2
    *(arg1 + 0x34) = arg2[1]
    *(arg1 + 0x38) = arg2[2] - *arg2
    *(arg1 + 0x3c) = arg2[3] - arg2[1]
    return sub_42aebc(arg1)
}
