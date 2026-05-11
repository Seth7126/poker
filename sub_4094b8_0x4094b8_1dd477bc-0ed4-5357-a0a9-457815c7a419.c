// ============================================================
// 函数名称: sub_4094b8
// 虚拟地址: 0x4094b8
// WARP GUID: 1dd477bc-0ed4-5357-a0a9-457815c7a419
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_43d1a0
// ============================================================

int32_t __convention("regparm")sub_4094b8(void* arg1, void* arg2)
{
    // 第一条实际指令: void* edi = arg2
    void* edi = arg2
    void* esi = arg1
    int32_t i = 0xffffffff
    
    while (i != 0)
        bool cond:0_1 = 0 != *edi
        edi += 1
        i -= 1
        
        if (not(cond:0_1))
            break
    
    int32_t i_1 = not.d(i)
    void* edi_1 = arg2
    
    while (i_1 != 0)
        bool cond:1_1 = *esi == *edi_1
        esi += 1
        edi_1 += 1
        i_1 -= 1
        
        if (not(cond:1_1))
            break
    
    int32_t eax
    eax.b = *(esi - 1)
    int32_t edx
    edx.b = *(edi_1 - 1)
    return eax - edx
}
