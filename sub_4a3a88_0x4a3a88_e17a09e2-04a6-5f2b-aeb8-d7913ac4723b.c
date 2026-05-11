// ============================================================
// 函数名称: sub_4a3a88
// 虚拟地址: 0x4a3a88
// WARP GUID: e17a09e2-04a6-5f2b-aeb8-d7913ac4723b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403430, sub_403420, sub_410cf8
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4a3a88(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: sub_403430(arg1, arg2)
    sub_403430(arg1, arg2)
    int32_t ebx = arg2
    arg2.b = 1
    (*(*arg1 + 0x1c))()
    int32_t edx
    edx.b = ebx.b & 0xfc
    int32_t result = sub_410cf8(arg1, edx)
    
    if (ebx.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
