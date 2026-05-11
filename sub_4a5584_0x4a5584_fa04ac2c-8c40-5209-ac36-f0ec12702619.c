// ============================================================
// 函数名称: sub_4a5584
// 虚拟地址: 0x4a5584
// WARP GUID: fa04ac2c-8c40-5209-ac36-f0ec12702619
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4a33f0, sub_403430, sub_403420
// [被调用的父级函数]: sub_4a94bc
// ============================================================

int32_t __convention("regparm")sub_4a5584(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: sub_403430(arg1, arg2)
    sub_403430(arg1, arg2)
    (*(*arg1 + 0x40))()
    int32_t edx_1
    edx_1.b = arg2.b & 0xfc
    int32_t result = sub_4a33f0(arg1, edx_1)
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
