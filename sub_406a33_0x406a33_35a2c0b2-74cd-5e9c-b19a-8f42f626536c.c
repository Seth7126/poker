// ============================================================
// 函数名称: sub_406a33
// 虚拟地址: 0x406a33
// WARP GUID: 35a2c0b2-74cd-5e9c-b19a-8f42f626536c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_406a33(int32_t arg1, int32_t arg2, char arg3) __pure
{
    // 第一条实际指令: if (arg3 s< 0x20)
    if (arg3 s< 0x20)
        return arg1 u>> (0x1f & arg3) | arg2 << (0x20 - (0x1f & arg3))
    
    if (arg3 s>= 0x40)
        return arg2 s>> 0x1f
    
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = sx.q(arg2)
    return eax_2 s>> arg3
}
