// ============================================================
// 函数名称: sub_441220
// 虚拟地址: 0x441220
// WARP GUID: 0c13d75f-9a12-54bc-a133-1ebd98cd89e2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetWindowLongA
// [内部子函数调用]: sub_4318d0
// [被调用的父级函数]: sub_441c2c, sub_441068
// ============================================================

int32_t __convention("regparm")sub_441220(void* arg1)
{
    // 第一条实际指令: int32_t esi = 0x100000
    int32_t esi = 0x100000
    
    if (*(arg1 + 0x18) == 1)
        esi = 0x200000
    
    if (*(arg1 + 0x1c) != 0 && (GetWindowLongA(sub_4318d0(*(arg1 + 4)), 0xfffffff0) & esi) != 0)
        int32_t result
        result.b = 1
        return result
    
    return 0
}
