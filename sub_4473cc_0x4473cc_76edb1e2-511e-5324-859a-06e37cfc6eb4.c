// ============================================================
// 函数名称: sub_4473cc
// 虚拟地址: 0x4473cc
// WARP GUID: 76edb1e2-511e-5324-859a-06e37cfc6eb4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402754
// [被调用的父级函数]: sub_447314
// ============================================================

int32_t* __convention("regparm")sub_4473cc(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t* result = sub_402754(0xc)
    int32_t* result = sub_402754(0xc)
    *result = *(arg1 + 0x50)
    result[1] = arg2
    result[2] = arg3
    *(arg1 + 0x50) = result
    return result
}
