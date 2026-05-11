// ============================================================
// 函数名称: sub_417cb8
// 虚拟地址: 0x417cb8
// WARP GUID: 4de49417-7d0a-5da2-89ed-265b7f7f2d9c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_417d44
// ============================================================

int16_t __convention("regparm")sub_417cb8(char* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t i_1 = arg2
    int32_t i_1 = arg2
    char* edx = arg1
    int16_t result = 0
    int32_t i
    
    do
        result.b = rol.w(result, 5).b ^ *edx
        edx = &edx[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
    return result
}
