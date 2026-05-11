// ============================================================
// 函数名称: sub_454f30
// 虚拟地址: 0x454f30
// WARP GUID: 0dba611b-731b-5950-8770-f3a181c130f9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_454dec, sub_455a18
// [被调用的父级函数]: sub_45591c, sub_454fd0, sub_4550a4
// ============================================================

void* __convention("regparm")sub_454f30(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_14 = arg3
    int32_t var_14 = arg3
    int32_t esi = arg3
    void* edi = arg1[1]
    
    if (esi u> 0x3b9ac9f4)
        arg3 = sub_454dec(arg1, 3)
    
    int32_t eax_2 = esi & 7
    
    if (eax_2 u> 0)
        esi += 8 - eax_2
    
    if (arg2 s< 0 || arg2 s>= 2)
        void* eax_3 = *arg1
        *(eax_3 + 0x14) = 0xc
        *(eax_3 + 0x18) = arg2
        arg3 = (**arg1)(arg2)
    
    int32_t* eax_6 = sub_455a18(arg3, esi + 0xc)
    
    if (eax_6 == 0)
        sub_454dec(arg1, 4)
    
    *(edi + 0x48) = *(edi + 0x48) + esi + 0xc
    *eax_6 = *(edi + (arg2 << 2) + 0x38)
    eax_6[1] = esi
    eax_6[2] = 0
    *(edi + (arg2 << 2) + 0x38) = eax_6
    return &eax_6[3]
}
