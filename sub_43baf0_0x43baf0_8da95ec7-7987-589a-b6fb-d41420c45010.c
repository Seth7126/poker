// ============================================================
// 函数名称: sub_43baf0
// 虚拟地址: 0x43baf0
// WARP GUID: 8da95ec7-7987-589a-b6fb-d41420c45010
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4105a0, sub_43b964, sub_43b908, sub_439f30, sub_4030a0, sub_4391ac, sub_410524, sub_439fb4
// [被调用的父级函数]: sub_43bc98, sub_43b9e4
// ============================================================

int32_t __convention("regparm")sub_43baf0(int32_t* arg1, int32_t arg2, uint32_t arg3)
{
    // 第一条实际指令: uint32_t esi = arg3
    uint32_t esi = arg3
    int32_t edi = arg2
    
    if (*(esi + 0x58) != 0)
        sub_4391ac(data_530a4c)
        noreturn
    
    if (arg1[0x14] == 0)
        arg2.b = 1
        int32_t eax_2
        eax_2, arg3 = sub_4030a0(arg3, arg2)
        arg1[0x14] = eax_2
    
    if (edi - 1 s>= 0 && edi - 1 s< *(arg1[0x14] + 8))
        void* eax_5
        eax_5.b = *(sub_410524(arg1[0x14], edi - 1) + 0x33)
        
        if (eax_5.b u> *(esi + 0x33))
            int32_t edx_1
            edx_1.b = *(sub_410524(arg1[0x14], edi - 1) + 0x33)
            sub_43b908(esi, edx_1)
    
    arg3.b = *(esi + 0x33)
    sub_439fb4(arg1, edi, arg3)
    sub_4105a0(arg1[0x14], edi, esi)
    *(esi + 0x58) = arg1
    *(esi + 0x7c) = arg1
    *(esi + 0x78) = sub_43bd18
    
    if (arg1[0xa] != 0)
        sub_439f30(arg1)
    
    int32_t eax_13
    int32_t edx_4
    eax_13, edx_4 = sub_43b964(arg1)
    edx_4.b = eax_13 == 1
    return (*(*arg1 + 0x38))()
}
