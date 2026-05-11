// ============================================================
// 函数名称: sub_4088b8
// 虚拟地址: 0x4088b8
// WARP GUID: 81f31d1d-6c13-5634-adad-1adfbbb285ae
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402754
// [被调用的父级函数]: sub_4493c8
// ============================================================

void* __convention("regparm")sub_4088b8(int32_t arg1)
{
    // 第一条实际指令: int32_t* eax = sub_402754(0xc)
    int32_t* eax = sub_402754(0xc)
    *eax = data_52e140
    eax[1] = *data_52ff68
    eax[2] = arg1
    data_52e140 = eax
    void* result = data_52ff68
    *result = sub_40888c
    return result
}
