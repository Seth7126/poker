// ============================================================
// 函数名称: sub_402014
// 虚拟地址: 0x402014
// WARP GUID: 671ce89f-5d7d-5c00-a5d5-f8e7dc918a37
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_401f88, sub_401880
// [被调用的父级函数]: sub_4020a0
// ============================================================

int32_t __convention("regparm")sub_402014(int32_t arg1)
{
    // 第一条实际指令: int32_t var_c
    int32_t var_c
    sub_401880(arg1 + 4, &var_c)
    
    if (var_c != 0 && sub_401f88(&var_c) != 0)
        return 1
    
    return 0
}
