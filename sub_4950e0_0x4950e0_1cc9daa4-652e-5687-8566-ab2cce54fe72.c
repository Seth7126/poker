// ============================================================
// 函数名称: sub_4950e0
// 虚拟地址: 0x4950e0
// WARP GUID: 1cc9daa4-652e-5687-8566-ab2cce54fe72
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403420, sub_4030d0, sub_440d6c, sub_494fc8, sub_403430, sub_4030c0, sub_40276c
// [被调用的父级函数]: sub_496545, sub_4965ed
// ============================================================

int32_t __convention("regparm")sub_4950e0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: sub_403430(arg1, arg2)
    sub_403430(arg1, arg2)
    arg1[0xc] = 0
    arg1[0xd] = 0
    
    if (arg1[2].b != 0 && arg1[1] != 0xffffffff)
        arg1[1]
        (*(*arg1 + 8))()
    
    HWND eax_1 = arg1[5]
    
    if (eax_1 != 0)
        sub_440d6c(eax_1)
    
    sub_4030d0(arg1[0x10])
    sub_494fc8()
    int32_t ecx_2 = sub_40276c(arg1[0x11])
    arg1[0x11] = 0
    int32_t edx_1
    edx_1.b = arg2.b & 0xfc
    int32_t result = sub_4030c0(ecx_2, edx_1)
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
