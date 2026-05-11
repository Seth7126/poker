// ============================================================
// 函数名称: sub_4b8bb8
// 虚拟地址: 0x4b8bb8
// WARP GUID: b9d746aa-23b5-57b9-955f-b33cf9380729
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403420, sub_403430, sub_4b764c
// [被调用的父级函数]: sub_4e6659, sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_4b8bb8(int32_t* arg1)
{
    // 第一条实际指令: int32_t edx
    int32_t edx
    sub_403430(arg1, edx)
    int32_t result
    char ebx_1
    result, ebx_1 = sub_4b764c(arg1, arg1[0x30f47])
    
    if (ebx_1 s<= 0)
        return result
    
    return sub_403420(arg1)
}
