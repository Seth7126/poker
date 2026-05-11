// ============================================================
// 函数名称: sub_4562e0
// 虚拟地址: 0x4562e0
// WARP GUID: 5c3f6006-1865-559d-9c00-e97c4935f9fa
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4562e0(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg1[4] != 0xce)
    if (arg1[4] != 0xce)
        void* eax = *arg1
        *(eax + 0x14) = 0x12
        *(eax + 0x18) = arg1[4]
        (**arg1)()
    
    if (arg1[0x22] u>= arg1[0x1c])
        *(*arg1 + 0x14) = 0x77
        (*(*arg1 + 4))()
        return 0
    
    void* eax_5 = arg1[2]
    
    if (eax_5 != 0)
        *(eax_5 + 4) = arg1[0x22]
        *(eax_5 + 8) = arg1[0x1c]
        (*arg1[2])()
    
    int32_t result = *(arg1 + 0x12a) * *(arg1 + 0x12e)
    
    if (result u> arg3)
        *(*arg1 + 0x14) = 0x15
        (**arg1)()
    
    if ((*(*(arg1 + 0x19e) + 0xc))() == 0)
        return 0
    
    arg1[0x22] += result
    return result
}
