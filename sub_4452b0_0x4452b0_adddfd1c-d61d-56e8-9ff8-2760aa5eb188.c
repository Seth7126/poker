// ============================================================
// 函数名称: sub_4452b0
// 虚拟地址: 0x4452b0
// WARP GUID: adddfd1c-d61d-56e8-9ff8-2760aa5eb188
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_443d2c, sub_4451b4
// [被调用的父级函数]: 无
// ============================================================

BOOL __convention("regparm")sub_4452b0(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    (*(*arg1 - 0x10))(arg1)
    void* ebp = sub_443d2c(arg1, arg1[0x8c])
    BOOL result = *(ebp - 4)
    
    if ((*(result + 0x20) & 0x10) == 0)
        result = sub_4451b4(ebp)
    
    return result
}
