// ============================================================
// 函数名称: sub_4b5510
// 虚拟地址: 0x4b5510
// WARP GUID: 18abe2a9-9930-5bbd-a580-f8d3580eef41
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetFileAttributesA
// [内部子函数调用]: sub_40423c
// [被调用的父级函数]: sub_4b44d0, sub_4b5160
// ============================================================

uint32_t __convention("regparm")sub_4b5510(int32_t arg1)
{
    // 第一条实际指令: uint32_t result = GetFileAttributesA(sub_40423c(arg1))
    uint32_t result = GetFileAttributesA(sub_40423c(arg1))
    
    if (result == 0xffffffff || (result.b & 0x10) == 0)
        return 0
    
    result.b = 1
    return result
}
