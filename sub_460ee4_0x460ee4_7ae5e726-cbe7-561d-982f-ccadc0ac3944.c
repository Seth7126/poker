// ============================================================
// 函数名称: sub_460ee4
// 虚拟地址: 0x460ee4
// WARP GUID: 7ae5e726-cbe7-561d-982f-ccadc0ac3944
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_460ee4(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg1[4] != 0x66)
    if (arg1[4] != 0x66)
        void* eax = *arg1
        *(eax + 0x14) = 0x12
        *(eax + 0x18) = arg1[4]
        (**arg1)()
    
    if (*(arg1 + 0xd5) u>= arg1[7])
        *(*arg1 + 0x14) = 0x77
        (*(*arg1 + 4))()
        return 0
    
    void* eax_5 = arg1[2]
    
    if (eax_5 != 0)
        *(eax_5 + 4) = *(arg1 + 0xd5)
        *(eax_5 + 8) = arg1[7]
        (*arg1[2])()
    
    if (*(*(arg1 + 0x141) + 0xc) != 0)
        (*(*(arg1 + 0x141) + 4))()
    
    int32_t result = *(arg1 + 0xe1) << 3
    
    if (result u> arg3)
        *(*arg1 + 0x14) = 0x15
        (**arg1)()
    
    if ((*(*(arg1 + 0x14d) + 4))() == 0)
        return 0
    
    *(arg1 + 0xd5) += result
    return result
}
