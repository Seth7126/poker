// ============================================================
// 函数名称: sub_423cd4
// 虚拟地址: 0x423cd4
// WARP GUID: 157ac3f2-8782-5e15-bbee-182e69272ae1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_423ca0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_423cd4(int32_t* arg1, char arg2)
{
    // 第一条实际指令: char result = sub_423ca0(arg1)
    char result = sub_423ca0(arg1)
    
    if (arg2 == result)
        return result
    
    if (arg2 == 0)
        arg1[0x10] |= 0x40
    else
        arg1[0x10] &= 0xffffffbf
    
    return (*(*arg1 + 0x74))()
}
