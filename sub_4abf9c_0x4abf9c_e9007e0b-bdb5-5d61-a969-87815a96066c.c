// ============================================================
// 函数名称: sub_4abf9c
// 虚拟地址: 0x4abf9c
// WARP GUID: e9007e0b-bdb5-5d61-a969-87815a96066c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4abb48
// [被调用的父级函数]: sub_4ab1a0
// ============================================================

int32_t __convention("regparm")sub_4abf9c(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    int32_t result = (*data_5306c8)(*(arg1 + 0x14), arg2, arg3)
    int32_t eax_6 = sub_4abb48(arg1, result)
    
    if (eax_6 != 2 && eax_6 != 3)
        return result
    
    return (*data_5306c8)(*(arg1 + 0x14), arg2, arg3)
}
