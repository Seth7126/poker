// ============================================================
// 函数名称: sub_406a4f
// 虚拟地址: 0x406a4f
// WARP GUID: b4ba4c50-0954-56c2-9660-9d63c90d9f9c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_406a4f(int32_t arg1, int32_t arg2, char arg3) __pure
{
    // 第一条实际指令: if (arg3 s< 0x20)
    if (arg3 s< 0x20)
        return arg1 u>> (0x1f & arg3) | arg2 << (0x20 - (0x1f & arg3))
    
    if (arg3 s< 0x40)
        return arg2 u>> arg3
    
    return 0
}
