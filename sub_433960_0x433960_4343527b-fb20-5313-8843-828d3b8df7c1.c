// ============================================================
// 函数名称: sub_433960
// 虚拟地址: 0x433960
// WARP GUID: 4343527b-fb20-5313-8843-828d3b8df7c1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_434984, sub_403420, sub_4030d0, sub_403430, sub_4030c0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_433960(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: sub_403430(arg1, arg2)
    sub_403430(arg1, arg2)
    
    if (arg1[0xc] != 0)
        void* eax = arg1[5]
        *(eax + 0x28) = arg1[0xc]
        *(eax + 0x2c) = arg1[0xd]
    
    sub_434984(arg1, arg1[0x19])
    int32_t edx_3
    edx_3.b = arg2.b & 0xfc
    int32_t result = sub_4030c0(sub_4030d0(arg1[4]), edx_3)
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
