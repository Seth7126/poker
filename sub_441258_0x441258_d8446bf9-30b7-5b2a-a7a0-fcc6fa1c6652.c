// ============================================================
// 函数名称: sub_441258
// 虚拟地址: 0x441258
// WARP GUID: d8446bf9-30b7-5b2a-a7a0-fcc6fa1c6652
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetWindowLongA
// [内部子函数调用]: sub_4318d0
// [被调用的父级函数]: sub_44128c
// ============================================================

int32_t __convention("regparm")sub_441258(int16_t arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebx = 0x100000
    int32_t ebx = 0x100000
    
    if (arg1 == 1)
        ebx = 0x200000
    
    int32_t result
    result.b = (GetWindowLongA(sub_4318d0(*(*(arg2 - 4) + 4)), 0xfffffff0) & ebx) != 0
    return result
}
