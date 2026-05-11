// ============================================================
// 函数名称: sub_4470f0
// 虚拟地址: 0x4470f0
// WARP GUID: afe75c20-a5a1-5c22-b75f-7c57bba6acb8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403420, sub_4030d0, sub_415d64, sub_447370, sub_403430, sub_410524
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4470f0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: sub_403430(arg1, arg2)
    sub_403430(arg1, arg2)
    sub_4030d0(arg1[0x1d])
    sub_4030d0(arg1[0x1f])
    sub_4030d0(arg1[0x1e])
    sub_4030d0(arg1[0x12])
    sub_4030d0(arg1[0x11])
    sub_4030d0(arg1[0x10])
    sub_4030d0(arg1[9])
    sub_4030d0(arg1[0xa])
    sub_4030d0(arg1[0x1c])
    void* eax_9 = arg1[0x13]
    
    if (eax_9 != 0)
        int32_t esi_2 = *(eax_9 + 8) - 1
        
        if (esi_2 s>= 0)
            int32_t i_1 = esi_2 + 1
            int32_t edi_1 = 0
            int32_t i
            
            do
                sub_4030d0(sub_410524(arg1[0x13], edi_1))
                edi_1 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    sub_4030d0(arg1[0x13])
    sub_447370(arg1)
    int32_t edx_1
    edx_1.b = arg2.b & 0xfc
    int32_t result = sub_415d64(arg1, edx_1)
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
