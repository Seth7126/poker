// ============================================================
// 函数名称: sub_437030
// 虚拟地址: 0x437030
// WARP GUID: cdddd4f3-7866-50ea-8d00-3864488d7560
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403420, sub_4030d0, sub_4372f4, sub_41060c, sub_415d64, sub_403430, sub_437bec
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_437030(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: sub_403430(arg1, arg2)
    sub_403430(arg1, arg2)
    
    while (true)
        int32_t* esi_1 = arg1[0x10]
        
        if (esi_1[2] s<= 0)
            break
        
        sub_437bec(arg1, sub_41060c(esi_1))
    
    sub_4030d0(arg1[0x11])
    sub_4372f4(arg1)
    sub_4030d0(arg1[0x10])
    arg1[0x10] = 0
    int32_t* eax_6 = arg1[0x12]
    
    if (eax_6 != 0)
        sub_4030d0(eax_6)
    
    int32_t edx_1
    edx_1.b = arg2.b & 0xfc
    int32_t result = sub_415d64(arg1, edx_1)
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
